/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:52 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_left_src.h"

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
  double t1231;
  double t767;
  double t1271;
  double t892;
  double t1272;
  double t8;
  double t1064;
  double t1409;
  double t1550;
  double t1890;
  double t1943;
  double t2051;
  double t2204;
  double t3423;
  double t3436;
  double t3737;
  double t4033;
  double t2628;
  double t3377;
  double t3418;
  double t4729;
  double t5564;
  double t5594;
  double t5676;
  double t5749;
  double t5039;
  double t5133;
  double t5320;
  double t6070;
  double t6100;
  double t6150;
  double t6283;
  double t6344;
  double t6358;
  double t6387;
  double t6404;
  double t6406;
  double t6407;
  double t6518;
  double t6550;
  double t6554;
  double t6584;
  double t6608;
  double t6609;
  double t6656;
  double t6795;
  double t6799;
  double t6812;
  double t6845;
  double t6849;
  double t6856;
  double t6931;
  double t6960;
  double t6982;
  double t7006;
  double t7021;
  double t7028;
  double t7031;
  double t7108;
  double t7114;
  double t7126;
  double t7154;
  double t7155;
  double t7163;
  double t7193;
  double t7281;
  double t7286;
  double t7290;
  double t7384;
  double t7388;
  double t7403;
  double t104;
  double t271;
  double t300;
  double t397;
  double t2207;
  double t2349;
  double t7502;
  double t7505;
  double t7507;
  double t7523;
  double t7533;
  double t7540;
  double t3945;
  double t4173;
  double t4646;
  double t4731;
  double t4733;
  double t4823;
  double t7575;
  double t7584;
  double t7615;
  double t5693;
  double t5789;
  double t5820;
  double t6208;
  double t6209;
  double t6257;
  double t6367;
  double t6392;
  double t6401;
  double t7726;
  double t7742;
  double t7752;
  double t7777;
  double t7794;
  double t7796;
  double t6411;
  double t6426;
  double t6432;
  double t6644;
  double t6658;
  double t6773;
  double t7827;
  double t7831;
  double t7834;
  double t7852;
  double t7881;
  double t7883;
  double t6824;
  double t6825;
  double t6832;
  double t7000;
  double t7009;
  double t7011;
  double t7890;
  double t7895;
  double t7896;
  double t7917;
  double t7939;
  double t7947;
  double t7049;
  double t7075;
  double t7096;
  double t7168;
  double t7207;
  double t7244;
  double t7963;
  double t7977;
  double t7990;
  double t8010;
  double t8014;
  double t8016;
  double t7352;
  double t7379;
  double t7383;
  double t8040;
  double t8057;
  double t8062;
  double t8072;
  double t8085;
  double t8103;
  double t8193;
  double t8194;
  double t8208;
  double t8345;
  double t8348;
  double t8351;
  double t8375;
  double t8387;
  double t8388;
  double t8398;
  double t8401;
  double t8402;
  double t8418;
  double t8425;
  double t8442;
  double t8495;
  double t8511;
  double t8518;
  double t8534;
  double t8536;
  double t8539;
  double t8552;
  double t8581;
  double t8596;
  double t8676;
  double t8678;
  double t8693;
  double t8699;
  double t8711;
  double t8716;
  double t8727;
  double t8742;
  double t8749;
  t1231 = Cos(var1[3]);
  t767 = Cos(var1[5]);
  t1271 = Sin(var1[4]);
  t892 = Sin(var1[3]);
  t1272 = Sin(var1[5]);
  t8 = Cos(var1[6]);
  t1064 = -1.*t767*t892;
  t1409 = t1231*t1271*t1272;
  t1550 = t1064 + t1409;
  t1890 = t1231*t767*t1271;
  t1943 = t892*t1272;
  t2051 = t1890 + t1943;
  t2204 = Sin(var1[6]);
  t3423 = Cos(var1[7]);
  t3436 = -1.*t3423;
  t3737 = 1. + t3436;
  t4033 = Sin(var1[7]);
  t2628 = t8*t1550;
  t3377 = t2051*t2204;
  t3418 = t2628 + t3377;
  t4729 = Cos(var1[4]);
  t5564 = Cos(var1[8]);
  t5594 = -1.*t5564;
  t5676 = 1. + t5594;
  t5749 = Sin(var1[8]);
  t5039 = t1231*t4729*t3423;
  t5133 = t3418*t4033;
  t5320 = t5039 + t5133;
  t6070 = t8*t2051;
  t6100 = -1.*t1550*t2204;
  t6150 = t6070 + t6100;
  t6283 = Cos(var1[9]);
  t6344 = -1.*t6283;
  t6358 = 1. + t6344;
  t6387 = Sin(var1[9]);
  t6404 = t5564*t5320;
  t6406 = t6150*t5749;
  t6407 = t6404 + t6406;
  t6518 = t5564*t6150;
  t6550 = -1.*t5320*t5749;
  t6554 = t6518 + t6550;
  t6584 = Cos(var1[10]);
  t6608 = -1.*t6584;
  t6609 = 1. + t6608;
  t6656 = Sin(var1[10]);
  t6795 = -1.*t6387*t6407;
  t6799 = t6283*t6554;
  t6812 = t6795 + t6799;
  t6845 = t6283*t6407;
  t6849 = t6387*t6554;
  t6856 = t6845 + t6849;
  t6931 = Cos(var1[11]);
  t6960 = -1.*t6931;
  t6982 = 1. + t6960;
  t7006 = Sin(var1[11]);
  t7021 = t6656*t6812;
  t7028 = t6584*t6856;
  t7031 = t7021 + t7028;
  t7108 = t6584*t6812;
  t7114 = -1.*t6656*t6856;
  t7126 = t7108 + t7114;
  t7154 = Cos(var1[12]);
  t7155 = -1.*t7154;
  t7163 = 1. + t7155;
  t7193 = Sin(var1[12]);
  t7281 = -1.*t7006*t7031;
  t7286 = t6931*t7126;
  t7290 = t7281 + t7286;
  t7384 = t6931*t7031;
  t7388 = t7006*t7126;
  t7403 = t7384 + t7388;
  t104 = -1.*t8;
  t271 = 1. + t104;
  t300 = 0.135*t271;
  t397 = 0. + t300;
  t2207 = -0.135*t2204;
  t2349 = 0. + t2207;
  t7502 = t1231*t767;
  t7505 = t892*t1271*t1272;
  t7507 = t7502 + t7505;
  t7523 = t767*t892*t1271;
  t7533 = -1.*t1231*t1272;
  t7540 = t7523 + t7533;
  t3945 = 0.135*t3737;
  t4173 = 0.049*t4033;
  t4646 = 0. + t3945 + t4173;
  t4731 = -0.049*t3737;
  t4733 = 0.135*t4033;
  t4823 = 0. + t4731 + t4733;
  t7575 = t8*t7507;
  t7584 = t7540*t2204;
  t7615 = t7575 + t7584;
  t5693 = -0.049*t5676;
  t5789 = -0.09*t5749;
  t5820 = 0. + t5693 + t5789;
  t6208 = -0.09*t5676;
  t6209 = 0.049*t5749;
  t6257 = 0. + t6208 + t6209;
  t6367 = -0.049*t6358;
  t6392 = -0.21*t6387;
  t6401 = 0. + t6367 + t6392;
  t7726 = t4729*t3423*t892;
  t7742 = t7615*t4033;
  t7752 = t7726 + t7742;
  t7777 = t8*t7540;
  t7794 = -1.*t7507*t2204;
  t7796 = t7777 + t7794;
  t6411 = -0.21*t6358;
  t6426 = 0.049*t6387;
  t6432 = 0. + t6411 + t6426;
  t6644 = -0.2707*t6609;
  t6658 = 0.0016*t6656;
  t6773 = 0. + t6644 + t6658;
  t7827 = t5564*t7752;
  t7831 = t7796*t5749;
  t7834 = t7827 + t7831;
  t7852 = t5564*t7796;
  t7881 = -1.*t7752*t5749;
  t7883 = t7852 + t7881;
  t6824 = -0.0016*t6609;
  t6825 = -0.2707*t6656;
  t6832 = 0. + t6824 + t6825;
  t7000 = 0.0184*t6982;
  t7009 = -0.7055*t7006;
  t7011 = 0. + t7000 + t7009;
  t7890 = -1.*t6387*t7834;
  t7895 = t6283*t7883;
  t7896 = t7890 + t7895;
  t7917 = t6283*t7834;
  t7939 = t6387*t7883;
  t7947 = t7917 + t7939;
  t7049 = -0.7055*t6982;
  t7075 = -0.0184*t7006;
  t7096 = 0. + t7049 + t7075;
  t7168 = -1.1135*t7163;
  t7207 = 0.0216*t7193;
  t7244 = 0. + t7168 + t7207;
  t7963 = t6656*t7896;
  t7977 = t6584*t7947;
  t7990 = t7963 + t7977;
  t8010 = t6584*t7896;
  t8014 = -1.*t6656*t7947;
  t8016 = t8010 + t8014;
  t7352 = -0.0216*t7163;
  t7379 = -1.1135*t7193;
  t7383 = 0. + t7352 + t7379;
  t8040 = -1.*t7006*t7990;
  t8057 = t6931*t8016;
  t8062 = t8040 + t8057;
  t8072 = t6931*t7990;
  t8085 = t7006*t8016;
  t8103 = t8072 + t8085;
  t8193 = t4729*t8*t1272;
  t8194 = t4729*t767*t2204;
  t8208 = t8193 + t8194;
  t8345 = -1.*t3423*t1271;
  t8348 = t8208*t4033;
  t8351 = t8345 + t8348;
  t8375 = t4729*t767*t8;
  t8387 = -1.*t4729*t1272*t2204;
  t8388 = t8375 + t8387;
  t8398 = t5564*t8351;
  t8401 = t8388*t5749;
  t8402 = t8398 + t8401;
  t8418 = t5564*t8388;
  t8425 = -1.*t8351*t5749;
  t8442 = t8418 + t8425;
  t8495 = -1.*t6387*t8402;
  t8511 = t6283*t8442;
  t8518 = t8495 + t8511;
  t8534 = t6283*t8402;
  t8536 = t6387*t8442;
  t8539 = t8534 + t8536;
  t8552 = t6656*t8518;
  t8581 = t6584*t8539;
  t8596 = t8552 + t8581;
  t8676 = t6584*t8518;
  t8678 = -1.*t6656*t8539;
  t8693 = t8676 + t8678;
  t8699 = -1.*t7006*t8596;
  t8711 = t6931*t8693;
  t8716 = t8699 + t8711;
  t8727 = t6931*t8596;
  t8742 = t7006*t8693;
  t8749 = t8727 + t8742;
  p_output1[0]=0. + t2051*t2349 + t1550*t397 + t3418*t4646 + 0.1305*(t3418*t3423 - 1.*t1231*t4033*t4729) + t1231*t4729*t4823 + t5320*t5820 + t6150*t6257 + t6401*t6407 + t6432*t6554 + t6773*t6812 + t6832*t6856 + t7011*t7031 + t7096*t7126 + t7244*t7290 + t7383*t7403 - 0.0216*(t7193*t7290 + t7154*t7403) - 1.1135*(t7154*t7290 - 1.*t7193*t7403) + var1[0];
  p_output1[1]=0. + t397*t7507 + t2349*t7540 + t4646*t7615 + t5820*t7752 + t6257*t7796 + t6401*t7834 + t6432*t7883 + t6773*t7896 + t6832*t7947 + t7011*t7990 + t7096*t8016 + t7244*t8062 + t7383*t8103 - 0.0216*(t7193*t8062 + t7154*t8103) - 1.1135*(t7154*t8062 - 1.*t7193*t8103) + t4729*t4823*t892 + 0.1305*(t3423*t7615 - 1.*t4033*t4729*t892) + var1[1];
  p_output1[2]=0. + t1272*t397*t4729 - 1.*t1271*t4823 + t2349*t4729*t767 + t4646*t8208 + 0.1305*(t1271*t4033 + t3423*t8208) + t5820*t8351 + t6257*t8388 + t6401*t8402 + t6432*t8442 + t6773*t8518 + t6832*t8539 + t7011*t8596 + t7096*t8693 + t7244*t8716 + t7383*t8749 - 0.0216*(t7193*t8716 + t7154*t8749) - 1.1135*(t7154*t8716 - 1.*t7193*t8749) + var1[2];
}



void p_toe_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
