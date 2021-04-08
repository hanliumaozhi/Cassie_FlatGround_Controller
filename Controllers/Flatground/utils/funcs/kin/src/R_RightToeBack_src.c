/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:28 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBack_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t134;
  double t844;
  double t965;
  double t868;
  double t1019;
  double t354;
  double t465;
  double t679;
  double t763;
  double t1256;
  double t902;
  double t1094;
  double t1138;
  double t1280;
  double t1346;
  double t1355;
  double t1169;
  double t1367;
  double t1378;
  double t2636;
  double t2518;
  double t2570;
  double t2616;
  double t2500;
  double t2663;
  double t2668;
  double t2670;
  double t2793;
  double t2632;
  double t2689;
  double t2708;
  double t2483;
  double t2819;
  double t2844;
  double t2851;
  double t2949;
  double t2749;
  double t2884;
  double t2895;
  double t2480;
  double t2972;
  double t2980;
  double t2981;
  double t3078;
  double t2945;
  double t2994;
  double t3000;
  double t2479;
  double t3100;
  double t3149;
  double t3157;
  double t3209;
  double t3030;
  double t3161;
  double t3173;
  double t2468;
  double t3233;
  double t3256;
  double t3274;
  double t1668;
  double t1702;
  double t1714;
  double t1850;
  double t1915;
  double t2060;
  double t1826;
  double t2155;
  double t2203;
  double t3399;
  double t3403;
  double t3409;
  double t3423;
  double t3426;
  double t3436;
  double t3413;
  double t3455;
  double t3511;
  double t3530;
  double t3539;
  double t3563;
  double t3514;
  double t3583;
  double t3597;
  double t3611;
  double t3613;
  double t3617;
  double t3609;
  double t3627;
  double t3648;
  double t3672;
  double t3678;
  double t3680;
  double t3661;
  double t3697;
  double t3716;
  double t3724;
  double t3791;
  double t3804;
  double t2278;
  double t2375;
  double t2391;
  double t3978;
  double t3985;
  double t3993;
  double t4003;
  double t4021;
  double t4026;
  double t3994;
  double t4034;
  double t4036;
  double t4061;
  double t4066;
  double t4067;
  double t4052;
  double t4092;
  double t4100;
  double t4126;
  double t4132;
  double t4142;
  double t4103;
  double t4153;
  double t4159;
  double t4169;
  double t4180;
  double t4182;
  double t4160;
  double t4187;
  double t4189;
  double t4207;
  double t4226;
  double t4232;
  double t3197;
  double t3296;
  double t3299;
  double t3339;
  double t3342;
  double t3358;
  double t3719;
  double t3805;
  double t3826;
  double t3893;
  double t3903;
  double t3936;
  double t4196;
  double t4235;
  double t4250;
  double t4276;
  double t4278;
  double t4289;
  t134 = Cos(var1[3]);
  t844 = Cos(var1[5]);
  t965 = Sin(var1[3]);
  t868 = Sin(var1[4]);
  t1019 = Sin(var1[5]);
  t354 = Cos(var1[4]);
  t465 = Sin(var1[14]);
  t679 = Cos(var1[14]);
  t763 = Sin(var1[13]);
  t1256 = Cos(var1[13]);
  t902 = t134*t844*t868;
  t1094 = t965*t1019;
  t1138 = t902 + t1094;
  t1280 = -1.*t844*t965;
  t1346 = t134*t868*t1019;
  t1355 = t1280 + t1346;
  t1169 = t763*t1138;
  t1367 = t1256*t1355;
  t1378 = t1169 + t1367;
  t2636 = Cos(var1[15]);
  t2518 = t1256*t1138;
  t2570 = -1.*t763*t1355;
  t2616 = t2518 + t2570;
  t2500 = Sin(var1[15]);
  t2663 = t679*t134*t354;
  t2668 = t465*t1378;
  t2670 = t2663 + t2668;
  t2793 = Cos(var1[16]);
  t2632 = t2500*t2616;
  t2689 = t2636*t2670;
  t2708 = t2632 + t2689;
  t2483 = Sin(var1[16]);
  t2819 = t2636*t2616;
  t2844 = -1.*t2500*t2670;
  t2851 = t2819 + t2844;
  t2949 = Cos(var1[17]);
  t2749 = -1.*t2483*t2708;
  t2884 = t2793*t2851;
  t2895 = t2749 + t2884;
  t2480 = Sin(var1[17]);
  t2972 = t2793*t2708;
  t2980 = t2483*t2851;
  t2981 = t2972 + t2980;
  t3078 = Cos(var1[18]);
  t2945 = t2480*t2895;
  t2994 = t2949*t2981;
  t3000 = t2945 + t2994;
  t2479 = Sin(var1[18]);
  t3100 = t2949*t2895;
  t3149 = -1.*t2480*t2981;
  t3157 = t3100 + t3149;
  t3209 = Cos(var1[19]);
  t3030 = -1.*t2479*t3000;
  t3161 = t3078*t3157;
  t3173 = t3030 + t3161;
  t2468 = Sin(var1[19]);
  t3233 = t3078*t3000;
  t3256 = t2479*t3157;
  t3274 = t3233 + t3256;
  t1668 = t844*t965*t868;
  t1702 = -1.*t134*t1019;
  t1714 = t1668 + t1702;
  t1850 = t134*t844;
  t1915 = t965*t868*t1019;
  t2060 = t1850 + t1915;
  t1826 = t763*t1714;
  t2155 = t1256*t2060;
  t2203 = t1826 + t2155;
  t3399 = t1256*t1714;
  t3403 = -1.*t763*t2060;
  t3409 = t3399 + t3403;
  t3423 = t679*t354*t965;
  t3426 = t465*t2203;
  t3436 = t3423 + t3426;
  t3413 = t2500*t3409;
  t3455 = t2636*t3436;
  t3511 = t3413 + t3455;
  t3530 = t2636*t3409;
  t3539 = -1.*t2500*t3436;
  t3563 = t3530 + t3539;
  t3514 = -1.*t2483*t3511;
  t3583 = t2793*t3563;
  t3597 = t3514 + t3583;
  t3611 = t2793*t3511;
  t3613 = t2483*t3563;
  t3617 = t3611 + t3613;
  t3609 = t2480*t3597;
  t3627 = t2949*t3617;
  t3648 = t3609 + t3627;
  t3672 = t2949*t3597;
  t3678 = -1.*t2480*t3617;
  t3680 = t3672 + t3678;
  t3661 = -1.*t2479*t3648;
  t3697 = t3078*t3680;
  t3716 = t3661 + t3697;
  t3724 = t3078*t3648;
  t3791 = t2479*t3680;
  t3804 = t3724 + t3791;
  t2278 = t354*t844*t763;
  t2375 = t1256*t354*t1019;
  t2391 = t2278 + t2375;
  t3978 = t1256*t354*t844;
  t3985 = -1.*t354*t763*t1019;
  t3993 = t3978 + t3985;
  t4003 = -1.*t679*t868;
  t4021 = t465*t2391;
  t4026 = t4003 + t4021;
  t3994 = t2500*t3993;
  t4034 = t2636*t4026;
  t4036 = t3994 + t4034;
  t4061 = t2636*t3993;
  t4066 = -1.*t2500*t4026;
  t4067 = t4061 + t4066;
  t4052 = -1.*t2483*t4036;
  t4092 = t2793*t4067;
  t4100 = t4052 + t4092;
  t4126 = t2793*t4036;
  t4132 = t2483*t4067;
  t4142 = t4126 + t4132;
  t4103 = t2480*t4100;
  t4153 = t2949*t4142;
  t4159 = t4103 + t4153;
  t4169 = t2949*t4100;
  t4180 = -1.*t2480*t4142;
  t4182 = t4169 + t4180;
  t4160 = -1.*t2479*t4159;
  t4187 = t3078*t4182;
  t4189 = t4160 + t4187;
  t4207 = t3078*t4159;
  t4226 = t2479*t4182;
  t4232 = t4207 + t4226;
  t3197 = t2468*t3173;
  t3296 = t3209*t3274;
  t3299 = t3197 + t3296;
  t3339 = t3209*t3173;
  t3342 = -1.*t2468*t3274;
  t3358 = t3339 + t3342;
  t3719 = t2468*t3716;
  t3805 = t3209*t3804;
  t3826 = t3719 + t3805;
  t3893 = t3209*t3716;
  t3903 = -1.*t2468*t3804;
  t3936 = t3893 + t3903;
  t4196 = t2468*t4189;
  t4235 = t3209*t4232;
  t4250 = t4196 + t4235;
  t4276 = t3209*t4189;
  t4278 = -1.*t2468*t4232;
  t4289 = t4276 + t4278;
  p_output1[0]=t134*t354*t465 - 1.*t1378*t679;
  p_output1[1]=-1.*t2203*t679 + t354*t465*t965;
  p_output1[2]=-1.*t2391*t679 - 1.*t465*t868;
  p_output1[3]=0.642788*t3299 + 0.766044*t3358;
  p_output1[4]=0.642788*t3826 + 0.766044*t3936;
  p_output1[5]=0.642788*t4250 + 0.766044*t4289;
  p_output1[6]=-0.766044*t3299 + 0.642788*t3358;
  p_output1[7]=-0.766044*t3826 + 0.642788*t3936;
  p_output1[8]=-0.766044*t4250 + 0.642788*t4289;
}



void R_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
