/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:55 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_abduction_right_src.h"

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
  double t424;
  double t1516;
  double t1865;
  double t1690;
  double t2405;
  double t888;
  double t1794;
  double t2425;
  double t2570;
  double t2617;
  double t2888;
  double t2999;
  double t3005;
  double t502;
  double t1014;
  double t1480;
  double t2626;
  double t2650;
  double t2785;
  double t2887;
  double t3398;
  double t3417;
  double t3442;
  double t3590;
  double t3655;
  double t3659;
  t424 = Cos(var1[3]);
  t1516 = Cos(var1[5]);
  t1865 = Sin(var1[3]);
  t1690 = Sin(var1[4]);
  t2405 = Sin(var1[5]);
  t888 = Sin(var1[13]);
  t1794 = t424*t1516*t1690;
  t2425 = t1865*t2405;
  t2570 = t1794 + t2425;
  t2617 = Cos(var1[13]);
  t2888 = -1.*t1516*t1865;
  t2999 = t424*t1690*t2405;
  t3005 = t2888 + t2999;
  t502 = Cos(var1[4]);
  t1014 = 0.135*t888;
  t1480 = 0. + t1014;
  t2626 = -1.*t2617;
  t2650 = 1. + t2626;
  t2785 = -0.135*t2650;
  t2887 = 0. + t2785;
  t3398 = t1516*t1865*t1690;
  t3417 = -1.*t424*t2405;
  t3442 = t3398 + t3417;
  t3590 = t424*t1516;
  t3655 = t1865*t1690*t2405;
  t3659 = t3590 + t3655;
  p_output1[0]=0. + t1480*t2570 + t2887*t3005 - 0.049*t424*t502 - 0.135*(t2617*t3005 + t2570*t888) + var1[0];
  p_output1[1]=0. + t1480*t3442 + t2887*t3659 - 0.049*t1865*t502 - 0.135*(t2617*t3659 + t3442*t888) + var1[1];
  p_output1[2]=0. + 0.049*t1690 + t1480*t1516*t502 + t2405*t2887*t502 - 0.135*(t2405*t2617*t502 + t1516*t502*t888) + var1[2];
}



void p_hip_abduction_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
