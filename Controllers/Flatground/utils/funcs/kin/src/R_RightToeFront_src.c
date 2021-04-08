/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:26 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeFront_src.h"

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
  double t36;
  double t323;
  double t507;
  double t325;
  double t553;
  double t47;
  double t69;
  double t181;
  double t322;
  double t940;
  double t432;
  double t739;
  double t846;
  double t1007;
  double t1031;
  double t1044;
  double t876;
  double t1045;
  double t1142;
  double t2504;
  double t2363;
  double t2378;
  double t2394;
  double t2312;
  double t2532;
  double t2560;
  double t2581;
  double t2655;
  double t2413;
  double t2584;
  double t2586;
  double t2303;
  double t2671;
  double t2688;
  double t2736;
  double t2894;
  double t2600;
  double t2771;
  double t2860;
  double t2223;
  double t2981;
  double t3001;
  double t3048;
  double t3111;
  double t2874;
  double t3057;
  double t3062;
  double t2151;
  double t3133;
  double t3169;
  double t3170;
  double t3275;
  double t3071;
  double t3232;
  double t3248;
  double t2093;
  double t3305;
  double t3328;
  double t3337;
  double t1268;
  double t1360;
  double t1390;
  double t1497;
  double t1505;
  double t1639;
  double t1463;
  double t1676;
  double t1680;
  double t3545;
  double t3547;
  double t3551;
  double t3595;
  double t3598;
  double t3643;
  double t3561;
  double t3657;
  double t3658;
  double t3716;
  double t3726;
  double t3734;
  double t3659;
  double t3765;
  double t3790;
  double t3793;
  double t3809;
  double t3833;
  double t3792;
  double t3840;
  double t3890;
  double t3902;
  double t3906;
  double t3938;
  double t3892;
  double t3953;
  double t3977;
  double t4019;
  double t4045;
  double t4049;
  double t1885;
  double t1906;
  double t1946;
  double t4203;
  double t4208;
  double t4223;
  double t4240;
  double t4258;
  double t4282;
  double t4239;
  double t4348;
  double t4356;
  double t4364;
  double t4380;
  double t4381;
  double t4362;
  double t4413;
  double t4437;
  double t4445;
  double t4448;
  double t4450;
  double t4444;
  double t4485;
  double t4486;
  double t4524;
  double t4541;
  double t4542;
  double t4504;
  double t4568;
  double t4580;
  double t4628;
  double t4631;
  double t4668;
  double t3273;
  double t3355;
  double t3362;
  double t3397;
  double t3456;
  double t3515;
  double t3988;
  double t4052;
  double t4068;
  double t4082;
  double t4088;
  double t4090;
  double t4627;
  double t4670;
  double t4671;
  double t4691;
  double t4703;
  double t4733;
  t36 = Cos(var1[3]);
  t323 = Cos(var1[5]);
  t507 = Sin(var1[3]);
  t325 = Sin(var1[4]);
  t553 = Sin(var1[5]);
  t47 = Cos(var1[4]);
  t69 = Sin(var1[14]);
  t181 = Cos(var1[14]);
  t322 = Sin(var1[13]);
  t940 = Cos(var1[13]);
  t432 = t36*t323*t325;
  t739 = t507*t553;
  t846 = t432 + t739;
  t1007 = -1.*t323*t507;
  t1031 = t36*t325*t553;
  t1044 = t1007 + t1031;
  t876 = t322*t846;
  t1045 = t940*t1044;
  t1142 = t876 + t1045;
  t2504 = Cos(var1[15]);
  t2363 = t940*t846;
  t2378 = -1.*t322*t1044;
  t2394 = t2363 + t2378;
  t2312 = Sin(var1[15]);
  t2532 = t181*t36*t47;
  t2560 = t69*t1142;
  t2581 = t2532 + t2560;
  t2655 = Cos(var1[16]);
  t2413 = t2312*t2394;
  t2584 = t2504*t2581;
  t2586 = t2413 + t2584;
  t2303 = Sin(var1[16]);
  t2671 = t2504*t2394;
  t2688 = -1.*t2312*t2581;
  t2736 = t2671 + t2688;
  t2894 = Cos(var1[17]);
  t2600 = -1.*t2303*t2586;
  t2771 = t2655*t2736;
  t2860 = t2600 + t2771;
  t2223 = Sin(var1[17]);
  t2981 = t2655*t2586;
  t3001 = t2303*t2736;
  t3048 = t2981 + t3001;
  t3111 = Cos(var1[18]);
  t2874 = t2223*t2860;
  t3057 = t2894*t3048;
  t3062 = t2874 + t3057;
  t2151 = Sin(var1[18]);
  t3133 = t2894*t2860;
  t3169 = -1.*t2223*t3048;
  t3170 = t3133 + t3169;
  t3275 = Cos(var1[19]);
  t3071 = -1.*t2151*t3062;
  t3232 = t3111*t3170;
  t3248 = t3071 + t3232;
  t2093 = Sin(var1[19]);
  t3305 = t3111*t3062;
  t3328 = t2151*t3170;
  t3337 = t3305 + t3328;
  t1268 = t323*t507*t325;
  t1360 = -1.*t36*t553;
  t1390 = t1268 + t1360;
  t1497 = t36*t323;
  t1505 = t507*t325*t553;
  t1639 = t1497 + t1505;
  t1463 = t322*t1390;
  t1676 = t940*t1639;
  t1680 = t1463 + t1676;
  t3545 = t940*t1390;
  t3547 = -1.*t322*t1639;
  t3551 = t3545 + t3547;
  t3595 = t181*t47*t507;
  t3598 = t69*t1680;
  t3643 = t3595 + t3598;
  t3561 = t2312*t3551;
  t3657 = t2504*t3643;
  t3658 = t3561 + t3657;
  t3716 = t2504*t3551;
  t3726 = -1.*t2312*t3643;
  t3734 = t3716 + t3726;
  t3659 = -1.*t2303*t3658;
  t3765 = t2655*t3734;
  t3790 = t3659 + t3765;
  t3793 = t2655*t3658;
  t3809 = t2303*t3734;
  t3833 = t3793 + t3809;
  t3792 = t2223*t3790;
  t3840 = t2894*t3833;
  t3890 = t3792 + t3840;
  t3902 = t2894*t3790;
  t3906 = -1.*t2223*t3833;
  t3938 = t3902 + t3906;
  t3892 = -1.*t2151*t3890;
  t3953 = t3111*t3938;
  t3977 = t3892 + t3953;
  t4019 = t3111*t3890;
  t4045 = t2151*t3938;
  t4049 = t4019 + t4045;
  t1885 = t47*t323*t322;
  t1906 = t940*t47*t553;
  t1946 = t1885 + t1906;
  t4203 = t940*t47*t323;
  t4208 = -1.*t47*t322*t553;
  t4223 = t4203 + t4208;
  t4240 = -1.*t181*t325;
  t4258 = t69*t1946;
  t4282 = t4240 + t4258;
  t4239 = t2312*t4223;
  t4348 = t2504*t4282;
  t4356 = t4239 + t4348;
  t4364 = t2504*t4223;
  t4380 = -1.*t2312*t4282;
  t4381 = t4364 + t4380;
  t4362 = -1.*t2303*t4356;
  t4413 = t2655*t4381;
  t4437 = t4362 + t4413;
  t4445 = t2655*t4356;
  t4448 = t2303*t4381;
  t4450 = t4445 + t4448;
  t4444 = t2223*t4437;
  t4485 = t2894*t4450;
  t4486 = t4444 + t4485;
  t4524 = t2894*t4437;
  t4541 = -1.*t2223*t4450;
  t4542 = t4524 + t4541;
  t4504 = -1.*t2151*t4486;
  t4568 = t3111*t4542;
  t4580 = t4504 + t4568;
  t4628 = t3111*t4486;
  t4631 = t2151*t4542;
  t4668 = t4628 + t4631;
  t3273 = t2093*t3248;
  t3355 = t3275*t3337;
  t3362 = t3273 + t3355;
  t3397 = t3275*t3248;
  t3456 = -1.*t2093*t3337;
  t3515 = t3397 + t3456;
  t3988 = t2093*t3977;
  t4052 = t3275*t4049;
  t4068 = t3988 + t4052;
  t4082 = t3275*t3977;
  t4088 = -1.*t2093*t4049;
  t4090 = t4082 + t4088;
  t4627 = t2093*t4580;
  t4670 = t3275*t4668;
  t4671 = t4627 + t4670;
  t4691 = t3275*t4580;
  t4703 = -1.*t2093*t4668;
  t4733 = t4691 + t4703;
  p_output1[0]=-1.*t1142*t181 + t36*t47*t69;
  p_output1[1]=-1.*t1680*t181 + t47*t507*t69;
  p_output1[2]=-1.*t181*t1946 - 1.*t325*t69;
  p_output1[3]=0.642788*t3362 + 0.766044*t3515;
  p_output1[4]=0.642788*t4068 + 0.766044*t4090;
  p_output1[5]=0.642788*t4671 + 0.766044*t4733;
  p_output1[6]=-0.766044*t3362 + 0.642788*t3515;
  p_output1[7]=-0.766044*t4068 + 0.642788*t4090;
  p_output1[8]=-0.766044*t4671 + 0.642788*t4733;
}



void R_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
