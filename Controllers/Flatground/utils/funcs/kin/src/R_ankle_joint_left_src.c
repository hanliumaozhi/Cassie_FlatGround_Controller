/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:51 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_left_src.h"

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
  double t2584;
  double t3040;
  double t3724;
  double t3337;
  double t3785;
  double t2978;
  double t4290;
  double t4351;
  double t4447;
  double t3539;
  double t3788;
  double t4039;
  double t4448;
  double t2255;
  double t4506;
  double t4510;
  double t4512;
  double t2657;
  double t2740;
  double t2977;
  double t4261;
  double t4462;
  double t4464;
  double t4473;
  double t4492;
  double t4494;
  double t4527;
  double t4579;
  double t4504;
  double t4549;
  double t4552;
  double t1421;
  double t4598;
  double t4606;
  double t4607;
  double t4648;
  double t4560;
  double t4612;
  double t4617;
  double t1162;
  double t4654;
  double t4659;
  double t4678;
  double t876;
  double t4882;
  double t4918;
  double t4942;
  double t4839;
  double t4846;
  double t4860;
  double t5037;
  double t5061;
  double t5067;
  double t4822;
  double t4880;
  double t4947;
  double t4961;
  double t4974;
  double t4976;
  double t5005;
  double t5070;
  double t5077;
  double t5114;
  double t5140;
  double t5141;
  double t4694;
  double t5109;
  double t5152;
  double t5162;
  double t5197;
  double t5209;
  double t5213;
  double t5366;
  double t5370;
  double t5373;
  double t5323;
  double t5326;
  double t5328;
  double t5350;
  double t5353;
  double t5355;
  double t5356;
  double t5382;
  double t5386;
  double t5421;
  double t5422;
  double t5427;
  double t5417;
  double t5434;
  double t5438;
  double t5442;
  double t5449;
  double t5463;
  double t4640;
  double t4683;
  double t4690;
  double t4703;
  double t4718;
  double t4745;
  double t5196;
  double t5224;
  double t5242;
  double t5251;
  double t5255;
  double t5260;
  double t5441;
  double t5472;
  double t5473;
  double t5489;
  double t5497;
  double t5500;
  t2584 = Cos(var1[3]);
  t3040 = Cos(var1[5]);
  t3724 = Sin(var1[4]);
  t3337 = Sin(var1[3]);
  t3785 = Sin(var1[5]);
  t2978 = Cos(var1[6]);
  t4290 = t2584*t3040*t3724;
  t4351 = t3337*t3785;
  t4447 = t4290 + t4351;
  t3539 = -1.*t3040*t3337;
  t3788 = t2584*t3724*t3785;
  t4039 = t3539 + t3788;
  t4448 = Sin(var1[6]);
  t2255 = Cos(var1[8]);
  t4506 = t2978*t4447;
  t4510 = -1.*t4039*t4448;
  t4512 = t4506 + t4510;
  t2657 = Cos(var1[4]);
  t2740 = Cos(var1[7]);
  t2977 = t2584*t2657*t2740;
  t4261 = t2978*t4039;
  t4462 = t4447*t4448;
  t4464 = t4261 + t4462;
  t4473 = Sin(var1[7]);
  t4492 = t4464*t4473;
  t4494 = t2977 + t4492;
  t4527 = Sin(var1[8]);
  t4579 = Cos(var1[9]);
  t4504 = t2255*t4494;
  t4549 = t4512*t4527;
  t4552 = t4504 + t4549;
  t1421 = Sin(var1[9]);
  t4598 = t2255*t4512;
  t4606 = -1.*t4494*t4527;
  t4607 = t4598 + t4606;
  t4648 = Cos(var1[10]);
  t4560 = -1.*t1421*t4552;
  t4612 = t4579*t4607;
  t4617 = t4560 + t4612;
  t1162 = Sin(var1[10]);
  t4654 = t4579*t4552;
  t4659 = t1421*t4607;
  t4678 = t4654 + t4659;
  t876 = Sin(var1[11]);
  t4882 = t3040*t3337*t3724;
  t4918 = -1.*t2584*t3785;
  t4942 = t4882 + t4918;
  t4839 = t2584*t3040;
  t4846 = t3337*t3724*t3785;
  t4860 = t4839 + t4846;
  t5037 = t2978*t4942;
  t5061 = -1.*t4860*t4448;
  t5067 = t5037 + t5061;
  t4822 = t2657*t2740*t3337;
  t4880 = t2978*t4860;
  t4947 = t4942*t4448;
  t4961 = t4880 + t4947;
  t4974 = t4961*t4473;
  t4976 = t4822 + t4974;
  t5005 = t2255*t4976;
  t5070 = t5067*t4527;
  t5077 = t5005 + t5070;
  t5114 = t2255*t5067;
  t5140 = -1.*t4976*t4527;
  t5141 = t5114 + t5140;
  t4694 = Cos(var1[11]);
  t5109 = -1.*t1421*t5077;
  t5152 = t4579*t5141;
  t5162 = t5109 + t5152;
  t5197 = t4579*t5077;
  t5209 = t1421*t5141;
  t5213 = t5197 + t5209;
  t5366 = t2657*t3040*t2978;
  t5370 = -1.*t2657*t3785*t4448;
  t5373 = t5366 + t5370;
  t5323 = -1.*t2740*t3724;
  t5326 = t2657*t2978*t3785;
  t5328 = t2657*t3040*t4448;
  t5350 = t5326 + t5328;
  t5353 = t5350*t4473;
  t5355 = t5323 + t5353;
  t5356 = t2255*t5355;
  t5382 = t5373*t4527;
  t5386 = t5356 + t5382;
  t5421 = t2255*t5373;
  t5422 = -1.*t5355*t4527;
  t5427 = t5421 + t5422;
  t5417 = -1.*t1421*t5386;
  t5434 = t4579*t5427;
  t5438 = t5417 + t5434;
  t5442 = t4579*t5386;
  t5449 = t1421*t5427;
  t5463 = t5442 + t5449;
  t4640 = t1162*t4617;
  t4683 = t4648*t4678;
  t4690 = t4640 + t4683;
  t4703 = t4648*t4617;
  t4718 = -1.*t1162*t4678;
  t4745 = t4703 + t4718;
  t5196 = t1162*t5162;
  t5224 = t4648*t5213;
  t5242 = t5196 + t5224;
  t5251 = t4648*t5162;
  t5255 = -1.*t1162*t5213;
  t5260 = t5251 + t5255;
  t5441 = t1162*t5438;
  t5472 = t4648*t5463;
  t5473 = t5441 + t5472;
  t5489 = t4648*t5438;
  t5497 = -1.*t1162*t5463;
  t5500 = t5489 + t5497;
  p_output1[0]=-1.*t4694*t4745 + t4690*t876;
  p_output1[1]=-1.*t4694*t5260 + t5242*t876;
  p_output1[2]=-1.*t4694*t5500 + t5473*t876;
  p_output1[3]=t4690*t4694 + t4745*t876;
  p_output1[4]=t4694*t5242 + t5260*t876;
  p_output1[5]=t4694*t5473 + t5500*t876;
  p_output1[6]=-1.*t2740*t4464 + t2584*t2657*t4473;
  p_output1[7]=t2657*t3337*t4473 - 1.*t2740*t4961;
  p_output1[8]=-1.*t3724*t4473 - 1.*t2740*t5350;
}



void R_ankle_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
