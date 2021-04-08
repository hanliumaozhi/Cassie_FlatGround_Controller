/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:00 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_right_src.h"

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
  double t41;
  double t3362;
  double t4065;
  double t3847;
  double t4152;
  double t309;
  double t379;
  double t835;
  double t922;
  double t3125;
  double t3888;
  double t4859;
  double t4982;
  double t5156;
  double t5435;
  double t5833;
  double t5884;
  double t156;
  double t6317;
  double t6629;
  double t6684;
  double t6697;
  double t6772;
  double t6778;
  double t6837;
  double t6914;
  double t6916;
  double t6920;
  double t7025;
  double t7034;
  double t7036;
  double t896;
  double t961;
  double t1133;
  double t3257;
  double t3343;
  double t5182;
  double t5387;
  double t5389;
  double t5419;
  double t5931;
  double t6114;
  double t6132;
  double t7129;
  double t7133;
  double t7147;
  double t7165;
  double t7168;
  double t7174;
  double t6835;
  double t6840;
  double t6898;
  double t7179;
  double t7185;
  double t7190;
  double t7011;
  double t7017;
  double t7023;
  double t7203;
  double t7219;
  double t7224;
  double t7251;
  double t7270;
  double t7275;
  double t7409;
  double t7411;
  double t7412;
  double t7416;
  double t7428;
  double t7429;
  double t7453;
  double t7470;
  double t7474;
  t41 = Cos(var1[3]);
  t3362 = Cos(var1[5]);
  t4065 = Sin(var1[3]);
  t3847 = Sin(var1[4]);
  t4152 = Sin(var1[5]);
  t309 = Cos(var1[14]);
  t379 = -1.*t309;
  t835 = 1. + t379;
  t922 = Sin(var1[14]);
  t3125 = Sin(var1[13]);
  t3888 = t41*t3362*t3847;
  t4859 = t4065*t4152;
  t4982 = t3888 + t4859;
  t5156 = Cos(var1[13]);
  t5435 = -1.*t3362*t4065;
  t5833 = t41*t3847*t4152;
  t5884 = t5435 + t5833;
  t156 = Cos(var1[4]);
  t6317 = t3125*t4982;
  t6629 = t5156*t5884;
  t6684 = t6317 + t6629;
  t6697 = Cos(var1[15]);
  t6772 = -1.*t6697;
  t6778 = 1. + t6772;
  t6837 = Sin(var1[15]);
  t6914 = t5156*t4982;
  t6916 = -1.*t3125*t5884;
  t6920 = t6914 + t6916;
  t7025 = t309*t41*t156;
  t7034 = t922*t6684;
  t7036 = t7025 + t7034;
  t896 = -0.049*t835;
  t961 = -0.135*t922;
  t1133 = 0. + t896 + t961;
  t3257 = 0.135*t3125;
  t3343 = 0. + t3257;
  t5182 = -1.*t5156;
  t5387 = 1. + t5182;
  t5389 = -0.135*t5387;
  t5419 = 0. + t5389;
  t5931 = -0.135*t835;
  t6114 = 0.049*t922;
  t6132 = 0. + t5931 + t6114;
  t7129 = t3362*t4065*t3847;
  t7133 = -1.*t41*t4152;
  t7147 = t7129 + t7133;
  t7165 = t41*t3362;
  t7168 = t4065*t3847*t4152;
  t7174 = t7165 + t7168;
  t6835 = -0.09*t6778;
  t6840 = 0.049*t6837;
  t6898 = 0. + t6835 + t6840;
  t7179 = t3125*t7147;
  t7185 = t5156*t7174;
  t7190 = t7179 + t7185;
  t7011 = -0.049*t6778;
  t7017 = -0.09*t6837;
  t7023 = 0. + t7011 + t7017;
  t7203 = t5156*t7147;
  t7219 = -1.*t3125*t7174;
  t7224 = t7203 + t7219;
  t7251 = t309*t156*t4065;
  t7270 = t922*t7190;
  t7275 = t7251 + t7270;
  t7409 = t156*t3362*t3125;
  t7411 = t5156*t156*t4152;
  t7412 = t7409 + t7411;
  t7416 = t5156*t156*t3362;
  t7428 = -1.*t156*t3125*t4152;
  t7429 = t7416 + t7428;
  t7453 = -1.*t309*t3847;
  t7470 = t922*t7412;
  t7474 = t7453 + t7470;
  p_output1[0]=0. + t1133*t156*t41 + t3343*t4982 + t5419*t5884 + t6132*t6684 + t6898*t6920 + t7023*t7036 - 0.049*(t6837*t6920 + t6697*t7036) - 0.09*(t6697*t6920 - 1.*t6837*t7036) - 0.135*(t309*t6684 - 1.*t156*t41*t922) + var1[0];
  p_output1[1]=0. + t1133*t156*t4065 + t3343*t7147 + t5419*t7174 + t6132*t7190 + t6898*t7224 + t7023*t7275 - 0.049*(t6837*t7224 + t6697*t7275) - 0.09*(t6697*t7224 - 1.*t6837*t7275) - 0.135*(t309*t7190 - 1.*t156*t4065*t922) + var1[1];
  p_output1[2]=0. + t156*t3343*t3362 - 1.*t1133*t3847 + t156*t4152*t5419 + t6132*t7412 + t6898*t7429 + t7023*t7474 - 0.049*(t6837*t7429 + t6697*t7474) - 0.09*(t6697*t7429 - 1.*t6837*t7474) - 0.135*(t309*t7412 + t3847*t922) + var1[2];
}



void p_hip_flexion_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
