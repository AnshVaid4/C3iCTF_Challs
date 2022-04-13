<?php error_reporting(0); session_start(); 
if ($_SESSION['uname']!="admin" and $_SESSION['id']!=0)
{session_destroy();}
else{
    echo "C3iCenter{C0mPr0m1s3D_T0k3n_2_R3vS}";
}
session_destroy();
?>