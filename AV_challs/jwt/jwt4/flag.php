<?php error_reporting(0); session_start(); 
if ($_SESSION['uname']!="admin" and $_SESSION['id']!=0)
{session_destroy();}
else{
    echo "C3iCenter{Compr0M1S3_D_t0K3n_S1g94tuR3}";
}
session_destroy();
?>