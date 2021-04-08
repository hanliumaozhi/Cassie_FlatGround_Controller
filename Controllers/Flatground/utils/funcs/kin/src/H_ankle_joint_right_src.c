/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:09 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_right_src.h"

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
  double t472;
  double t670;
  double t465;
  double t482;
  double t679;
  double t1110;
  double t645;
  double t760;
  double t910;
  double t445;
  double t1120;
  double t1182;
  double t1212;
  double t1339;
  double t1066;
  double t1273;
  double t1309;
  double t338;
  double t1416;
  double t1485;
  double t1530;
  double t1600;
  double t1633;
  double t1729;
  double t1753;
  double t1803;
  double t1827;
  double t1973;
  double t1317;
  double t1848;
  double t1854;
  double t325;
  double t2003;
  double t2011;
  double t2079;
  double t2140;
  double t1896;
  double t2103;
  double t2104;
  double t252;
  double t2186;
  double t2269;
  double t2392;
  double t125;
  double t2689;
  double t2749;
  double t2844;
  double t2916;
  double t2929;
  double t2939;
  double t2910;
  double t2943;
  double t2959;
  double t3017;
  double t3025;
  double t3035;
  double t3048;
  double t3051;
  double t3072;
  double t2976;
  double t3082;
  double t3091;
  double t3122;
  double t3130;
  double t3139;
  double t2498;
  double t3110;
  double t3168;
  double t3226;
  double t3290;
  double t3376;
  double t3386;
  double t3542;
  double t3544;
  double t3604;
  double t3666;
  double t3676;
  double t3685;
  double t3697;
  double t3715;
  double t3719;
  double t3623;
  double t3764;
  double t3809;
  double t3843;
  double t3859;
  double t3877;
  double t3840;
  double t3901;
  double t3927;
  double t3932;
  double t3937;
  double t3968;
  double t2112;
  double t2446;
  double t2465;
  double t2510;
  double t2550;
  double t2571;
  double t3281;
  double t3413;
  double t3453;
  double t3464;
  double t3499;
  double t3508;
  double t3929;
  double t3994;
  double t4002;
  double t4070;
  double t4097;
  double t4115;
  double t4602;
  double t4650;
  double t5007;
  double t5009;
  double t5354;
  double t5358;
  double t5486;
  double t5504;
  double t5556;
  double t5576;
  double t4289;
  double t4294;
  double t4326;
  double t4651;
  double t4669;
  double t4679;
  double t4709;
  double t4743;
  double t4884;
  double t4890;
  double t4902;
  double t4932;
  double t4944;
  double t4987;
  double t4998;
  double t5019;
  double t5052;
  double t5059;
  double t5280;
  double t5287;
  double t5312;
  double t5365;
  double t5401;
  double t5406;
  double t5430;
  double t5453;
  double t5462;
  double t5505;
  double t5520;
  double t5521;
  double t5528;
  double t5534;
  double t5548;
  double t5616;
  double t5647;
  double t5655;
  double t5680;
  double t5704;
  double t5711;
  double t4327;
  double t4338;
  double t4354;
  double t4374;
  double t4378;
  double t4394;
  t472 = Cos(var1[5]);
  t670 = Sin(var1[3]);
  t465 = Cos(var1[3]);
  t482 = Sin(var1[4]);
  t679 = Sin(var1[5]);
  t1110 = Sin(var1[13]);
  t645 = t465*t472*t482;
  t760 = t670*t679;
  t910 = t645 + t760;
  t445 = Cos(var1[13]);
  t1120 = -1.*t472*t670;
  t1182 = t465*t482*t679;
  t1212 = t1120 + t1182;
  t1339 = Cos(var1[15]);
  t1066 = t445*t910;
  t1273 = -1.*t1110*t1212;
  t1309 = t1066 + t1273;
  t338 = Sin(var1[15]);
  t1416 = Cos(var1[14]);
  t1485 = Cos(var1[4]);
  t1530 = t1416*t465*t1485;
  t1600 = Sin(var1[14]);
  t1633 = t1110*t910;
  t1729 = t445*t1212;
  t1753 = t1633 + t1729;
  t1803 = t1600*t1753;
  t1827 = t1530 + t1803;
  t1973 = Cos(var1[16]);
  t1317 = t338*t1309;
  t1848 = t1339*t1827;
  t1854 = t1317 + t1848;
  t325 = Sin(var1[16]);
  t2003 = t1339*t1309;
  t2011 = -1.*t338*t1827;
  t2079 = t2003 + t2011;
  t2140 = Cos(var1[17]);
  t1896 = -1.*t325*t1854;
  t2103 = t1973*t2079;
  t2104 = t1896 + t2103;
  t252 = Sin(var1[17]);
  t2186 = t1973*t1854;
  t2269 = t325*t2079;
  t2392 = t2186 + t2269;
  t125 = Sin(var1[18]);
  t2689 = t472*t670*t482;
  t2749 = -1.*t465*t679;
  t2844 = t2689 + t2749;
  t2916 = t465*t472;
  t2929 = t670*t482*t679;
  t2939 = t2916 + t2929;
  t2910 = t445*t2844;
  t2943 = -1.*t1110*t2939;
  t2959 = t2910 + t2943;
  t3017 = t1416*t1485*t670;
  t3025 = t1110*t2844;
  t3035 = t445*t2939;
  t3048 = t3025 + t3035;
  t3051 = t1600*t3048;
  t3072 = t3017 + t3051;
  t2976 = t338*t2959;
  t3082 = t1339*t3072;
  t3091 = t2976 + t3082;
  t3122 = t1339*t2959;
  t3130 = -1.*t338*t3072;
  t3139 = t3122 + t3130;
  t2498 = Cos(var1[18]);
  t3110 = -1.*t325*t3091;
  t3168 = t1973*t3139;
  t3226 = t3110 + t3168;
  t3290 = t1973*t3091;
  t3376 = t325*t3139;
  t3386 = t3290 + t3376;
  t3542 = t445*t1485*t472;
  t3544 = -1.*t1485*t1110*t679;
  t3604 = t3542 + t3544;
  t3666 = -1.*t1416*t482;
  t3676 = t1485*t472*t1110;
  t3685 = t445*t1485*t679;
  t3697 = t3676 + t3685;
  t3715 = t1600*t3697;
  t3719 = t3666 + t3715;
  t3623 = t338*t3604;
  t3764 = t1339*t3719;
  t3809 = t3623 + t3764;
  t3843 = t1339*t3604;
  t3859 = -1.*t338*t3719;
  t3877 = t3843 + t3859;
  t3840 = -1.*t325*t3809;
  t3901 = t1973*t3877;
  t3927 = t3840 + t3901;
  t3932 = t1973*t3809;
  t3937 = t325*t3877;
  t3968 = t3932 + t3937;
  t2112 = t252*t2104;
  t2446 = t2140*t2392;
  t2465 = t2112 + t2446;
  t2510 = t2140*t2104;
  t2550 = -1.*t252*t2392;
  t2571 = t2510 + t2550;
  t3281 = t252*t3226;
  t3413 = t2140*t3386;
  t3453 = t3281 + t3413;
  t3464 = t2140*t3226;
  t3499 = -1.*t252*t3386;
  t3508 = t3464 + t3499;
  t3929 = t252*t3927;
  t3994 = t2140*t3968;
  t4002 = t3929 + t3994;
  t4070 = t2140*t3927;
  t4097 = -1.*t252*t3968;
  t4115 = t4070 + t4097;
  t4602 = -1.*t1416;
  t4650 = 1. + t4602;
  t5007 = -1.*t1339;
  t5009 = 1. + t5007;
  t5354 = -1.*t1973;
  t5358 = 1. + t5354;
  t5486 = -1.*t2140;
  t5504 = 1. + t5486;
  t5556 = -1.*t2498;
  t5576 = 1. + t5556;
  t4289 = t2498*t2465;
  t4294 = t125*t2571;
  t4326 = t4289 + t4294;
  t4651 = -0.049*t4650;
  t4669 = -0.135*t1600;
  t4679 = 0. + t4651 + t4669;
  t4709 = 0.135*t1110;
  t4743 = 0. + t4709;
  t4884 = -1.*t445;
  t4890 = 1. + t4884;
  t4902 = -0.135*t4890;
  t4932 = 0. + t4902;
  t4944 = -0.135*t4650;
  t4987 = 0.049*t1600;
  t4998 = 0. + t4944 + t4987;
  t5019 = -0.09*t5009;
  t5052 = 0.049*t338;
  t5059 = 0. + t5019 + t5052;
  t5280 = -0.049*t5009;
  t5287 = -0.09*t338;
  t5312 = 0. + t5280 + t5287;
  t5365 = -0.049*t5358;
  t5401 = -0.21*t325;
  t5406 = 0. + t5365 + t5401;
  t5430 = -0.21*t5358;
  t5453 = 0.049*t325;
  t5462 = 0. + t5430 + t5453;
  t5505 = -0.2707*t5504;
  t5520 = 0.0016*t252;
  t5521 = 0. + t5505 + t5520;
  t5528 = -0.0016*t5504;
  t5534 = -0.2707*t252;
  t5548 = 0. + t5528 + t5534;
  t5616 = 0.0184*t5576;
  t5647 = -0.7055*t125;
  t5655 = 0. + t5616 + t5647;
  t5680 = -0.7055*t5576;
  t5704 = -0.0184*t125;
  t5711 = 0. + t5680 + t5704;
  t4327 = t2498*t3453;
  t4338 = t125*t3508;
  t4354 = t4327 + t4338;
  t4374 = t2498*t4002;
  t4378 = t125*t4115;
  t4394 = t4374 + t4378;
  p_output1[0]=t125*t2465 - 1.*t2498*t2571;
  p_output1[1]=t125*t3453 - 1.*t2498*t3508;
  p_output1[2]=t125*t4002 - 1.*t2498*t4115;
  p_output1[3]=0.;
  p_output1[4]=t4326;
  p_output1[5]=t4354;
  p_output1[6]=t4394;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1416*t1753 + t1485*t1600*t465;
  p_output1[9]=-1.*t1416*t3048 + t1485*t1600*t670;
  p_output1[10]=-1.*t1416*t3697 - 1.*t1600*t482;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.7055*(-1.*t125*t2465 + t2498*t2571) + 0.0184*t4326 - 0.1305*(t1416*t1753 - 1.*t1485*t1600*t465) + t1485*t465*t4679 + t1212*t4932 + t1753*t4998 + t1309*t5059 + t1827*t5312 + t1854*t5406 + t2079*t5462 + t2104*t5521 + t2392*t5548 + t2465*t5655 + t2571*t5711 + t4743*t910 + var1[0];
  p_output1[13]=0. - 0.7055*(-1.*t125*t3453 + t2498*t3508) + 0.0184*t4354 + t2844*t4743 + t2939*t4932 + t3048*t4998 + t2959*t5059 + t3072*t5312 + t3091*t5406 + t3139*t5462 + t3226*t5521 + t3386*t5548 + t3453*t5655 + t3508*t5711 + t1485*t4679*t670 - 0.1305*(t1416*t3048 - 1.*t1485*t1600*t670) + var1[1];
  p_output1[14]=0. - 0.7055*(-1.*t125*t4002 + t2498*t4115) + 0.0184*t4394 + t1485*t472*t4743 - 1.*t4679*t482 - 0.1305*(t1416*t3697 + t1600*t482) + t3697*t4998 + t3604*t5059 + t3719*t5312 + t3809*t5406 + t3877*t5462 + t3927*t5521 + t3968*t5548 + t4002*t5655 + t4115*t5711 + t1485*t4932*t679 + var1[2];
  p_output1[15]=1.;
}



void H_ankle_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
