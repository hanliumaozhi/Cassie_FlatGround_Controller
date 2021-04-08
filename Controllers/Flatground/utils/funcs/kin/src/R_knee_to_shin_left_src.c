/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:49 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_to_shin_left_src.h"

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
  double t2560;
  double t3781;
  double t4156;
  double t3826;
  double t4264;
  double t3638;
  double t4320;
  double t4355;
  double t4371;
  double t3935;
  double t4284;
  double t4287;
  double t4384;
  double t1676;
  double t4499;
  double t4500;
  double t4526;
  double t2756;
  double t2807;
  double t2819;
  double t4300;
  double t4386;
  double t4398;
  double t4406;
  double t4421;
  double t4426;
  double t4619;
  double t4637;
  double t4487;
  double t4629;
  double t4633;
  double t894;
  double t4638;
  double t4643;
  double t4689;
  double t891;
  double t4863;
  double t4864;
  double t4883;
  double t4831;
  double t4832;
  double t4841;
  double t4984;
  double t4986;
  double t4992;
  double t4821;
  double t4843;
  double t4912;
  double t4919;
  double t4922;
  double t4962;
  double t4775;
  double t4977;
  double t5045;
  double t5058;
  double t5135;
  double t5137;
  double t5145;
  double t5405;
  double t5418;
  double t5440;
  double t5292;
  double t5313;
  double t5332;
  double t5351;
  double t5383;
  double t5402;
  double t5403;
  double t5445;
  double t5454;
  double t5456;
  double t5461;
  double t5483;
  double t4635;
  double t4716;
  double t4760;
  double t4778;
  double t4782;
  double t4788;
  double t5092;
  double t5148;
  double t5153;
  double t5161;
  double t5172;
  double t5228;
  double t5455;
  double t5487;
  double t5488;
  double t5515;
  double t5524;
  double t5540;
  t2560 = Cos(var1[3]);
  t3781 = Cos(var1[5]);
  t4156 = Sin(var1[4]);
  t3826 = Sin(var1[3]);
  t4264 = Sin(var1[5]);
  t3638 = Cos(var1[6]);
  t4320 = t2560*t3781*t4156;
  t4355 = t3826*t4264;
  t4371 = t4320 + t4355;
  t3935 = -1.*t3781*t3826;
  t4284 = t2560*t4156*t4264;
  t4287 = t3935 + t4284;
  t4384 = Sin(var1[6]);
  t1676 = Cos(var1[8]);
  t4499 = t3638*t4371;
  t4500 = -1.*t4287*t4384;
  t4526 = t4499 + t4500;
  t2756 = Cos(var1[4]);
  t2807 = Cos(var1[7]);
  t2819 = t2560*t2756*t2807;
  t4300 = t3638*t4287;
  t4386 = t4371*t4384;
  t4398 = t4300 + t4386;
  t4406 = Sin(var1[7]);
  t4421 = t4398*t4406;
  t4426 = t2819 + t4421;
  t4619 = Sin(var1[8]);
  t4637 = Cos(var1[9]);
  t4487 = t1676*t4426;
  t4629 = t4526*t4619;
  t4633 = t4487 + t4629;
  t894 = Sin(var1[9]);
  t4638 = t1676*t4526;
  t4643 = -1.*t4426*t4619;
  t4689 = t4638 + t4643;
  t891 = Cos(var1[10]);
  t4863 = t3781*t3826*t4156;
  t4864 = -1.*t2560*t4264;
  t4883 = t4863 + t4864;
  t4831 = t2560*t3781;
  t4832 = t3826*t4156*t4264;
  t4841 = t4831 + t4832;
  t4984 = t3638*t4883;
  t4986 = -1.*t4841*t4384;
  t4992 = t4984 + t4986;
  t4821 = t2756*t2807*t3826;
  t4843 = t3638*t4841;
  t4912 = t4883*t4384;
  t4919 = t4843 + t4912;
  t4922 = t4919*t4406;
  t4962 = t4821 + t4922;
  t4775 = Sin(var1[10]);
  t4977 = t1676*t4962;
  t5045 = t4992*t4619;
  t5058 = t4977 + t5045;
  t5135 = t1676*t4992;
  t5137 = -1.*t4962*t4619;
  t5145 = t5135 + t5137;
  t5405 = t2756*t3781*t3638;
  t5418 = -1.*t2756*t4264*t4384;
  t5440 = t5405 + t5418;
  t5292 = -1.*t2807*t4156;
  t5313 = t2756*t3638*t4264;
  t5332 = t2756*t3781*t4384;
  t5351 = t5313 + t5332;
  t5383 = t5351*t4406;
  t5402 = t5292 + t5383;
  t5403 = t1676*t5402;
  t5445 = t5440*t4619;
  t5454 = t5403 + t5445;
  t5456 = t1676*t5440;
  t5461 = -1.*t5402*t4619;
  t5483 = t5456 + t5461;
  t4635 = -1.*t894*t4633;
  t4716 = t4637*t4689;
  t4760 = t4635 + t4716;
  t4778 = t4637*t4633;
  t4782 = t894*t4689;
  t4788 = t4778 + t4782;
  t5092 = -1.*t894*t5058;
  t5148 = t4637*t5145;
  t5153 = t5092 + t5148;
  t5161 = t4637*t5058;
  t5172 = t894*t5145;
  t5228 = t5161 + t5172;
  t5455 = -1.*t894*t5454;
  t5487 = t4637*t5483;
  t5488 = t5455 + t5487;
  t5515 = t4637*t5454;
  t5524 = t894*t5483;
  t5540 = t5515 + t5524;
  p_output1[0]=t4775*t4788 - 1.*t4760*t891;
  p_output1[1]=t4775*t5228 - 1.*t5153*t891;
  p_output1[2]=t4775*t5540 - 1.*t5488*t891;
  p_output1[3]=t4760*t4775 + t4788*t891;
  p_output1[4]=t4775*t5153 + t5228*t891;
  p_output1[5]=t4775*t5488 + t5540*t891;
  p_output1[6]=-1.*t2807*t4398 + t2560*t2756*t4406;
  p_output1[7]=t2756*t3826*t4406 - 1.*t2807*t4919;
  p_output1[8]=-1.*t4156*t4406 - 1.*t2807*t5351;
}



void R_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
