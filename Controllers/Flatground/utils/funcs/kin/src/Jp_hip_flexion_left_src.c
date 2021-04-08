/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:42 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_flexion_left_src.h"

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
  double t511;
  double t559;
  double t740;
  double t312;
  double t828;
  double t25;
  double t553;
  double t983;
  double t1079;
  double t1292;
  double t1333;
  double t1362;
  double t1441;
  double t2004;
  double t2053;
  double t2136;
  double t2343;
  double t1872;
  double t1905;
  double t1948;
  double t2606;
  double t3309;
  double t3464;
  double t3493;
  double t3606;
  double t3180;
  double t3250;
  double t3285;
  double t4150;
  double t4151;
  double t4184;
  double t32;
  double t221;
  double t233;
  double t267;
  double t1596;
  double t1729;
  double t5804;
  double t5872;
  double t5949;
  double t6039;
  double t6045;
  double t6050;
  double t2342;
  double t2380;
  double t2381;
  double t2633;
  double t2677;
  double t2797;
  double t6060;
  double t6064;
  double t6071;
  double t3511;
  double t3617;
  double t3792;
  double t4251;
  double t4310;
  double t4551;
  double t6194;
  double t6203;
  double t6205;
  double t6235;
  double t6244;
  double t6249;
  double t6393;
  double t6400;
  double t6415;
  double t6481;
  double t6487;
  double t6498;
  double t6512;
  double t6519;
  double t6522;
  double t6580;
  double t6583;
  double t6593;
  double t6619;
  double t6620;
  double t6636;
  double t6642;
  double t6643;
  double t6661;
  double t6733;
  double t6735;
  double t6737;
  double t6765;
  double t6769;
  double t6771;
  double t6775;
  double t6784;
  double t6789;
  double t6828;
  double t6831;
  double t6846;
  double t6857;
  double t6862;
  double t6872;
  double t6874;
  double t6880;
  double t6923;
  double t6924;
  double t6929;
  double t6943;
  double t6946;
  double t6951;
  double t6963;
  double t6971;
  double t7018;
  double t7026;
  double t7027;
  double t7048;
  double t7080;
  double t7101;
  double t7172;
  double t7180;
  double t7255;
  double t7265;
  double t7266;
  double t7272;
  double t7273;
  double t7295;
  double t7296;
  double t7032;
  double t7035;
  double t7037;
  double t7107;
  double t7109;
  double t7110;
  double t7113;
  double t7117;
  double t7125;
  double t7128;
  double t7129;
  double t7131;
  double t6151;
  double t6161;
  double t6169;
  double t7377;
  double t7386;
  double t7388;
  double t7393;
  double t7394;
  double t7457;
  double t7467;
  double t7468;
  double t7473;
  double t7474;
  double t7477;
  double t7525;
  double t7526;
  double t7529;
  double t7536;
  double t7537;
  double t7541;
  double t6313;
  double t6353;
  double t6360;
  double t7558;
  double t7563;
  double t7570;
  double t7571;
  double t7572;
  double t7597;
  double t7598;
  double t7601;
  double t7650;
  double t7654;
  double t7655;
  t511 = Cos(var1[5]);
  t559 = Sin(var1[3]);
  t740 = Sin(var1[4]);
  t312 = Cos(var1[3]);
  t828 = Sin(var1[5]);
  t25 = Cos(var1[6]);
  t553 = -1.*t312*t511;
  t983 = -1.*t559*t740*t828;
  t1079 = t553 + t983;
  t1292 = -1.*t511*t559*t740;
  t1333 = t312*t828;
  t1362 = t1292 + t1333;
  t1441 = Sin(var1[6]);
  t2004 = Cos(var1[7]);
  t2053 = -1.*t2004;
  t2136 = 1. + t2053;
  t2343 = Sin(var1[7]);
  t1872 = t25*t1079;
  t1905 = t1362*t1441;
  t1948 = t1872 + t1905;
  t2606 = Cos(var1[4]);
  t3309 = Cos(var1[8]);
  t3464 = -1.*t3309;
  t3493 = 1. + t3464;
  t3606 = Sin(var1[8]);
  t3180 = -1.*t2606*t2004*t559;
  t3250 = t1948*t2343;
  t3285 = t3180 + t3250;
  t4150 = t25*t1362;
  t4151 = -1.*t1079*t1441;
  t4184 = t4150 + t4151;
  t32 = -1.*t25;
  t221 = 1. + t32;
  t233 = 0.135*t221;
  t267 = 0. + t233;
  t1596 = -0.135*t1441;
  t1729 = 0. + t1596;
  t5804 = -1.*t511*t559;
  t5872 = t312*t740*t828;
  t5949 = t5804 + t5872;
  t6039 = t312*t511*t740;
  t6045 = t559*t828;
  t6050 = t6039 + t6045;
  t2342 = 0.135*t2136;
  t2380 = 0.049*t2343;
  t2381 = 0. + t2342 + t2380;
  t2633 = -0.049*t2136;
  t2677 = 0.135*t2343;
  t2797 = 0. + t2633 + t2677;
  t6060 = t25*t5949;
  t6064 = t6050*t1441;
  t6071 = t6060 + t6064;
  t3511 = -0.049*t3493;
  t3617 = -0.09*t3606;
  t3792 = 0. + t3511 + t3617;
  t4251 = -0.09*t3493;
  t4310 = 0.049*t3606;
  t4551 = 0. + t4251 + t4310;
  t6194 = t312*t2606*t2004;
  t6203 = t6071*t2343;
  t6205 = t6194 + t6203;
  t6235 = t25*t6050;
  t6244 = -1.*t5949*t1441;
  t6249 = t6235 + t6244;
  t6393 = t312*t2606*t25*t828;
  t6400 = t312*t2606*t511*t1441;
  t6415 = t6393 + t6400;
  t6481 = -1.*t312*t2004*t740;
  t6487 = t6415*t2343;
  t6498 = t6481 + t6487;
  t6512 = t312*t2606*t511*t25;
  t6519 = -1.*t312*t2606*t828*t1441;
  t6522 = t6512 + t6519;
  t6580 = t2606*t25*t559*t828;
  t6583 = t2606*t511*t559*t1441;
  t6593 = t6580 + t6583;
  t6619 = -1.*t2004*t559*t740;
  t6620 = t6593*t2343;
  t6636 = t6619 + t6620;
  t6642 = t2606*t511*t25*t559;
  t6643 = -1.*t2606*t559*t828*t1441;
  t6661 = t6642 + t6643;
  t6733 = -1.*t25*t740*t828;
  t6735 = -1.*t511*t740*t1441;
  t6737 = t6733 + t6735;
  t6765 = -1.*t2606*t2004;
  t6769 = t6737*t2343;
  t6771 = t6765 + t6769;
  t6775 = -1.*t511*t25*t740;
  t6784 = t740*t828*t1441;
  t6789 = t6775 + t6784;
  t6828 = t511*t559;
  t6831 = -1.*t312*t740*t828;
  t6846 = t6828 + t6831;
  t6857 = t6846*t1441;
  t6862 = t6235 + t6857;
  t6872 = t25*t6846;
  t6874 = -1.*t6050*t1441;
  t6880 = t6872 + t6874;
  t6923 = t511*t559*t740;
  t6924 = -1.*t312*t828;
  t6929 = t6923 + t6924;
  t6943 = t25*t6929;
  t6946 = t1079*t1441;
  t6951 = t6943 + t6946;
  t6963 = -1.*t6929*t1441;
  t6971 = t1872 + t6963;
  t7018 = t2606*t511*t25;
  t7026 = -1.*t2606*t828*t1441;
  t7027 = t7018 + t7026;
  t7048 = -1.*t2606*t25*t828;
  t7080 = -1.*t2606*t511*t1441;
  t7101 = t7048 + t7080;
  t7172 = -1.*t25*t5949;
  t7180 = t7172 + t6874;
  t7255 = t312*t511;
  t7265 = t559*t740*t828;
  t7266 = t7255 + t7265;
  t7272 = -1.*t7266*t1441;
  t7273 = t6943 + t7272;
  t7295 = -1.*t25*t7266;
  t7296 = t7295 + t6963;
  t7032 = 0.135*t2004*t7027;
  t7035 = t7027*t2381;
  t7037 = t7027*t2343*t3792;
  t7107 = t7101*t4551;
  t7109 = t3309*t7027*t2343;
  t7110 = t7101*t3606;
  t7113 = t7109 + t7110;
  t7117 = -0.049*t7113;
  t7125 = t3309*t7101;
  t7128 = -1.*t7027*t2343*t3606;
  t7129 = t7125 + t7128;
  t7131 = -0.09*t7129;
  t6151 = t2004*t6071;
  t6161 = -1.*t312*t2606*t2343;
  t6169 = t6151 + t6161;
  t7377 = 0.135*t2004;
  t7386 = -0.049*t2343;
  t7388 = t7377 + t7386;
  t7393 = 0.049*t2004;
  t7394 = t7393 + t2677;
  t7457 = t25*t7266;
  t7467 = t6929*t1441;
  t7468 = t7457 + t7467;
  t7473 = t2004*t7468;
  t7474 = -1.*t2606*t559*t2343;
  t7477 = t7473 + t7474;
  t7525 = t2606*t25*t828;
  t7526 = t2606*t511*t1441;
  t7529 = t7525 + t7526;
  t7536 = t2004*t7529;
  t7537 = t740*t2343;
  t7541 = t7536 + t7537;
  t6313 = t3309*t6249;
  t6353 = -1.*t6205*t3606;
  t6360 = t6313 + t6353;
  t7558 = 0.049*t3309;
  t7563 = t7558 + t3617;
  t7570 = -0.09*t3309;
  t7571 = -0.049*t3606;
  t7572 = t7570 + t7571;
  t7597 = t2606*t2004*t559;
  t7598 = t7468*t2343;
  t7601 = t7597 + t7598;
  t7650 = -1.*t2004*t740;
  t7654 = t7529*t2343;
  t7655 = t7650 + t7654;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1362*t1729 + t1948*t2381 + t1079*t267 + t3285*t3792 - 0.09*(-1.*t3285*t3606 + t3309*t4184) - 0.049*(t3285*t3309 + t3606*t4184) + t4184*t4551 - 1.*t2606*t2797*t559 + 0.135*(t1948*t2004 + t2343*t2606*t559);
  p_output1[10]=t2606*t2797*t312 + t267*t5949 + t1729*t6050 + t2381*t6071 + 0.135*t6169 + t3792*t6205 + t4551*t6249 - 0.049*(t3309*t6205 + t3606*t6249) - 0.09*t6360;
  p_output1[11]=0;
  p_output1[12]=t1729*t2606*t312*t511 + t2381*t6415 + t3792*t6498 + t4551*t6522 - 0.09*(-1.*t3606*t6498 + t3309*t6522) - 0.049*(t3309*t6498 + t3606*t6522) - 1.*t2797*t312*t740 + 0.135*(t2004*t6415 + t2343*t312*t740) + t2606*t267*t312*t828;
  p_output1[13]=t1729*t2606*t511*t559 + t2381*t6593 + t3792*t6636 + t4551*t6661 - 0.09*(-1.*t3606*t6636 + t3309*t6661) - 0.049*(t3309*t6636 + t3606*t6661) - 1.*t2797*t559*t740 + 0.135*(t2004*t6593 + t2343*t559*t740) + t2606*t267*t559*t828;
  p_output1[14]=-1.*t2606*t2797 + t2381*t6737 + 0.135*(t2343*t2606 + t2004*t6737) + t3792*t6771 + t4551*t6789 - 0.09*(-1.*t3606*t6771 + t3309*t6789) - 0.049*(t3309*t6771 + t3606*t6789) - 1.*t1729*t511*t740 - 1.*t267*t740*t828;
  p_output1[15]=t267*t6050 + t1729*t6846 + 0.135*t2004*t6862 + t2381*t6862 + t2343*t3792*t6862 + t4551*t6880 - 0.09*(-1.*t2343*t3606*t6862 + t3309*t6880) - 0.049*(t2343*t3309*t6862 + t3606*t6880);
  p_output1[16]=t1079*t1729 + t267*t6929 + 0.135*t2004*t6951 + t2381*t6951 + t2343*t3792*t6951 + t4551*t6971 - 0.09*(-1.*t2343*t3606*t6951 + t3309*t6971) - 0.049*(t2343*t3309*t6951 + t3606*t6971);
  p_output1[17]=t2606*t267*t511 + t7032 + t7035 + t7037 + t7107 + t7117 + t7131 - 1.*t1729*t2606*t828;
  p_output1[18]=0.135*t1441*t5949 - 0.135*t25*t6050 + 0.135*t2004*t6249 + t2381*t6249 + t2343*t3792*t6249 + t4551*t7180 - 0.09*(-1.*t2343*t3606*t6249 + t3309*t7180) - 0.049*(t2343*t3309*t6249 + t3606*t7180);
  p_output1[19]=-0.135*t25*t6929 + 0.135*t1441*t7266 + 0.135*t2004*t7273 + t2381*t7273 + t2343*t3792*t7273 + t4551*t7296 - 0.09*(-1.*t2343*t3606*t7273 + t3309*t7296) - 0.049*(t2343*t3309*t7273 + t3606*t7296);
  p_output1[20]=-0.135*t25*t2606*t511 + t7032 + t7035 + t7037 + t7107 + t7117 + t7131 + 0.135*t1441*t2606*t828;
  p_output1[21]=0.135*(-1.*t2004*t2606*t312 - 1.*t2343*t6071) - 0.049*t3309*t6169 + 0.09*t3606*t6169 + t3792*t6169 + t2606*t312*t7388 + t6071*t7394;
  p_output1[22]=t2606*t559*t7388 + t7394*t7468 + 0.135*(t3180 - 1.*t2343*t7468) - 0.049*t3309*t7477 + 0.09*t3606*t7477 + t3792*t7477;
  p_output1[23]=-1.*t7388*t740 + t7394*t7529 + 0.135*(t2004*t740 - 1.*t2343*t7529) - 0.049*t3309*t7541 + 0.09*t3606*t7541 + t3792*t7541;
  p_output1[24]=-0.09*(-1.*t3309*t6205 - 1.*t3606*t6249) - 0.049*t6360 + t6249*t7563 + t6205*t7572;
  p_output1[25]=t7273*t7563 + t7572*t7601 - 0.09*(-1.*t3606*t7273 - 1.*t3309*t7601) - 0.049*(t3309*t7273 - 1.*t3606*t7601);
  p_output1[26]=t7027*t7563 + t7572*t7655 - 0.09*(-1.*t3606*t7027 - 1.*t3309*t7655) - 0.049*(t3309*t7027 - 1.*t3606*t7655);
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jp_hip_flexion_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
