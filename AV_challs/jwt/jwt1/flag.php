<?php error_reporting(0); session_start(); 
if ($_SESSION['uname']!="admin" and $_SESSION['id']!=0)
{session_destroy();}
else{
    echo "C3iCenter{Jwt_T0k3N_coMpr0M1Sed}";
}
session_destroy();
?>