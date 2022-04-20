const flagInput = document.getElementById("flag")
const checkButton = document.getElementById("check_flag")
const correctFlag = document.getElementById("correct_flag")
const wrongFlag = document.getElementById("wrong_flag")

const checkFlag = () => {
	let flag = flagInput.value
	if (flag.length != (0x3b ^ 0xc) + 0x2) {
		wrongFlag.classList.toggle("flag_status")
		setTimeout(() => wrongFlag.classList.toggle("flag_status"), 4000)
		return false
	}
	if (flag.charAt(0)  !== String.fromCharCode((0x3e8 % 0x13) + 0x37)||
		flag.charAt(1)  !== String.fromCharCode((0x36 ^ 0xd) - 0x8)||
		flag.charAt(2)  !== String.fromCharCode(((0x23 + 0x10) * 0x2) + 0x3)||
		flag.charAt(3)  !== String.fromCharCode((0x3e8 % 0x13) + 0x37)||
		flag.charAt(4)  !== String.fromCharCode(((0x23 + 0x10) * 0x2) - 0x1)||
		flag.charAt(5)  !== String.fromCharCode(((0x41 % 0x7) ^ 0x70) - 0x4)||
		flag.charAt(6)  !== String.fromCharCode((0x19 ^ 0x4) * 0x4)||
		flag.charAt(7)  !== String.fromCharCode(((0x23 + 0x10) * 0x2) - 0x1)||
		flag.charAt(8)  !== String.fromCharCode((0x70 ^ 0x7) - 0x5)||
                flag.charAt(9)  !== String.fromCharCode((((((((0x6b % 0x25) * 0x5) ^ 0xfff) >> 0x4) * 0xe) & 0x55) * 0x2) - 0xd) ||		
		flag.charAt(56) !== String.fromCharCode(((((((((0x71 % 0x14) * 0xdc) / 0x16) << 0x5) / 0x10) >> 0x2) + 0x32) ^ 0xe)))
	{
		wrongFlag.classList.toggle("flag_status")
		setTimeout(() => wrongFlag.classList.toggle("flag_status"), 4000)
		return false
	}
	
	if (flag.charCodeAt(10).toString(2) !== "110111"  ||
		flag.charCodeAt(11).toString(2) !== "1001000" ||
		flag.charCodeAt(12).toString(2) !== "110011")
	{
		wrongFlag.classList.toggle("flag_status")
		setTimeout(() => wrongFlag.classList.toggle("flag_status"), 4000)
		return false
	}

	if ((parseInt(flag.charCodeAt(13).toString()) ^ 0x2f) !== 0x70) {
		wrongFlag.classList.toggle("flag_status")
		setTimeout(() => wrongFlag.classList.toggle("flag_status"), 4000)
		return false
	}

	if (convertAsciiToHex(flag.substring(14, 29)) !== "443356334c305033525f3730304c35") {
		wrongFlag.classList.toggle("flag_status")
		setTimeout(() => wrongFlag.classList.toggle("flag_status"), 4000)
		return false
	}

	if ((parseInt(flag.charCodeAt(29).toString()) ^ 0x2f) !== 0x70) {
		wrongFlag.classList.toggle("flag_status")
		setTimeout(() => wrongFlag.classList.toggle("flag_status"), 4000)
		return false
	}

	if (flag.charCodeAt(30).toString(8) !== "64"  ||
		flag.charCodeAt(31).toString(8) !== "122" ||
		flag.charCodeAt(32).toString(8) !== "63")
	{
		wrongFlag.classList.toggle("flag_status")
		setTimeout(() => wrongFlag.classList.toggle("flag_status"), 4000)
		return false
	}

	if ((parseInt(flag.charCodeAt(33).toString()) ^ 0x2f) !== 0x70) {
		wrongFlag.classList.toggle("flag_status")
		setTimeout(() => wrongFlag.classList.toggle("flag_status"), 4000)
		return false
	}

	if (convertAsciiToHex(flag.substring(34, 45).split("").reverse().join("")) !== "594b4334485f5233505535") {
		wrongFlag.classList.toggle("flag_status")
		setTimeout(() => wrongFlag.classList.toggle("flag_status"), 4000)
		return false
	}

	if ((parseInt(flag.charCodeAt(45).toString()) ^ 0x2f) !== 0x70) {
		wrongFlag.classList.toggle("flag_status")
		setTimeout(() => wrongFlag.classList.toggle("flag_status"), 4000)
		return false
	}

	sha1Sum(flag.substring(46, 50)).then(hash => {
		if (hash !== "77ba9cd915c8e359d9733edcfe9c61e5aca92afb") {
			wrongFlag.classList.toggle("flag_status")
			setTimeout(() => wrongFlag.classList.toggle("flag_status"), 4000)
			return false
		}
	})

	if ((parseInt(flag.charCodeAt(50).toString()) ^ 0x2f) !== 0x70) {
		wrongFlag.classList.toggle("flag_status")
		setTimeout(() => wrongFlag.classList.toggle("flag_status"), 4000)
		return false
	}

	if (btoa(convertAsciiToHex(flag.substring(51, 56).split("").reverse().join(""))) !== "MzU0YzMwMzAzNw==") {
		wrongFlag.classList.toggle("flag_status")
		setTimeout(() => wrongFlag.classList.toggle("flag_status"), 4000)
		return false
	}

		correctFlag.classList.add("flag_status")

}

const sha1Sum = str => {
	let buffer = new TextEncoder("UTF-8").encode(str);
	return crypto.subtle.digest("SHA-1", buffer).then(digest => {
		return hexEncodeRawBytes(digest);
	});
}

const hexEncodeRawBytes = digest => {
	let view = new DataView(digest);
	let hexEncodedHash = "";
	for (let i = 0; i < view.byteLength; i += 4) {
		let hexString = view.getUint32(i).toString(16);
		let padding = '00000000'
		let paddedHexString = (padding + hexString).slice(-padding.length)
		hexEncodedHash += paddedHexString;
	}
	return hexEncodedHash;
}

const convertAsciiToHex = str => {
	let hexBytes = ""
	for (let byte of str.split("")) {
		hexBytes += byte.charCodeAt().toString(16)
	}
	return hexBytes
}

checkButton.addEventListener("click", checkFlag)
