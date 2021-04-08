/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:22 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBottom_src.h"

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
  double t132;
  double t640;
  double t903;
  double t642;
  double t1037;
  double t203;
  double t375;
  double t627;
  double t638;
  double t1099;
  double t836;
  double t1049;
  double t1061;
  double t1108;
  double t1110;
  double t1151;
  double t1067;
  double t1174;
  double t1211;
  double t1861;
  double t1788;
  double t1826;
  double t1854;
  double t1779;
  double t1888;
  double t1902;
  double t1971;
  double t2022;
  double t1858;
  double t1989;
  double t2008;
  double t1726;
  double t2025;
  double t2046;
  double t2054;
  double t2120;
  double t2018;
  double t2069;
  double t2083;
  double t1685;
  double t2142;
  double t2145;
  double t2163;
  double t2224;
  double t2088;
  double t2182;
  double t2183;
  double t1665;
  double t2283;
  double t2321;
  double t2346;
  double t2390;
  double t2193;
  double t2366;
  double t2371;
  double t1647;
  double t2440;
  double t2484;
  double t2494;
  double t1222;
  double t1248;
  double t1273;
  double t1344;
  double t1356;
  double t1391;
  double t1331;
  double t1415;
  double t1425;
  double t2650;
  double t2759;
  double t2773;
  double t2841;
  double t2843;
  double t2864;
  double t2816;
  double t2865;
  double t2886;
  double t2948;
  double t3000;
  double t3001;
  double t2919;
  double t3009;
  double t3018;
  double t3029;
  double t3034;
  double t3086;
  double t3025;
  double t3101;
  double t3113;
  double t3147;
  double t3164;
  double t3174;
  double t3144;
  double t3179;
  double t3183;
  double t3326;
  double t3338;
  double t3361;
  double t1548;
  double t1568;
  double t1571;
  double t3536;
  double t3548;
  double t3552;
  double t3580;
  double t3636;
  double t3665;
  double t3564;
  double t3706;
  double t3711;
  double t3723;
  double t3766;
  double t3806;
  double t3713;
  double t3814;
  double t3834;
  double t3848;
  double t3850;
  double t3859;
  double t3844;
  double t3886;
  double t3887;
  double t3911;
  double t3913;
  double t3918;
  double t3896;
  double t3920;
  double t3922;
  double t3926;
  double t3938;
  double t3939;
  double t2372;
  double t2497;
  double t2501;
  double t2507;
  double t2564;
  double t2572;
  double t3246;
  double t3370;
  double t3465;
  double t3492;
  double t3502;
  double t3504;
  double t3923;
  double t3944;
  double t3946;
  double t3970;
  double t3972;
  double t3976;
  double t4121;
  double t4123;
  double t4345;
  double t4349;
  double t4496;
  double t4503;
  double t4795;
  double t4797;
  double t4975;
  double t4980;
  double t5081;
  double t5093;
  double t4150;
  double t4163;
  double t4167;
  double t4191;
  double t4213;
  double t4231;
  double t4261;
  double t4269;
  double t4299;
  double t4311;
  double t4325;
  double t4341;
  double t4367;
  double t4374;
  double t4376;
  double t4432;
  double t4442;
  double t4449;
  double t4535;
  double t4537;
  double t4538;
  double t4559;
  double t4693;
  double t4737;
  double t4799;
  double t4831;
  double t4913;
  double t4934;
  double t4941;
  double t4951;
  double t5002;
  double t5015;
  double t5035;
  double t5045;
  double t5048;
  double t5053;
  double t5112;
  double t5115;
  double t5136;
  double t5161;
  double t5189;
  double t5193;
  t132 = Cos(var1[3]);
  t640 = Cos(var1[5]);
  t903 = Sin(var1[3]);
  t642 = Sin(var1[4]);
  t1037 = Sin(var1[5]);
  t203 = Cos(var1[4]);
  t375 = Sin(var1[14]);
  t627 = Cos(var1[14]);
  t638 = Sin(var1[13]);
  t1099 = Cos(var1[13]);
  t836 = t132*t640*t642;
  t1049 = t903*t1037;
  t1061 = t836 + t1049;
  t1108 = -1.*t640*t903;
  t1110 = t132*t642*t1037;
  t1151 = t1108 + t1110;
  t1067 = t638*t1061;
  t1174 = t1099*t1151;
  t1211 = t1067 + t1174;
  t1861 = Cos(var1[15]);
  t1788 = t1099*t1061;
  t1826 = -1.*t638*t1151;
  t1854 = t1788 + t1826;
  t1779 = Sin(var1[15]);
  t1888 = t627*t132*t203;
  t1902 = t375*t1211;
  t1971 = t1888 + t1902;
  t2022 = Cos(var1[16]);
  t1858 = t1779*t1854;
  t1989 = t1861*t1971;
  t2008 = t1858 + t1989;
  t1726 = Sin(var1[16]);
  t2025 = t1861*t1854;
  t2046 = -1.*t1779*t1971;
  t2054 = t2025 + t2046;
  t2120 = Cos(var1[17]);
  t2018 = -1.*t1726*t2008;
  t2069 = t2022*t2054;
  t2083 = t2018 + t2069;
  t1685 = Sin(var1[17]);
  t2142 = t2022*t2008;
  t2145 = t1726*t2054;
  t2163 = t2142 + t2145;
  t2224 = Cos(var1[18]);
  t2088 = t1685*t2083;
  t2182 = t2120*t2163;
  t2183 = t2088 + t2182;
  t1665 = Sin(var1[18]);
  t2283 = t2120*t2083;
  t2321 = -1.*t1685*t2163;
  t2346 = t2283 + t2321;
  t2390 = Cos(var1[19]);
  t2193 = -1.*t1665*t2183;
  t2366 = t2224*t2346;
  t2371 = t2193 + t2366;
  t1647 = Sin(var1[19]);
  t2440 = t2224*t2183;
  t2484 = t1665*t2346;
  t2494 = t2440 + t2484;
  t1222 = t640*t903*t642;
  t1248 = -1.*t132*t1037;
  t1273 = t1222 + t1248;
  t1344 = t132*t640;
  t1356 = t903*t642*t1037;
  t1391 = t1344 + t1356;
  t1331 = t638*t1273;
  t1415 = t1099*t1391;
  t1425 = t1331 + t1415;
  t2650 = t1099*t1273;
  t2759 = -1.*t638*t1391;
  t2773 = t2650 + t2759;
  t2841 = t627*t203*t903;
  t2843 = t375*t1425;
  t2864 = t2841 + t2843;
  t2816 = t1779*t2773;
  t2865 = t1861*t2864;
  t2886 = t2816 + t2865;
  t2948 = t1861*t2773;
  t3000 = -1.*t1779*t2864;
  t3001 = t2948 + t3000;
  t2919 = -1.*t1726*t2886;
  t3009 = t2022*t3001;
  t3018 = t2919 + t3009;
  t3029 = t2022*t2886;
  t3034 = t1726*t3001;
  t3086 = t3029 + t3034;
  t3025 = t1685*t3018;
  t3101 = t2120*t3086;
  t3113 = t3025 + t3101;
  t3147 = t2120*t3018;
  t3164 = -1.*t1685*t3086;
  t3174 = t3147 + t3164;
  t3144 = -1.*t1665*t3113;
  t3179 = t2224*t3174;
  t3183 = t3144 + t3179;
  t3326 = t2224*t3113;
  t3338 = t1665*t3174;
  t3361 = t3326 + t3338;
  t1548 = t203*t640*t638;
  t1568 = t1099*t203*t1037;
  t1571 = t1548 + t1568;
  t3536 = t1099*t203*t640;
  t3548 = -1.*t203*t638*t1037;
  t3552 = t3536 + t3548;
  t3580 = -1.*t627*t642;
  t3636 = t375*t1571;
  t3665 = t3580 + t3636;
  t3564 = t1779*t3552;
  t3706 = t1861*t3665;
  t3711 = t3564 + t3706;
  t3723 = t1861*t3552;
  t3766 = -1.*t1779*t3665;
  t3806 = t3723 + t3766;
  t3713 = -1.*t1726*t3711;
  t3814 = t2022*t3806;
  t3834 = t3713 + t3814;
  t3848 = t2022*t3711;
  t3850 = t1726*t3806;
  t3859 = t3848 + t3850;
  t3844 = t1685*t3834;
  t3886 = t2120*t3859;
  t3887 = t3844 + t3886;
  t3911 = t2120*t3834;
  t3913 = -1.*t1685*t3859;
  t3918 = t3911 + t3913;
  t3896 = -1.*t1665*t3887;
  t3920 = t2224*t3918;
  t3922 = t3896 + t3920;
  t3926 = t2224*t3887;
  t3938 = t1665*t3918;
  t3939 = t3926 + t3938;
  t2372 = t1647*t2371;
  t2497 = t2390*t2494;
  t2501 = t2372 + t2497;
  t2507 = t2390*t2371;
  t2564 = -1.*t1647*t2494;
  t2572 = t2507 + t2564;
  t3246 = t1647*t3183;
  t3370 = t2390*t3361;
  t3465 = t3246 + t3370;
  t3492 = t2390*t3183;
  t3502 = -1.*t1647*t3361;
  t3504 = t3492 + t3502;
  t3923 = t1647*t3922;
  t3944 = t2390*t3939;
  t3946 = t3923 + t3944;
  t3970 = t2390*t3922;
  t3972 = -1.*t1647*t3939;
  t3976 = t3970 + t3972;
  t4121 = -1.*t627;
  t4123 = 1. + t4121;
  t4345 = -1.*t1861;
  t4349 = 1. + t4345;
  t4496 = -1.*t2022;
  t4503 = 1. + t4496;
  t4795 = -1.*t2120;
  t4797 = 1. + t4795;
  t4975 = -1.*t2224;
  t4980 = 1. + t4975;
  t5081 = -1.*t2390;
  t5093 = 1. + t5081;
  t4150 = -0.049*t4123;
  t4163 = -0.135*t375;
  t4167 = 0. + t4150 + t4163;
  t4191 = 0.135*t638;
  t4213 = 0. + t4191;
  t4231 = -1.*t1099;
  t4261 = 1. + t4231;
  t4269 = -0.135*t4261;
  t4299 = 0. + t4269;
  t4311 = -0.135*t4123;
  t4325 = 0.049*t375;
  t4341 = 0. + t4311 + t4325;
  t4367 = -0.09*t4349;
  t4374 = 0.049*t1779;
  t4376 = 0. + t4367 + t4374;
  t4432 = -0.049*t4349;
  t4442 = -0.09*t1779;
  t4449 = 0. + t4432 + t4442;
  t4535 = -0.049*t4503;
  t4537 = -0.21*t1726;
  t4538 = 0. + t4535 + t4537;
  t4559 = -0.21*t4503;
  t4693 = 0.049*t1726;
  t4737 = 0. + t4559 + t4693;
  t4799 = -0.2707*t4797;
  t4831 = 0.0016*t1685;
  t4913 = 0. + t4799 + t4831;
  t4934 = -0.0016*t4797;
  t4941 = -0.2707*t1685;
  t4951 = 0. + t4934 + t4941;
  t5002 = 0.0184*t4980;
  t5015 = -0.7055*t1665;
  t5035 = 0. + t5002 + t5015;
  t5045 = -0.7055*t4980;
  t5048 = -0.0184*t1665;
  t5053 = 0. + t5045 + t5048;
  t5112 = -1.1135*t5093;
  t5115 = 0.0216*t1647;
  t5136 = 0. + t5112 + t5115;
  t5161 = -0.0216*t5093;
  t5189 = -1.1135*t1647;
  t5193 = 0. + t5161 + t5189;
  p_output1[0]=t132*t203*t375 - 1.*t1211*t627;
  p_output1[1]=-1.*t1425*t627 + t203*t375*t903;
  p_output1[2]=-1.*t1571*t627 - 1.*t375*t642;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2501 + 0.766044*t2572;
  p_output1[5]=0.642788*t3465 + 0.766044*t3504;
  p_output1[6]=0.642788*t3946 + 0.766044*t3976;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2501 + 0.642788*t2572;
  p_output1[9]=-0.766044*t3465 + 0.642788*t3504;
  p_output1[10]=-0.766044*t3946 + 0.642788*t3976;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t2501 - 1.1312*t2572 + t132*t203*t4167 + t1061*t4213 + t1151*t4299 + t1211*t4341 + t1854*t4376 + t1971*t4449 + t2008*t4538 + t2054*t4737 + t2083*t4913 + t2163*t4951 + t2183*t5035 + t2346*t5053 + t2371*t5136 + t2494*t5193 - 0.1305*(-1.*t132*t203*t375 + t1211*t627) + var1[0];
  p_output1[13]=0. + 0.0306*t3465 - 1.1312*t3504 + t1273*t4213 + t1391*t4299 + t1425*t4341 + t2773*t4376 + t2864*t4449 + t2886*t4538 + t3001*t4737 + t3018*t4913 + t3086*t4951 + t3113*t5035 + t3174*t5053 + t3183*t5136 + t3361*t5193 + t203*t4167*t903 - 0.1305*(t1425*t627 - 1.*t203*t375*t903) + var1[1];
  p_output1[14]=0. + 0.0306*t3946 - 1.1312*t3976 + t1037*t203*t4299 + t1571*t4341 + t3552*t4376 + t3665*t4449 + t3711*t4538 + t3806*t4737 + t3834*t4913 + t3859*t4951 + t3887*t5035 + t3918*t5053 + t3922*t5136 + t3939*t5193 + t203*t4213*t640 - 1.*t4167*t642 - 0.1305*(t1571*t627 + t375*t642) + var1[2];
  p_output1[15]=1.;
}



void H_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
