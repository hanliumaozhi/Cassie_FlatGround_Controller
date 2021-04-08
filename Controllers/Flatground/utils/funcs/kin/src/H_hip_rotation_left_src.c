/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:40 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_left_src.h"

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
  double t1262;
  double t1405;
  double t1040;
  double t1344;
  double t1576;
  double t622;
  double t2135;
  double t3305;
  double t2055;
  double t2113;
  double t2130;
  double t1364;
  double t1609;
  double t1874;
  double t4068;
  double t2810;
  double t2927;
  double t3129;
  double t2501;
  double t2547;
  double t2552;
  double t4485;
  double t4248;
  double t4341;
  double t4377;
  double t4915;
  double t4991;
  double t5024;
  double t5238;
  double t5271;
  double t5274;
  double t5954;
  double t5970;
  double t4135;
  double t4517;
  double t4616;
  double t5782;
  double t5793;
  double t5804;
  double t5823;
  double t5830;
  double t5860;
  double t5971;
  double t5975;
  double t5983;
  double t5988;
  double t5989;
  double t5996;
  double t4720;
  double t5121;
  double t5126;
  double t5201;
  double t5376;
  double t5407;
  t1262 = Cos(var1[5]);
  t1405 = Sin(var1[3]);
  t1040 = Cos(var1[3]);
  t1344 = Sin(var1[4]);
  t1576 = Sin(var1[5]);
  t622 = Cos(var1[6]);
  t2135 = Sin(var1[6]);
  t3305 = Cos(var1[4]);
  t2055 = -1.*t1262*t1405;
  t2113 = t1040*t1344*t1576;
  t2130 = t2055 + t2113;
  t1364 = t1040*t1262*t1344;
  t1609 = t1405*t1576;
  t1874 = t1364 + t1609;
  t4068 = Cos(var1[7]);
  t2810 = t1040*t1262;
  t2927 = t1405*t1344*t1576;
  t3129 = t2810 + t2927;
  t2501 = t1262*t1405*t1344;
  t2547 = -1.*t1040*t1576;
  t2552 = t2501 + t2547;
  t4485 = Sin(var1[7]);
  t4248 = t622*t2130;
  t4341 = t1874*t2135;
  t4377 = t4248 + t4341;
  t4915 = t622*t3129;
  t4991 = t2552*t2135;
  t5024 = t4915 + t4991;
  t5238 = t3305*t622*t1576;
  t5271 = t3305*t1262*t2135;
  t5274 = t5238 + t5271;
  t5954 = -1.*t4068;
  t5970 = 1. + t5954;
  t4135 = t1040*t3305*t4068;
  t4517 = t4377*t4485;
  t4616 = t4135 + t4517;
  t5782 = -1.*t622;
  t5793 = 1. + t5782;
  t5804 = 0.135*t5793;
  t5823 = 0. + t5804;
  t5830 = -0.135*t2135;
  t5860 = 0. + t5830;
  t5971 = 0.135*t5970;
  t5975 = 0.049*t4485;
  t5983 = 0. + t5971 + t5975;
  t5988 = -0.049*t5970;
  t5989 = 0.135*t4485;
  t5996 = 0. + t5988 + t5989;
  t4720 = t3305*t4068*t1405;
  t5121 = t5024*t4485;
  t5126 = t4720 + t5121;
  t5201 = -1.*t4068*t1344;
  t5376 = t5274*t4485;
  t5407 = t5201 + t5376;
  p_output1[0]=t2130*t2135 - 1.*t1874*t622;
  p_output1[1]=t2135*t3129 - 1.*t2552*t622;
  p_output1[2]=t1576*t2135*t3305 - 1.*t1262*t3305*t622;
  p_output1[3]=0.;
  p_output1[4]=t4616;
  p_output1[5]=t5126;
  p_output1[6]=t5407;
  p_output1[7]=0.;
  p_output1[8]=-1.*t4068*t4377 + t1040*t3305*t4485;
  p_output1[9]=t1405*t3305*t4485 - 1.*t4068*t5024;
  p_output1[10]=-1.*t1344*t4485 - 1.*t4068*t5274;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.135*(t4068*t4377 - 1.*t1040*t3305*t4485) - 0.049*t4616 + t2130*t5823 + t1874*t5860 + t4377*t5983 + t1040*t3305*t5996 - 0.09*(-1.*t2130*t2135 + t1874*t622) + var1[0];
  p_output1[13]=0. + 0.135*(-1.*t1405*t3305*t4485 + t4068*t5024) - 0.049*t5126 + t3129*t5823 + t2552*t5860 + t5024*t5983 + t1405*t3305*t5996 - 0.09*(-1.*t2135*t3129 + t2552*t622) + var1[1];
  p_output1[14]=0. + 0.135*(t1344*t4485 + t4068*t5274) - 0.049*t5407 + t1576*t3305*t5823 + t1262*t3305*t5860 + t5274*t5983 - 1.*t1344*t5996 - 0.09*(-1.*t1576*t2135*t3305 + t1262*t3305*t622) + var1[2];
  p_output1[15]=1.;
}



void H_hip_rotation_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
