<?php error_reporting(0); session_start(); 
if ($_SESSION['uname']!="admin" and $_SESSION['id']!=0)
{session_destroy();}
else{
    echo "C3iCenter{T0K39_C0mPr0m1Se#__T3cH2}";
}
session_destroy();
?>