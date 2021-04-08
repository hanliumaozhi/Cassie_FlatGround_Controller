/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:02 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_right_src.h"

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
  double t675;
  double t1393;
  double t437;
  double t1102;
  double t1988;
  double t4001;
  double t1148;
  double t3554;
  double t3631;
  double t431;
  double t4301;
  double t4346;
  double t4546;
  double t28;
  double t4893;
  double t4946;
  double t4978;
  double t5102;
  double t5391;
  double t5475;
  double t5496;
  double t5598;
  double t5621;
  double t5639;
  double t3981;
  double t4550;
  double t4844;
  double t5082;
  double t5116;
  double t5123;
  double t5143;
  double t5305;
  double t5315;
  double t5539;
  double t5649;
  double t5650;
  double t5810;
  double t5836;
  double t5838;
  double t5926;
  double t6017;
  double t6056;
  double t6414;
  double t6447;
  double t6586;
  double t6720;
  double t6740;
  double t6745;
  double t6755;
  double t6758;
  double t6762;
  t675 = Cos(var1[5]);
  t1393 = Sin(var1[3]);
  t437 = Cos(var1[3]);
  t1102 = Sin(var1[4]);
  t1988 = Sin(var1[5]);
  t4001 = Sin(var1[13]);
  t1148 = t437*t675*t1102;
  t3554 = t1393*t1988;
  t3631 = t1148 + t3554;
  t431 = Cos(var1[13]);
  t4301 = -1.*t675*t1393;
  t4346 = t437*t1102*t1988;
  t4546 = t4301 + t4346;
  t28 = Cos(var1[15]);
  t4893 = Sin(var1[15]);
  t4946 = Cos(var1[14]);
  t4978 = Cos(var1[4]);
  t5102 = Sin(var1[14]);
  t5391 = t675*t1393*t1102;
  t5475 = -1.*t437*t1988;
  t5496 = t5391 + t5475;
  t5598 = t437*t675;
  t5621 = t1393*t1102*t1988;
  t5639 = t5598 + t5621;
  t3981 = t431*t3631;
  t4550 = -1.*t4001*t4546;
  t4844 = t3981 + t4550;
  t5082 = t4946*t437*t4978;
  t5116 = t4001*t3631;
  t5123 = t431*t4546;
  t5143 = t5116 + t5123;
  t5305 = t5102*t5143;
  t5315 = t5082 + t5305;
  t5539 = t431*t5496;
  t5649 = -1.*t4001*t5639;
  t5650 = t5539 + t5649;
  t5810 = t4946*t4978*t1393;
  t5836 = t4001*t5496;
  t5838 = t431*t5639;
  t5926 = t5836 + t5838;
  t6017 = t5102*t5926;
  t6056 = t5810 + t6017;
  t6414 = t431*t4978*t675;
  t6447 = -1.*t4978*t4001*t1988;
  t6586 = t6414 + t6447;
  t6720 = -1.*t4946*t1102;
  t6740 = t4978*t675*t4001;
  t6745 = t431*t4978*t1988;
  t6755 = t6740 + t6745;
  t6758 = t5102*t6755;
  t6762 = t6720 + t6758;
  p_output1[0]=-1.*t28*t4844 + t4893*t5315;
  p_output1[1]=-1.*t28*t5650 + t4893*t6056;
  p_output1[2]=-1.*t28*t6586 + t4893*t6762;
  p_output1[3]=t4844*t4893 + t28*t5315;
  p_output1[4]=t4893*t5650 + t28*t6056;
  p_output1[5]=t4893*t6586 + t28*t6762;
  p_output1[6]=t437*t4978*t5102 - 1.*t4946*t5143;
  p_output1[7]=t1393*t4978*t5102 - 1.*t4946*t5926;
  p_output1[8]=-1.*t1102*t5102 - 1.*t4946*t6755;
}



void R_hip_flexion_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
