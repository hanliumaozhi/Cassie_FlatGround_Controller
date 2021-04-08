/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:58 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_rotation_right_src.h"

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
  double t387;
  double t1533;
  double t1207;
  double t1251;
  double t2040;
  double t238;
  double t278;
  double t307;
  double t342;
  double t667;
  double t1303;
  double t2102;
  double t2131;
  double t2294;
  double t2874;
  double t3094;
  double t3607;
  double t131;
  double t4200;
  double t4207;
  double t4219;
  double t339;
  double t345;
  double t359;
  double t745;
  double t789;
  double t2329;
  double t2534;
  double t2567;
  double t2831;
  double t4047;
  double t4076;
  double t4147;
  double t6468;
  double t6495;
  double t6579;
  double t6637;
  double t6638;
  double t6641;
  double t6652;
  double t6661;
  double t6663;
  double t6837;
  double t6840;
  double t6879;
  double t7064;
  double t7066;
  double t7068;
  double t7199;
  double t7217;
  double t7221;
  double t7336;
  double t7355;
  double t7372;
  double t6673;
  double t7412;
  double t7415;
  double t7453;
  double t7454;
  double t7465;
  double t7487;
  double t7498;
  double t7503;
  double t7609;
  double t7617;
  double t7625;
  double t7389;
  double t6676;
  double t6684;
  double t7475;
  double t7723;
  double t7725;
  double t7773;
  double t7809;
  double t7810;
  double t7579;
  double t7583;
  double t7592;
  double t7599;
  double t7633;
  double t7636;
  double t7646;
  double t6691;
  double t6697;
  double t6738;
  double t7854;
  double t7865;
  double t7868;
  double t7895;
  double t7906;
  double t7941;
  double t7945;
  double t7970;
  double t5360;
  double t8099;
  double t8129;
  double t8140;
  t387 = Sin(var1[3]);
  t1533 = Cos(var1[3]);
  t1207 = Cos(var1[5]);
  t1251 = Sin(var1[4]);
  t2040 = Sin(var1[5]);
  t238 = Cos(var1[14]);
  t278 = -1.*t238;
  t307 = 1. + t278;
  t342 = Sin(var1[14]);
  t667 = Sin(var1[13]);
  t1303 = -1.*t1207*t387*t1251;
  t2102 = t1533*t2040;
  t2131 = t1303 + t2102;
  t2294 = Cos(var1[13]);
  t2874 = -1.*t1533*t1207;
  t3094 = -1.*t387*t1251*t2040;
  t3607 = t2874 + t3094;
  t131 = Cos(var1[4]);
  t4200 = t667*t2131;
  t4207 = t2294*t3607;
  t4219 = t4200 + t4207;
  t339 = -0.049*t307;
  t345 = -0.135*t342;
  t359 = 0. + t339 + t345;
  t745 = 0.135*t667;
  t789 = 0. + t745;
  t2329 = -1.*t2294;
  t2534 = 1. + t2329;
  t2567 = -0.135*t2534;
  t2831 = 0. + t2567;
  t4047 = -0.135*t307;
  t4076 = 0.049*t342;
  t4147 = 0. + t4047 + t4076;
  t6468 = t1533*t1207*t1251;
  t6495 = t387*t2040;
  t6579 = t6468 + t6495;
  t6637 = -1.*t1207*t387;
  t6638 = t1533*t1251*t2040;
  t6641 = t6637 + t6638;
  t6652 = t667*t6579;
  t6661 = t2294*t6641;
  t6663 = t6652 + t6661;
  t6837 = t1533*t131*t1207*t667;
  t6840 = t2294*t1533*t131*t2040;
  t6879 = t6837 + t6840;
  t7064 = t131*t1207*t667*t387;
  t7066 = t2294*t131*t387*t2040;
  t7068 = t7064 + t7066;
  t7199 = -1.*t1207*t667*t1251;
  t7217 = -1.*t2294*t1251*t2040;
  t7221 = t7199 + t7217;
  t7336 = t1207*t387;
  t7355 = -1.*t1533*t1251*t2040;
  t7372 = t7336 + t7355;
  t6673 = t2294*t6579;
  t7412 = t667*t7372;
  t7415 = t6673 + t7412;
  t7453 = t1207*t387*t1251;
  t7454 = -1.*t1533*t2040;
  t7465 = t7453 + t7454;
  t7487 = t2294*t7465;
  t7498 = t667*t3607;
  t7503 = t7487 + t7498;
  t7609 = t2294*t131*t1207;
  t7617 = -1.*t131*t667*t2040;
  t7625 = t7609 + t7617;
  t7389 = -1.*t667*t6579;
  t6676 = -1.*t667*t6641;
  t6684 = t6673 + t6676;
  t7475 = -1.*t667*t7465;
  t7723 = t1533*t1207;
  t7725 = t387*t1251*t2040;
  t7773 = t7723 + t7725;
  t7809 = -1.*t667*t7773;
  t7810 = t7487 + t7809;
  t7579 = -1.*t131*t1207*t667;
  t7583 = -1.*t2294*t131*t2040;
  t7592 = t7579 + t7583;
  t7599 = -0.09*t7592;
  t7633 = -0.135*t238*t7625;
  t7636 = t4147*t7625;
  t7646 = -0.049*t342*t7625;
  t6691 = -1.*t1533*t131*t342;
  t6697 = t238*t6663;
  t6738 = t6691 + t6697;
  t7854 = -0.135*t238;
  t7865 = -0.049*t342;
  t7868 = t7854 + t7865;
  t7895 = 0.049*t238;
  t7906 = t7895 + t345;
  t7941 = t667*t7465;
  t7945 = t2294*t7773;
  t7970 = t7941 + t7945;
  t5360 = -1.*t238*t131*t387;
  t8099 = t131*t1207*t667;
  t8129 = t2294*t131*t2040;
  t8140 = t8099 + t8129;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2831*t3607 - 1.*t131*t359*t387 + t4147*t4219 - 0.135*(t131*t342*t387 + t238*t4219) - 0.049*(t342*t4219 + t5360) - 0.09*(t2131*t2294 - 1.*t3607*t667) + t2131*t789;
  p_output1[10]=t131*t1533*t359 + t2831*t6641 + t4147*t6663 - 0.049*(t131*t1533*t238 + t342*t6663) - 0.09*t6684 - 0.135*t6738 + t6579*t789;
  p_output1[11]=0;
  p_output1[12]=t131*t1533*t2040*t2831 - 1.*t1251*t1533*t359 - 0.09*(t1207*t131*t1533*t2294 - 1.*t131*t1533*t2040*t667) + t4147*t6879 - 0.135*(t1251*t1533*t342 + t238*t6879) - 0.049*(-1.*t1251*t1533*t238 + t342*t6879) + t1207*t131*t1533*t789;
  p_output1[13]=t131*t2040*t2831*t387 - 1.*t1251*t359*t387 - 0.09*(t1207*t131*t2294*t387 - 1.*t131*t2040*t387*t667) + t4147*t7068 - 0.135*(t1251*t342*t387 + t238*t7068) - 0.049*(-1.*t1251*t238*t387 + t342*t7068) + t1207*t131*t387*t789;
  p_output1[14]=-1.*t1251*t2040*t2831 - 1.*t131*t359 - 0.09*(-1.*t1207*t1251*t2294 + t1251*t2040*t667) + t4147*t7221 - 0.135*(t131*t342 + t238*t7221) - 0.049*(-1.*t131*t238 + t342*t7221) - 1.*t1207*t1251*t789;
  p_output1[15]=t2831*t6579 - 0.09*(t2294*t7372 + t7389) - 0.135*t238*t7415 - 0.049*t342*t7415 + t4147*t7415 + t7372*t789;
  p_output1[16]=t2831*t7465 - 0.09*(t4207 + t7475) - 0.135*t238*t7503 - 0.049*t342*t7503 + t4147*t7503 + t3607*t789;
  p_output1[17]=t1207*t131*t2831 + t7599 + t7633 + t7636 + t7646 - 1.*t131*t2040*t789;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
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
  p_output1[39]=0.135*t2294*t6579 - 0.135*t6641*t667 - 0.135*t238*t6684 - 0.049*t342*t6684 + t4147*t6684 - 0.09*(-1.*t2294*t6641 + t7389);
  p_output1[40]=0.135*t2294*t7465 - 0.135*t667*t7773 - 0.09*(t7475 - 1.*t2294*t7773) - 0.135*t238*t7810 - 0.049*t342*t7810 + t4147*t7810;
  p_output1[41]=0.135*t1207*t131*t2294 - 0.135*t131*t2040*t667 + t7599 + t7633 + t7636 + t7646;
  p_output1[42]=-0.135*(-1.*t131*t1533*t238 - 1.*t342*t6663) - 0.049*t6738 + t131*t1533*t7868 + t6663*t7906;
  p_output1[43]=t131*t387*t7868 + t7906*t7970 - 0.049*(-1.*t131*t342*t387 + t238*t7970) - 0.135*(t5360 - 1.*t342*t7970);
  p_output1[44]=-1.*t1251*t7868 + t7906*t8140 - 0.049*(t1251*t342 + t238*t8140) - 0.135*(t1251*t238 - 1.*t342*t8140);
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



void Jp_hip_rotation_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
