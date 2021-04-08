/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:13 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_right_src.h"

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
  double t1506;
  double t2222;
  double t1047;
  double t2021;
  double t2301;
  double t3026;
  double t2169;
  double t2367;
  double t2911;
  double t774;
  double t3126;
  double t3182;
  double t3207;
  double t3425;
  double t2962;
  double t3214;
  double t3231;
  double t698;
  double t3638;
  double t3671;
  double t3675;
  double t3698;
  double t3701;
  double t3709;
  double t3710;
  double t3714;
  double t3717;
  double t3733;
  double t3353;
  double t3718;
  double t3727;
  double t629;
  double t3737;
  double t3739;
  double t3762;
  double t3825;
  double t3729;
  double t3774;
  double t3789;
  double t580;
  double t3837;
  double t3838;
  double t3857;
  double t3899;
  double t3796;
  double t3862;
  double t3865;
  double t514;
  double t3905;
  double t3916;
  double t3917;
  double t287;
  double t4107;
  double t4114;
  double t4139;
  double t4156;
  double t4162;
  double t4194;
  double t4140;
  double t4198;
  double t4219;
  double t4228;
  double t4234;
  double t4249;
  double t4264;
  double t4273;
  double t4284;
  double t4220;
  double t4287;
  double t4300;
  double t4317;
  double t4320;
  double t4335;
  double t4303;
  double t4355;
  double t4358;
  double t4371;
  double t4379;
  double t4384;
  double t3941;
  double t4363;
  double t4386;
  double t4396;
  double t4406;
  double t4421;
  double t4426;
  double t4487;
  double t4490;
  double t4491;
  double t4500;
  double t4520;
  double t4526;
  double t4528;
  double t4532;
  double t4536;
  double t4499;
  double t4548;
  double t4556;
  double t4594;
  double t4599;
  double t4603;
  double t4571;
  double t4604;
  double t4614;
  double t4629;
  double t4633;
  double t4635;
  double t4619;
  double t4637;
  double t4638;
  double t4686;
  double t4689;
  double t4716;
  double t3876;
  double t3924;
  double t3931;
  double t3979;
  double t3987;
  double t4013;
  double t4398;
  double t4440;
  double t4441;
  double t4461;
  double t4469;
  double t4475;
  double t4643;
  double t4717;
  double t4727;
  double t4739;
  double t4748;
  double t4749;
  t1506 = Cos(var1[5]);
  t2222 = Sin(var1[3]);
  t1047 = Cos(var1[3]);
  t2021 = Sin(var1[4]);
  t2301 = Sin(var1[5]);
  t3026 = Sin(var1[13]);
  t2169 = t1047*t1506*t2021;
  t2367 = t2222*t2301;
  t2911 = t2169 + t2367;
  t774 = Cos(var1[13]);
  t3126 = -1.*t1506*t2222;
  t3182 = t1047*t2021*t2301;
  t3207 = t3126 + t3182;
  t3425 = Cos(var1[15]);
  t2962 = t774*t2911;
  t3214 = -1.*t3026*t3207;
  t3231 = t2962 + t3214;
  t698 = Sin(var1[15]);
  t3638 = Cos(var1[14]);
  t3671 = Cos(var1[4]);
  t3675 = t3638*t1047*t3671;
  t3698 = Sin(var1[14]);
  t3701 = t3026*t2911;
  t3709 = t774*t3207;
  t3710 = t3701 + t3709;
  t3714 = t3698*t3710;
  t3717 = t3675 + t3714;
  t3733 = Cos(var1[16]);
  t3353 = t698*t3231;
  t3718 = t3425*t3717;
  t3727 = t3353 + t3718;
  t629 = Sin(var1[16]);
  t3737 = t3425*t3231;
  t3739 = -1.*t698*t3717;
  t3762 = t3737 + t3739;
  t3825 = Cos(var1[17]);
  t3729 = -1.*t629*t3727;
  t3774 = t3733*t3762;
  t3789 = t3729 + t3774;
  t580 = Sin(var1[17]);
  t3837 = t3733*t3727;
  t3838 = t629*t3762;
  t3857 = t3837 + t3838;
  t3899 = Cos(var1[18]);
  t3796 = t580*t3789;
  t3862 = t3825*t3857;
  t3865 = t3796 + t3862;
  t514 = Sin(var1[18]);
  t3905 = t3825*t3789;
  t3916 = -1.*t580*t3857;
  t3917 = t3905 + t3916;
  t287 = Cos(var1[19]);
  t4107 = t1506*t2222*t2021;
  t4114 = -1.*t1047*t2301;
  t4139 = t4107 + t4114;
  t4156 = t1047*t1506;
  t4162 = t2222*t2021*t2301;
  t4194 = t4156 + t4162;
  t4140 = t774*t4139;
  t4198 = -1.*t3026*t4194;
  t4219 = t4140 + t4198;
  t4228 = t3638*t3671*t2222;
  t4234 = t3026*t4139;
  t4249 = t774*t4194;
  t4264 = t4234 + t4249;
  t4273 = t3698*t4264;
  t4284 = t4228 + t4273;
  t4220 = t698*t4219;
  t4287 = t3425*t4284;
  t4300 = t4220 + t4287;
  t4317 = t3425*t4219;
  t4320 = -1.*t698*t4284;
  t4335 = t4317 + t4320;
  t4303 = -1.*t629*t4300;
  t4355 = t3733*t4335;
  t4358 = t4303 + t4355;
  t4371 = t3733*t4300;
  t4379 = t629*t4335;
  t4384 = t4371 + t4379;
  t3941 = Sin(var1[19]);
  t4363 = t580*t4358;
  t4386 = t3825*t4384;
  t4396 = t4363 + t4386;
  t4406 = t3825*t4358;
  t4421 = -1.*t580*t4384;
  t4426 = t4406 + t4421;
  t4487 = t774*t3671*t1506;
  t4490 = -1.*t3671*t3026*t2301;
  t4491 = t4487 + t4490;
  t4500 = -1.*t3638*t2021;
  t4520 = t3671*t1506*t3026;
  t4526 = t774*t3671*t2301;
  t4528 = t4520 + t4526;
  t4532 = t3698*t4528;
  t4536 = t4500 + t4532;
  t4499 = t698*t4491;
  t4548 = t3425*t4536;
  t4556 = t4499 + t4548;
  t4594 = t3425*t4491;
  t4599 = -1.*t698*t4536;
  t4603 = t4594 + t4599;
  t4571 = -1.*t629*t4556;
  t4604 = t3733*t4603;
  t4614 = t4571 + t4604;
  t4629 = t3733*t4556;
  t4633 = t629*t4603;
  t4635 = t4629 + t4633;
  t4619 = t580*t4614;
  t4637 = t3825*t4635;
  t4638 = t4619 + t4637;
  t4686 = t3825*t4614;
  t4689 = -1.*t580*t4635;
  t4716 = t4686 + t4689;
  t3876 = -1.*t514*t3865;
  t3924 = t3899*t3917;
  t3931 = t3876 + t3924;
  t3979 = t3899*t3865;
  t3987 = t514*t3917;
  t4013 = t3979 + t3987;
  t4398 = -1.*t514*t4396;
  t4440 = t3899*t4426;
  t4441 = t4398 + t4440;
  t4461 = t3899*t4396;
  t4469 = t514*t4426;
  t4475 = t4461 + t4469;
  t4643 = -1.*t514*t4638;
  t4717 = t3899*t4716;
  t4727 = t4643 + t4717;
  t4739 = t3899*t4638;
  t4748 = t514*t4716;
  t4749 = t4739 + t4748;
  p_output1[0]=-1.*t287*t3931 + t3941*t4013;
  p_output1[1]=-1.*t287*t4441 + t3941*t4475;
  p_output1[2]=-1.*t287*t4727 + t3941*t4749;
  p_output1[3]=t3931*t3941 + t287*t4013;
  p_output1[4]=t3941*t4441 + t287*t4475;
  p_output1[5]=t3941*t4727 + t287*t4749;
  p_output1[6]=t1047*t3671*t3698 - 1.*t3638*t3710;
  p_output1[7]=t2222*t3671*t3698 - 1.*t3638*t4264;
  p_output1[8]=-1.*t2021*t3698 - 1.*t3638*t4528;
}



void R_toe_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
