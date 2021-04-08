/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:59 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_right_src.h"

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
  double t85;
  double t787;
  double t79;
  double t606;
  double t1056;
  double t24;
  double t1353;
  double t2991;
  double t692;
  double t1186;
  double t1279;
  double t1553;
  double t1654;
  double t1914;
  double t3259;
  double t3458;
  double t2382;
  double t2521;
  double t2529;
  double t2772;
  double t2791;
  double t2802;
  double t3472;
  double t3586;
  double t3759;
  double t4207;
  double t4226;
  double t4235;
  double t4463;
  double t4468;
  double t4589;
  double t5727;
  double t5760;
  double t3345;
  double t3795;
  double t3800;
  double t5837;
  double t6072;
  double t6084;
  double t6125;
  double t6132;
  double t6269;
  double t6294;
  double t6302;
  double t6420;
  double t6465;
  double t6468;
  double t6631;
  double t4200;
  double t4275;
  double t4288;
  double t4409;
  double t4723;
  double t4730;
  t85 = Cos(var1[5]);
  t787 = Sin(var1[3]);
  t79 = Cos(var1[3]);
  t606 = Sin(var1[4]);
  t1056 = Sin(var1[5]);
  t24 = Cos(var1[13]);
  t1353 = Sin(var1[13]);
  t2991 = Cos(var1[4]);
  t692 = t79*t85*t606;
  t1186 = t787*t1056;
  t1279 = t692 + t1186;
  t1553 = -1.*t85*t787;
  t1654 = t79*t606*t1056;
  t1914 = t1553 + t1654;
  t3259 = Cos(var1[14]);
  t3458 = Sin(var1[14]);
  t2382 = t85*t787*t606;
  t2521 = -1.*t79*t1056;
  t2529 = t2382 + t2521;
  t2772 = t79*t85;
  t2791 = t787*t606*t1056;
  t2802 = t2772 + t2791;
  t3472 = t1353*t1279;
  t3586 = t24*t1914;
  t3759 = t3472 + t3586;
  t4207 = t1353*t2529;
  t4226 = t24*t2802;
  t4235 = t4207 + t4226;
  t4463 = t2991*t85*t1353;
  t4468 = t24*t2991*t1056;
  t4589 = t4463 + t4468;
  t5727 = -1.*t3259;
  t5760 = 1. + t5727;
  t3345 = t3259*t79*t2991;
  t3795 = t3458*t3759;
  t3800 = t3345 + t3795;
  t5837 = -0.049*t5760;
  t6072 = -0.135*t3458;
  t6084 = 0. + t5837 + t6072;
  t6125 = 0.135*t1353;
  t6132 = 0. + t6125;
  t6269 = -1.*t24;
  t6294 = 1. + t6269;
  t6302 = -0.135*t6294;
  t6420 = 0. + t6302;
  t6465 = -0.135*t5760;
  t6468 = 0.049*t3458;
  t6631 = 0. + t6465 + t6468;
  t4200 = t3259*t2991*t787;
  t4275 = t3458*t4235;
  t4288 = t4200 + t4275;
  t4409 = -1.*t3259*t606;
  t4723 = t3458*t4589;
  t4730 = t4409 + t4723;
  p_output1[0]=t1353*t1914 - 1.*t1279*t24;
  p_output1[1]=-1.*t24*t2529 + t1353*t2802;
  p_output1[2]=t1056*t1353*t2991 - 1.*t24*t2991*t85;
  p_output1[3]=0.;
  p_output1[4]=t3800;
  p_output1[5]=t4288;
  p_output1[6]=t4730;
  p_output1[7]=0.;
  p_output1[8]=-1.*t3259*t3759 + t2991*t3458*t79;
  p_output1[9]=-1.*t3259*t4235 + t2991*t3458*t787;
  p_output1[10]=-1.*t3259*t4589 - 1.*t3458*t606;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(-1.*t1353*t1914 + t1279*t24) - 0.049*t3800 + t1279*t6132 + t1914*t6420 + t3759*t6631 + t2991*t6084*t79 - 0.135*(t3259*t3759 - 1.*t2991*t3458*t79) + var1[0];
  p_output1[13]=0. - 0.09*(t24*t2529 - 1.*t1353*t2802) - 0.049*t4288 + t2529*t6132 + t2802*t6420 + t4235*t6631 + t2991*t6084*t787 - 0.135*(t3259*t4235 - 1.*t2991*t3458*t787) + var1[1];
  p_output1[14]=0. - 0.049*t4730 - 0.135*(t3259*t4589 + t3458*t606) - 1.*t606*t6084 + t1056*t2991*t6420 + t4589*t6631 + t2991*t6132*t85 - 0.09*(-1.*t1056*t1353*t2991 + t24*t2991*t85) + var1[2];
  p_output1[15]=1.;
}



void H_hip_rotation_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
