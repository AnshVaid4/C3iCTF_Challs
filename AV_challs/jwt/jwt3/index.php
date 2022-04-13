<?php error_reporting(0); session_start(); ?>
<!DOCTYPE html>
<head>
    <title>Login</title>
    <link rel="stylesheet" href="loginstyles.css">
    <link rel="stylesheet" href="https://pro.fontawesome.com/releases/v5.10.0/css/all.css" integrity="sha384-AYmEC3Yw5cVb3ZcuHtOA93w35dYTsvhLPVnYs9eStHfGJvOvKxVfELGroGkvsg+p" crossorigin="anonymous"/>
</head>
<body>



<div class="top">    
<h1><u>Whois Lookup</u></h1><br>

<div class="form">
    <form method="POST" action="#">
        <label><center><i class="fas fa-globe"> Whois...</i></center></label><br>
        <center><input type="text" name="x" maxlength="100" placeholder="Enter domain name"></input></center><br>
        <input type="hidden" name="token" maxlength="100" value="<?php if($_SESSION['x'] == null) {echo "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJleGVjIjoiIn0.2HHKNG8ZZFb-NfQQfStMqKFLFM8CrbfizX7HMLB90lc";}else{ echo $_SESSION['x']; }?>" readonly required>
        <center><button name="submit">Go</button></center><br>
        <?php
            error_reporting(0);
            if(isset($_POST['submit']) and $_POST['x'] != null and $_POST['token'] != null)
            {
               

                // Create token header as a JSON string
                $header = json_encode(['typ' => 'JWT', 'alg' => 'HS256']);

                // Create token payload as a JSON string
                $payload = json_encode(['exec' =>  $_POST['x']]);

                // Encode Header to Base64Url String
                $base64UrlHeader = str_replace(['+', '/', '='], ['-', '_', ''], base64_encode($header));

                // Encode Payload to Base64Url String
                $base64UrlPayload = str_replace(['+', '/', '='], ['-', '_', ''], base64_encode($payload));

                // Create Signature Hash
                $signature = hash_hmac('sha256', $base64UrlHeader . "." . $base64UrlPayload, 'Sup3Rh4RdK3Y__xD', true);

                // Encode Signature to Base64Url String
                $base64UrlSignature = str_replace(['+', '/', '='], ['-', '_', ''], base64_encode($signature));

                // Create JWT
                $jwt = $base64UrlHeader . "." . $base64UrlPayload . "." . $base64UrlSignature;
                $token=($_POST['token']);
                // echo $token;
                $arr=explode(".",$token);
                $data=base64_decode($arr[1]);
                $id=json_decode($data,true)['exec'];
                echo $id;
                     
                $_SESSION['x'] = $jwt; 
                passthru();
            }
            if (isset($_POST['submit']) and ($_POST['x'] == null))
            {
                echo "All fields are necessary";
            }

        ?>
        <br>
        
    </form>
</div>
</div>
</body>
</html>