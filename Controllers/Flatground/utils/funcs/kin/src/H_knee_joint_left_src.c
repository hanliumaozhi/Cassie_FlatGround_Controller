/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:45 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_left_src.h"

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
  double t539;
  double t664;
  double t980;
  double t689;
  double t993;
  double t658;
  double t1224;
  double t1269;
  double t1378;
  double t853;
  double t1027;
  double t1096;
  double t1400;
  double t447;
  double t1569;
  double t1582;
  double t1626;
  double t557;
  double t635;
  double t655;
  double t1141;
  double t1432;
  double t1440;
  double t1456;
  double t1458;
  double t1485;
  double t1682;
  double t306;
  double t2236;
  double t2367;
  double t2419;
  double t2110;
  double t2140;
  double t2199;
  double t1724;
  double t2589;
  double t2624;
  double t2648;
  double t2027;
  double t2223;
  double t2453;
  double t2475;
  double t2490;
  double t2530;
  double t3055;
  double t3078;
  double t3106;
  double t2852;
  double t2890;
  double t2918;
  double t2940;
  double t2999;
  double t3004;
  double t1516;
  double t1690;
  double t1700;
  double t1788;
  double t1814;
  double t1917;
  double t2532;
  double t2650;
  double t2706;
  double t2718;
  double t2735;
  double t2742;
  double t3016;
  double t3132;
  double t3149;
  double t3171;
  double t3187;
  double t3197;
  double t4083;
  double t4084;
  double t4622;
  double t4674;
  double t4892;
  double t4910;
  double t3366;
  double t3393;
  double t3405;
  double t3927;
  double t3937;
  double t4032;
  double t4040;
  double t4048;
  double t4054;
  double t4098;
  double t4101;
  double t4127;
  double t4133;
  double t4356;
  double t4357;
  double t4685;
  double t4686;
  double t4724;
  double t4727;
  double t4740;
  double t4761;
  double t4911;
  double t4923;
  double t4948;
  double t5000;
  double t5017;
  double t5027;
  double t3417;
  double t3442;
  double t3513;
  double t3561;
  double t3590;
  double t3623;
  t539 = Cos(var1[3]);
  t664 = Cos(var1[5]);
  t980 = Sin(var1[4]);
  t689 = Sin(var1[3]);
  t993 = Sin(var1[5]);
  t658 = Cos(var1[6]);
  t1224 = t539*t664*t980;
  t1269 = t689*t993;
  t1378 = t1224 + t1269;
  t853 = -1.*t664*t689;
  t1027 = t539*t980*t993;
  t1096 = t853 + t1027;
  t1400 = Sin(var1[6]);
  t447 = Cos(var1[8]);
  t1569 = t658*t1378;
  t1582 = -1.*t1096*t1400;
  t1626 = t1569 + t1582;
  t557 = Cos(var1[4]);
  t635 = Cos(var1[7]);
  t655 = t539*t557*t635;
  t1141 = t658*t1096;
  t1432 = t1378*t1400;
  t1440 = t1141 + t1432;
  t1456 = Sin(var1[7]);
  t1458 = t1440*t1456;
  t1485 = t655 + t1458;
  t1682 = Sin(var1[8]);
  t306 = Sin(var1[9]);
  t2236 = t664*t689*t980;
  t2367 = -1.*t539*t993;
  t2419 = t2236 + t2367;
  t2110 = t539*t664;
  t2140 = t689*t980*t993;
  t2199 = t2110 + t2140;
  t1724 = Cos(var1[9]);
  t2589 = t658*t2419;
  t2624 = -1.*t2199*t1400;
  t2648 = t2589 + t2624;
  t2027 = t557*t635*t689;
  t2223 = t658*t2199;
  t2453 = t2419*t1400;
  t2475 = t2223 + t2453;
  t2490 = t2475*t1456;
  t2530 = t2027 + t2490;
  t3055 = t557*t664*t658;
  t3078 = -1.*t557*t993*t1400;
  t3106 = t3055 + t3078;
  t2852 = -1.*t635*t980;
  t2890 = t557*t658*t993;
  t2918 = t557*t664*t1400;
  t2940 = t2890 + t2918;
  t2999 = t2940*t1456;
  t3004 = t2852 + t2999;
  t1516 = t447*t1485;
  t1690 = t1626*t1682;
  t1700 = t1516 + t1690;
  t1788 = t447*t1626;
  t1814 = -1.*t1485*t1682;
  t1917 = t1788 + t1814;
  t2532 = t447*t2530;
  t2650 = t2648*t1682;
  t2706 = t2532 + t2650;
  t2718 = t447*t2648;
  t2735 = -1.*t2530*t1682;
  t2742 = t2718 + t2735;
  t3016 = t447*t3004;
  t3132 = t3106*t1682;
  t3149 = t3016 + t3132;
  t3171 = t447*t3106;
  t3187 = -1.*t3004*t1682;
  t3197 = t3171 + t3187;
  t4083 = -1.*t635;
  t4084 = 1. + t4083;
  t4622 = -1.*t447;
  t4674 = 1. + t4622;
  t4892 = -1.*t1724;
  t4910 = 1. + t4892;
  t3366 = t1724*t1700;
  t3393 = t306*t1917;
  t3405 = t3366 + t3393;
  t3927 = -1.*t658;
  t3937 = 1. + t3927;
  t4032 = 0.135*t3937;
  t4040 = 0. + t4032;
  t4048 = -0.135*t1400;
  t4054 = 0. + t4048;
  t4098 = 0.135*t4084;
  t4101 = 0.049*t1456;
  t4127 = 0. + t4098 + t4101;
  t4133 = -0.049*t4084;
  t4356 = 0.135*t1456;
  t4357 = 0. + t4133 + t4356;
  t4685 = -0.049*t4674;
  t4686 = -0.09*t1682;
  t4724 = 0. + t4685 + t4686;
  t4727 = -0.09*t4674;
  t4740 = 0.049*t1682;
  t4761 = 0. + t4727 + t4740;
  t4911 = -0.049*t4910;
  t4923 = -0.21*t306;
  t4948 = 0. + t4911 + t4923;
  t5000 = -0.21*t4910;
  t5017 = 0.049*t306;
  t5027 = 0. + t5000 + t5017;
  t3417 = t1724*t2706;
  t3442 = t306*t2742;
  t3513 = t3417 + t3442;
  t3561 = t1724*t3149;
  t3590 = t306*t3197;
  t3623 = t3561 + t3590;
  p_output1[0]=-1.*t1724*t1917 + t1700*t306;
  p_output1[1]=-1.*t1724*t2742 + t2706*t306;
  p_output1[2]=t306*t3149 - 1.*t1724*t3197;
  p_output1[3]=0.;
  p_output1[4]=t3405;
  p_output1[5]=t3513;
  p_output1[6]=t3623;
  p_output1[7]=0.;
  p_output1[8]=t1456*t539*t557 - 1.*t1440*t635;
  p_output1[9]=-1.*t2475*t635 + t1456*t557*t689;
  p_output1[10]=-1.*t2940*t635 - 1.*t1456*t980;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.21*(t1724*t1917 - 1.*t1700*t306) - 0.049*t3405 + t1096*t4040 + t1378*t4054 + t1440*t4127 + t1485*t4724 + t1626*t4761 + t1700*t4948 + t1917*t5027 + t4357*t539*t557 + 0.1305*(-1.*t1456*t539*t557 + t1440*t635) + var1[0];
  p_output1[13]=0. - 0.21*(t1724*t2742 - 1.*t2706*t306) - 0.049*t3513 + t2199*t4040 + t2419*t4054 + t2475*t4127 + t2530*t4724 + t2648*t4761 + t2706*t4948 + t2742*t5027 + t4357*t557*t689 + 0.1305*(t2475*t635 - 1.*t1456*t557*t689) + var1[1];
  p_output1[14]=0. - 0.21*(-1.*t306*t3149 + t1724*t3197) - 0.049*t3623 + t2940*t4127 + t3004*t4724 + t3106*t4761 + t3149*t4948 + t3197*t5027 + t4054*t557*t664 - 1.*t4357*t980 + 0.1305*(t2940*t635 + t1456*t980) + t4040*t557*t993 + var1[2];
  p_output1[15]=1.;
}



void H_knee_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
