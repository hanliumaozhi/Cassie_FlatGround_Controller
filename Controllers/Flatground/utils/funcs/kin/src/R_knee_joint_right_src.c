/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:05 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_right_src.h"

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
  double t2120;
  double t2396;
  double t1949;
  double t2225;
  double t2520;
  double t3348;
  double t2253;
  double t3065;
  double t3147;
  double t1900;
  double t3434;
  double t3473;
  double t3477;
  double t3504;
  double t3159;
  double t3486;
  double t3488;
  double t1738;
  double t3505;
  double t3545;
  double t3552;
  double t3630;
  double t3636;
  double t3637;
  double t3658;
  double t3665;
  double t3691;
  double t1415;
  double t3918;
  double t3922;
  double t3926;
  double t3948;
  double t3959;
  double t3969;
  double t3821;
  double t3946;
  double t3992;
  double t3999;
  double t4060;
  double t4072;
  double t4109;
  double t4123;
  double t4137;
  double t4143;
  double t4311;
  double t4324;
  double t4341;
  double t4345;
  double t4349;
  double t4367;
  double t4376;
  double t4410;
  double t4411;
  double t3502;
  double t3778;
  double t3801;
  double t3834;
  double t3867;
  double t3868;
  double t4024;
  double t4144;
  double t4150;
  double t4231;
  double t4243;
  double t4246;
  double t4344;
  double t4449;
  double t4466;
  double t4496;
  double t4530;
  double t4538;
  t2120 = Cos(var1[5]);
  t2396 = Sin(var1[3]);
  t1949 = Cos(var1[3]);
  t2225 = Sin(var1[4]);
  t2520 = Sin(var1[5]);
  t3348 = Sin(var1[13]);
  t2253 = t1949*t2120*t2225;
  t3065 = t2396*t2520;
  t3147 = t2253 + t3065;
  t1900 = Cos(var1[13]);
  t3434 = -1.*t2120*t2396;
  t3473 = t1949*t2225*t2520;
  t3477 = t3434 + t3473;
  t3504 = Cos(var1[15]);
  t3159 = t1900*t3147;
  t3486 = -1.*t3348*t3477;
  t3488 = t3159 + t3486;
  t1738 = Sin(var1[15]);
  t3505 = Cos(var1[14]);
  t3545 = Cos(var1[4]);
  t3552 = t3505*t1949*t3545;
  t3630 = Sin(var1[14]);
  t3636 = t3348*t3147;
  t3637 = t1900*t3477;
  t3658 = t3636 + t3637;
  t3665 = t3630*t3658;
  t3691 = t3552 + t3665;
  t1415 = Sin(var1[16]);
  t3918 = t2120*t2396*t2225;
  t3922 = -1.*t1949*t2520;
  t3926 = t3918 + t3922;
  t3948 = t1949*t2120;
  t3959 = t2396*t2225*t2520;
  t3969 = t3948 + t3959;
  t3821 = Cos(var1[16]);
  t3946 = t1900*t3926;
  t3992 = -1.*t3348*t3969;
  t3999 = t3946 + t3992;
  t4060 = t3505*t3545*t2396;
  t4072 = t3348*t3926;
  t4109 = t1900*t3969;
  t4123 = t4072 + t4109;
  t4137 = t3630*t4123;
  t4143 = t4060 + t4137;
  t4311 = t1900*t3545*t2120;
  t4324 = -1.*t3545*t3348*t2520;
  t4341 = t4311 + t4324;
  t4345 = -1.*t3505*t2225;
  t4349 = t3545*t2120*t3348;
  t4367 = t1900*t3545*t2520;
  t4376 = t4349 + t4367;
  t4410 = t3630*t4376;
  t4411 = t4345 + t4410;
  t3502 = t1738*t3488;
  t3778 = t3504*t3691;
  t3801 = t3502 + t3778;
  t3834 = t3504*t3488;
  t3867 = -1.*t1738*t3691;
  t3868 = t3834 + t3867;
  t4024 = t1738*t3999;
  t4144 = t3504*t4143;
  t4150 = t4024 + t4144;
  t4231 = t3504*t3999;
  t4243 = -1.*t1738*t4143;
  t4246 = t4231 + t4243;
  t4344 = t1738*t4341;
  t4449 = t3504*t4411;
  t4466 = t4344 + t4449;
  t4496 = t3504*t4341;
  t4530 = -1.*t1738*t4411;
  t4538 = t4496 + t4530;
  p_output1[0]=t1415*t3801 - 1.*t3821*t3868;
  p_output1[1]=t1415*t4150 - 1.*t3821*t4246;
  p_output1[2]=t1415*t4466 - 1.*t3821*t4538;
  p_output1[3]=t3801*t3821 + t1415*t3868;
  p_output1[4]=t3821*t4150 + t1415*t4246;
  p_output1[5]=t3821*t4466 + t1415*t4538;
  p_output1[6]=t1949*t3545*t3630 - 1.*t3505*t3658;
  p_output1[7]=t2396*t3545*t3630 - 1.*t3505*t4123;
  p_output1[8]=-1.*t2225*t3630 - 1.*t3505*t4376;
}



void R_knee_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
