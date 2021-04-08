/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:41 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_left_src.h"

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
  double t1237;
  double t2327;
  double t1130;
  double t1820;
  double t2438;
  double t878;
  double t4094;
  double t5271;
  double t3771;
  double t3772;
  double t4087;
  double t2303;
  double t2442;
  double t3022;
  double t5592;
  double t4720;
  double t4826;
  double t5238;
  double t4422;
  double t4564;
  double t4616;
  double t5734;
  double t5615;
  double t5703;
  double t5706;
  double t5827;
  double t5830;
  double t5860;
  double t5923;
  double t5933;
  double t5975;
  t1237 = Cos(var1[5]);
  t2327 = Sin(var1[3]);
  t1130 = Cos(var1[3]);
  t1820 = Sin(var1[4]);
  t2438 = Sin(var1[5]);
  t878 = Cos(var1[6]);
  t4094 = Sin(var1[6]);
  t5271 = Cos(var1[4]);
  t3771 = -1.*t1237*t2327;
  t3772 = t1130*t1820*t2438;
  t4087 = t3771 + t3772;
  t2303 = t1130*t1237*t1820;
  t2442 = t2327*t2438;
  t3022 = t2303 + t2442;
  t5592 = Cos(var1[7]);
  t4720 = t1130*t1237;
  t4826 = t2327*t1820*t2438;
  t5238 = t4720 + t4826;
  t4422 = t1237*t2327*t1820;
  t4564 = -1.*t1130*t2438;
  t4616 = t4422 + t4564;
  t5734 = Sin(var1[7]);
  t5615 = t878*t4087;
  t5703 = t3022*t4094;
  t5706 = t5615 + t5703;
  t5827 = t878*t5238;
  t5830 = t4616*t4094;
  t5860 = t5827 + t5830;
  t5923 = t5271*t878*t2438;
  t5933 = t5271*t1237*t4094;
  t5975 = t5923 + t5933;
  p_output1[0]=t4087*t4094 - 1.*t3022*t878;
  p_output1[1]=t4094*t5238 - 1.*t4616*t878;
  p_output1[2]=t2438*t4094*t5271 - 1.*t1237*t5271*t878;
  p_output1[3]=t1130*t5271*t5592 + t5706*t5734;
  p_output1[4]=t2327*t5271*t5592 + t5734*t5860;
  p_output1[5]=-1.*t1820*t5592 + t5734*t5975;
  p_output1[6]=-1.*t5592*t5706 + t1130*t5271*t5734;
  p_output1[7]=t2327*t5271*t5734 - 1.*t5592*t5860;
  p_output1[8]=-1.*t1820*t5734 - 1.*t5592*t5975;
}



void R_hip_rotation_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
