<?php error_reporting(0); session_start(); session_destroy();   


    $uname= htmlspecialchars($_POST['uname']);
    $passwd=  htmlspecialchars($_POST['passwd']);

    // Create token header as a JSON string
    $header = json_encode(['typ' => 'JWT', 'alg' => 'HS256']);

    // Create token payload as a JSON string
    $payload = json_encode(['uid' => 1, 'user' => 'guest']);

    // Encode Header to Base64Url String
    $base64UrlHeader = str_replace(['+', '/', '='], ['-', '_', ''], base64_encode($header));

    // Encode Payload to Base64Url String
    $base64UrlPayload = str_replace(['+', '/', '='], ['-', '_', ''], base64_encode($payload));

    // Create Signature Hash
    $signature = hash_hmac('sha256', $base64UrlHeader . "." . $base64UrlPayload, 'anthony', true);

    // Encode Signature to Base64Url String
    $base64UrlSignature = str_replace(['+', '/', '='], ['-', '_', ''], base64_encode($signature));

    // Create JWT
    $jwt = $base64UrlHeader . "." . $base64UrlPayload . "." . $base64UrlSignature;

    if($jwt!="eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJ1aWQiOiIwIiwidXNlciI6ImFkbWluIn0.9bV8G9D0q-PTwuZ-ZyQE1qn-8emcoxh3r9C4D3nGV9w")
    {
        echo "<h1>Invalid JWT token found</h1>";
    }

?>
<!DOCTYPE html>
<head>
    <title>Login</title>
    <link rel="stylesheet" href="loginstyles.css">
    <link rel="stylesheet" href="https://pro.fontawesome.com/releases/v5.10.0/css/all.css" integrity="sha384-AYmEC3Yw5cVb3ZcuHtOA93w35dYTsvhLPVnYs9eStHfGJvOvKxVfELGroGkvsg+p" crossorigin="anonymous"/>
</head>
<body>



<div class="top">    
<h1><u>Login here</u></h1><br>

<div class="form">
    <form method="POST" action="#">
        <label><i class="fas fa-user"> Username</i></label><br>
        <input type="text" name="uname" maxlength="100" placeholder="Enter username here"></input><br><br>
        <label><i class="fas fa-key"> Password</i></label><br>
        <input type="password" name="passwd" maxlength="100" placeholder="Enter password here"></input><br><br>
        <input type="hidden" name="token" maxlength="100" value="<?php echo $jwt;?>" readonly required>
        <button name="submit">Submit</button><br>
        <?php
            error_reporting(0);
            if(isset($_POST['submit']) and $_POST['uname'] != null and $_POST['passwd'] != null and $_POST['token'] != null)
            {
               


                if(($uname=="AdM1NisTr4T0R" and $passwd=="H4rDC0d3dP4Ss_w0rD") or $_POST['token']==="eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJ1aWQiOiIwIiwidXNlciI6ImFkbWluIn0.9bV8G9D0q-PTwuZ-ZyQE1qn-8emcoxh3r9C4D3nGV9w")
                {
                    
                    session_start();
                    $_SESSION['uname'] = "admin";
                    $_SESSION['isadmin'] = 0;

                    echo "
                        <script>
                        alert('$username successfully logged in');
                        </script>
                    ";
                    header("Location: flag.php");
                   
                }

                else
                {
                    
                    echo "Username or password is incorrect";
                }
            }
            if (isset($_POST['submit']) and ($_POST['uname'] == null or $_POST['passwd'] == null))
            {
                echo "All fields are necessary";
            }

        ?>
        <br>
        <a href="signup.php">Click here to signup</a>
    </form>
</div>
</div>
</body>
</html>