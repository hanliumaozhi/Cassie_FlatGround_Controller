/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:03 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_right_src.h"

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
  double t1458;
  double t3388;
  double t3568;
  double t3457;
  double t3615;
  double t2481;
  double t2635;
  double t2696;
  double t2834;
  double t3111;
  double t3532;
  double t3634;
  double t3641;
  double t4182;
  double t4588;
  double t4649;
  double t4661;
  double t2158;
  double t5796;
  double t6096;
  double t6371;
  double t6545;
  double t6653;
  double t6669;
  double t6835;
  double t7091;
  double t7105;
  double t7117;
  double t7335;
  double t7339;
  double t7342;
  double t7354;
  double t7365;
  double t7370;
  double t7380;
  double t7415;
  double t7443;
  double t7478;
  double t7501;
  double t7510;
  double t7519;
  double t2727;
  double t3028;
  double t3083;
  double t3116;
  double t3371;
  double t4302;
  double t4343;
  double t4344;
  double t4586;
  double t5167;
  double t5193;
  double t5482;
  double t7675;
  double t7680;
  double t7683;
  double t7691;
  double t7711;
  double t7714;
  double t6761;
  double t6900;
  double t7032;
  double t7732;
  double t7751;
  double t7760;
  double t7279;
  double t7280;
  double t7289;
  double t7372;
  double t7390;
  double t7409;
  double t7778;
  double t7781;
  double t7810;
  double t7848;
  double t7852;
  double t7859;
  double t7484;
  double t7489;
  double t7490;
  double t7872;
  double t7882;
  double t7891;
  double t7906;
  double t7918;
  double t7919;
  double t8031;
  double t8052;
  double t8061;
  double t8099;
  double t8129;
  double t8151;
  double t8245;
  double t8275;
  double t8280;
  double t8292;
  double t8294;
  double t8301;
  double t8327;
  double t8330;
  double t8332;
  t1458 = Cos(var1[3]);
  t3388 = Cos(var1[5]);
  t3568 = Sin(var1[3]);
  t3457 = Sin(var1[4]);
  t3615 = Sin(var1[5]);
  t2481 = Cos(var1[14]);
  t2635 = -1.*t2481;
  t2696 = 1. + t2635;
  t2834 = Sin(var1[14]);
  t3111 = Sin(var1[13]);
  t3532 = t1458*t3388*t3457;
  t3634 = t3568*t3615;
  t3641 = t3532 + t3634;
  t4182 = Cos(var1[13]);
  t4588 = -1.*t3388*t3568;
  t4649 = t1458*t3457*t3615;
  t4661 = t4588 + t4649;
  t2158 = Cos(var1[4]);
  t5796 = t3111*t3641;
  t6096 = t4182*t4661;
  t6371 = t5796 + t6096;
  t6545 = Cos(var1[15]);
  t6653 = -1.*t6545;
  t6669 = 1. + t6653;
  t6835 = Sin(var1[15]);
  t7091 = t4182*t3641;
  t7105 = -1.*t3111*t4661;
  t7117 = t7091 + t7105;
  t7335 = t2481*t1458*t2158;
  t7339 = t2834*t6371;
  t7342 = t7335 + t7339;
  t7354 = Cos(var1[16]);
  t7365 = -1.*t7354;
  t7370 = 1. + t7365;
  t7380 = Sin(var1[16]);
  t7415 = t6835*t7117;
  t7443 = t6545*t7342;
  t7478 = t7415 + t7443;
  t7501 = t6545*t7117;
  t7510 = -1.*t6835*t7342;
  t7519 = t7501 + t7510;
  t2727 = -0.049*t2696;
  t3028 = -0.135*t2834;
  t3083 = 0. + t2727 + t3028;
  t3116 = 0.135*t3111;
  t3371 = 0. + t3116;
  t4302 = -1.*t4182;
  t4343 = 1. + t4302;
  t4344 = -0.135*t4343;
  t4586 = 0. + t4344;
  t5167 = -0.135*t2696;
  t5193 = 0.049*t2834;
  t5482 = 0. + t5167 + t5193;
  t7675 = t3388*t3568*t3457;
  t7680 = -1.*t1458*t3615;
  t7683 = t7675 + t7680;
  t7691 = t1458*t3388;
  t7711 = t3568*t3457*t3615;
  t7714 = t7691 + t7711;
  t6761 = -0.09*t6669;
  t6900 = 0.049*t6835;
  t7032 = 0. + t6761 + t6900;
  t7732 = t3111*t7683;
  t7751 = t4182*t7714;
  t7760 = t7732 + t7751;
  t7279 = -0.049*t6669;
  t7280 = -0.09*t6835;
  t7289 = 0. + t7279 + t7280;
  t7372 = -0.049*t7370;
  t7390 = -0.21*t7380;
  t7409 = 0. + t7372 + t7390;
  t7778 = t4182*t7683;
  t7781 = -1.*t3111*t7714;
  t7810 = t7778 + t7781;
  t7848 = t2481*t2158*t3568;
  t7852 = t2834*t7760;
  t7859 = t7848 + t7852;
  t7484 = -0.21*t7370;
  t7489 = 0.049*t7380;
  t7490 = 0. + t7484 + t7489;
  t7872 = t6835*t7810;
  t7882 = t6545*t7859;
  t7891 = t7872 + t7882;
  t7906 = t6545*t7810;
  t7918 = -1.*t6835*t7859;
  t7919 = t7906 + t7918;
  t8031 = t2158*t3388*t3111;
  t8052 = t4182*t2158*t3615;
  t8061 = t8031 + t8052;
  t8099 = t4182*t2158*t3388;
  t8129 = -1.*t2158*t3111*t3615;
  t8151 = t8099 + t8129;
  t8245 = -1.*t2481*t3457;
  t8275 = t2834*t8061;
  t8280 = t8245 + t8275;
  t8292 = t6835*t8151;
  t8294 = t6545*t8280;
  t8301 = t8292 + t8294;
  t8327 = t6545*t8151;
  t8330 = -1.*t6835*t8280;
  t8332 = t8327 + t8330;
  p_output1[0]=0. + t1458*t2158*t3083 + t3371*t3641 + t4586*t4661 + t5482*t6371 - 0.1305*(-1.*t1458*t2158*t2834 + t2481*t6371) + t7032*t7117 + t7289*t7342 + t7409*t7478 + t7490*t7519 - 0.21*(-1.*t7380*t7478 + t7354*t7519) - 0.049*(t7354*t7478 + t7380*t7519) + var1[0];
  p_output1[1]=0. + t2158*t3083*t3568 + t3371*t7683 + t4586*t7714 + t5482*t7760 - 0.1305*(-1.*t2158*t2834*t3568 + t2481*t7760) + t7032*t7810 + t7289*t7859 + t7409*t7891 + t7490*t7919 - 0.21*(-1.*t7380*t7891 + t7354*t7919) - 0.049*(t7354*t7891 + t7380*t7919) + var1[1];
  p_output1[2]=0. + t2158*t3371*t3388 - 1.*t3083*t3457 + t2158*t3615*t4586 + t5482*t8061 - 0.1305*(t2834*t3457 + t2481*t8061) + t7032*t8151 + t7289*t8280 + t7409*t8301 + t7490*t8332 - 0.21*(-1.*t7380*t8301 + t7354*t8332) - 0.049*(t7354*t8301 + t7380*t8332) + var1[2];
}



void p_knee_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
