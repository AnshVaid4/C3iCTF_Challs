package com.example.myloginapp;
import java.io.*;
import java.lang.Thread;
import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.text.StaticLayout;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

import com.google.android.material.button.MaterialButton;

public class MainActivity extends AppCompatActivity {


public  static String vs;
public static int x_axis=411;
public static int y_axis=37;
public static int z_axis=137;
public static int gyscope=x_axis*y_axis*z_axis; //initial geo coords

    @Override

    public void onCreate(Bundle savedInstanceState) {

         class alpha  {

            public  String gyro(String args) {
                String alpha1 = args;

                StringBuilder builder = new StringBuilder();

                for (int i = 0; i < alpha1.length(); i = i + 2) {
                    String s = alpha1.substring(i, i + 2);
                    int n = Integer.valueOf(s, 16);
                    builder.append((char)n);
                }

                return builder.toString();
            }
        }


        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);


        TextView username =(TextView) findViewById(R.id.username);
        TextView password =(TextView) findViewById(R.id.password);

        MaterialButton loginbtn = (MaterialButton) findViewById(R.id.loginbtn);


        loginbtn.setOnClickListener(new View.OnClickListener() {
             void correctPassword()
            {
                System.out.println("Correct Password");
            }
            @Override
            public void onClick(View v) {
                if(username.getText().toString().equals("admin")) {
                    try {
                        long p = Integer.parseInt(password.getText().toString());
                        if (p == (gyscope)) {
                            alpha geo = new alpha();
                            //Gyroscope sensor 4D
                            String x = "4", X = "35", x1 = "33", X1 = "f6", x2 = "3", X2 = "630", x3 = "6", X3 = "726"; //Gyro X forward
                            String x4 = "94", X4 = "73", x5 = "36"; //Gyro X backward
                            String y = "5", Y = "3", y1 = "6e7", Y1 = "74", y2 = "465", Y2 = "5f", y3 = "727", Y3 = "5"; //Gyro Y forward
                            String y4 = "b", Y4 = "0", y5 = "573", Y5 = "347";//Gyro Y backward
                            String z = "3", Z = "3", z1 = "5f3", Z1 = "537", z2 = "46", Z2 = "730", z3 = "c5", Z3 = "72"; //Gyro Z forward
                            String z4 = "740", Z4 = "447", z5 = "797", Z5 = "37"; //Gyro Z backward
                            String G = "d"; //Gyro center
                            String str = geo.gyro(x + x1 + x2 + x3 + x4 + x5 +
                                    y + y1 + y2 + y3 + y4 + y5 +
                                    z + z1 + z2 + z3 + z4 + z5 +
                                    X + X1 + X2 + X3 + X4 +
                                    Y + Y1 + Y2 + Y3 + Y4 + Y5 +
                                    Z + Z1 + Z2 + Z3 + Z4 + Z5 +
                                    G);

                            Toast.makeText(MainActivity.this, str, Toast.LENGTH_SHORT).show();
                            correctPassword();
                        }
                        else
                        {
                            Toast.makeText(MainActivity.this,"Invalid username or password. Terminating in 3 seconds",Toast.LENGTH_SHORT).show();
                            Thread.sleep(3 * 1000);
                            System.exit(-1);
                        }
                    } catch (Exception e) {
                        try {
                            Thread.sleep(3 * 1000);
                        }
                        catch(Exception l) {}
                        Toast.makeText(MainActivity.this,"Invalid username or password. Terminating in 3 seconds",Toast.LENGTH_SHORT).show();
                    }
                }

            else
                {
                    Toast.makeText(MainActivity.this,"Invalid username or password. Terminating in 3 seconds",Toast.LENGTH_SHORT).show();
                    try {
                        Thread.sleep(3 * 1000);
                    }
                    catch(Exception e){}
                    System.exit(-1);
                }
            }
        });


    }
}