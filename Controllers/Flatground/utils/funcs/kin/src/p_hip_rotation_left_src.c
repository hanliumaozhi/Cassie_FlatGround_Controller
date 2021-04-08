/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:39 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_left_src.h"

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
  double t3031;
  double t2111;
  double t5467;
  double t2133;
  double t5512;
  double t140;
  double t5614;
  double t5620;
  double t5625;
  double t2383;
  double t5542;
  double t5584;
  double t5626;
  double t5688;
  double t5695;
  double t5698;
  double t5705;
  double t5669;
  double t5674;
  double t5678;
  double t5755;
  double t298;
  double t703;
  double t1194;
  double t2086;
  double t5629;
  double t5631;
  double t5856;
  double t5857;
  double t5859;
  double t5841;
  double t5847;
  double t5853;
  double t5704;
  double t5713;
  double t5730;
  double t5761;
  double t5766;
  double t5768;
  double t5895;
  double t5898;
  double t5908;
  double t5970;
  double t5971;
  double t5973;
  t3031 = Cos(var1[3]);
  t2111 = Cos(var1[5]);
  t5467 = Sin(var1[4]);
  t2133 = Sin(var1[3]);
  t5512 = Sin(var1[5]);
  t140 = Cos(var1[6]);
  t5614 = t3031*t2111*t5467;
  t5620 = t2133*t5512;
  t5625 = t5614 + t5620;
  t2383 = -1.*t2111*t2133;
  t5542 = t3031*t5467*t5512;
  t5584 = t2383 + t5542;
  t5626 = Sin(var1[6]);
  t5688 = Cos(var1[7]);
  t5695 = -1.*t5688;
  t5698 = 1. + t5695;
  t5705 = Sin(var1[7]);
  t5669 = t140*t5584;
  t5674 = t5625*t5626;
  t5678 = t5669 + t5674;
  t5755 = Cos(var1[4]);
  t298 = -1.*t140;
  t703 = 1. + t298;
  t1194 = 0.135*t703;
  t2086 = 0. + t1194;
  t5629 = -0.135*t5626;
  t5631 = 0. + t5629;
  t5856 = t2111*t2133*t5467;
  t5857 = -1.*t3031*t5512;
  t5859 = t5856 + t5857;
  t5841 = t3031*t2111;
  t5847 = t2133*t5467*t5512;
  t5853 = t5841 + t5847;
  t5704 = 0.135*t5698;
  t5713 = 0.049*t5705;
  t5730 = 0. + t5704 + t5713;
  t5761 = -0.049*t5698;
  t5766 = 0.135*t5705;
  t5768 = 0. + t5761 + t5766;
  t5895 = t140*t5853;
  t5898 = t5859*t5626;
  t5908 = t5895 + t5898;
  t5970 = t5755*t140*t5512;
  t5971 = t5755*t2111*t5626;
  t5973 = t5970 + t5971;
  p_output1[0]=0. + t2086*t5584 - 0.09*(t140*t5625 - 1.*t5584*t5626) + t5625*t5631 + t5678*t5730 - 0.049*(t5678*t5705 + t3031*t5688*t5755) + 0.135*(t5678*t5688 - 1.*t3031*t5705*t5755) + t3031*t5755*t5768 + var1[0];
  p_output1[1]=0. + t2133*t5755*t5768 + t2086*t5853 + t5631*t5859 - 0.09*(-1.*t5626*t5853 + t140*t5859) + t5730*t5908 + 0.135*(-1.*t2133*t5705*t5755 + t5688*t5908) - 0.049*(t2133*t5688*t5755 + t5705*t5908) + var1[1];
  p_output1[2]=0. + t2086*t5512*t5755 + t2111*t5631*t5755 - 0.09*(t140*t2111*t5755 - 1.*t5512*t5626*t5755) - 1.*t5467*t5768 + t5730*t5973 + 0.135*(t5467*t5705 + t5688*t5973) - 0.049*(-1.*t5467*t5688 + t5705*t5973) + var1[2];
}



void p_hip_rotation_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
