/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:48 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_to_shin_left_src.h"

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
  double t847;
  double t1035;
  double t1101;
  double t1078;
  double t1143;
  double t969;
  double t1351;
  double t1363;
  double t1433;
  double t1084;
  double t1211;
  double t1342;
  double t1478;
  double t809;
  double t1817;
  double t1863;
  double t1935;
  double t860;
  double t899;
  double t907;
  double t1347;
  double t1526;
  double t1589;
  double t1601;
  double t1622;
  double t1663;
  double t1969;
  double t2122;
  double t1723;
  double t2028;
  double t2072;
  double t604;
  double t2147;
  double t2173;
  double t2175;
  double t406;
  double t2561;
  double t2592;
  double t2595;
  double t2496;
  double t2512;
  double t2522;
  double t2756;
  double t2770;
  double t2803;
  double t2466;
  double t2560;
  double t2607;
  double t2666;
  double t2675;
  double t2743;
  double t2308;
  double t2754;
  double t2819;
  double t2906;
  double t2963;
  double t2966;
  double t3009;
  double t3334;
  double t3346;
  double t3392;
  double t3102;
  double t3143;
  double t3198;
  double t3207;
  double t3210;
  double t3211;
  double t3284;
  double t3396;
  double t3427;
  double t3462;
  double t3467;
  double t3486;
  double t2090;
  double t2200;
  double t2304;
  double t2363;
  double t2368;
  double t2410;
  double t2909;
  double t3011;
  double t3019;
  double t3048;
  double t3051;
  double t3077;
  double t3432;
  double t3490;
  double t3518;
  double t3533;
  double t3546;
  double t3555;
  double t4131;
  double t4139;
  double t4400;
  double t4405;
  double t4524;
  double t4568;
  double t4696;
  double t4709;
  double t3579;
  double t3595;
  double t3638;
  double t3929;
  double t3932;
  double t4006;
  double t4031;
  double t4055;
  double t4064;
  double t4148;
  double t4155;
  double t4160;
  double t4320;
  double t4326;
  double t4333;
  double t4406;
  double t4417;
  double t4419;
  double t4426;
  double t4487;
  double t4499;
  double t4614;
  double t4619;
  double t4629;
  double t4635;
  double t4643;
  double t4664;
  double t4716;
  double t4766;
  double t4775;
  double t4782;
  double t4788;
  double t4796;
  double t3650;
  double t3682;
  double t3728;
  double t3754;
  double t3755;
  double t3765;
  t847 = Cos(var1[3]);
  t1035 = Cos(var1[5]);
  t1101 = Sin(var1[4]);
  t1078 = Sin(var1[3]);
  t1143 = Sin(var1[5]);
  t969 = Cos(var1[6]);
  t1351 = t847*t1035*t1101;
  t1363 = t1078*t1143;
  t1433 = t1351 + t1363;
  t1084 = -1.*t1035*t1078;
  t1211 = t847*t1101*t1143;
  t1342 = t1084 + t1211;
  t1478 = Sin(var1[6]);
  t809 = Cos(var1[8]);
  t1817 = t969*t1433;
  t1863 = -1.*t1342*t1478;
  t1935 = t1817 + t1863;
  t860 = Cos(var1[4]);
  t899 = Cos(var1[7]);
  t907 = t847*t860*t899;
  t1347 = t969*t1342;
  t1526 = t1433*t1478;
  t1589 = t1347 + t1526;
  t1601 = Sin(var1[7]);
  t1622 = t1589*t1601;
  t1663 = t907 + t1622;
  t1969 = Sin(var1[8]);
  t2122 = Cos(var1[9]);
  t1723 = t809*t1663;
  t2028 = t1935*t1969;
  t2072 = t1723 + t2028;
  t604 = Sin(var1[9]);
  t2147 = t809*t1935;
  t2173 = -1.*t1663*t1969;
  t2175 = t2147 + t2173;
  t406 = Cos(var1[10]);
  t2561 = t1035*t1078*t1101;
  t2592 = -1.*t847*t1143;
  t2595 = t2561 + t2592;
  t2496 = t847*t1035;
  t2512 = t1078*t1101*t1143;
  t2522 = t2496 + t2512;
  t2756 = t969*t2595;
  t2770 = -1.*t2522*t1478;
  t2803 = t2756 + t2770;
  t2466 = t860*t899*t1078;
  t2560 = t969*t2522;
  t2607 = t2595*t1478;
  t2666 = t2560 + t2607;
  t2675 = t2666*t1601;
  t2743 = t2466 + t2675;
  t2308 = Sin(var1[10]);
  t2754 = t809*t2743;
  t2819 = t2803*t1969;
  t2906 = t2754 + t2819;
  t2963 = t809*t2803;
  t2966 = -1.*t2743*t1969;
  t3009 = t2963 + t2966;
  t3334 = t860*t1035*t969;
  t3346 = -1.*t860*t1143*t1478;
  t3392 = t3334 + t3346;
  t3102 = -1.*t899*t1101;
  t3143 = t860*t969*t1143;
  t3198 = t860*t1035*t1478;
  t3207 = t3143 + t3198;
  t3210 = t3207*t1601;
  t3211 = t3102 + t3210;
  t3284 = t809*t3211;
  t3396 = t3392*t1969;
  t3427 = t3284 + t3396;
  t3462 = t809*t3392;
  t3467 = -1.*t3211*t1969;
  t3486 = t3462 + t3467;
  t2090 = -1.*t604*t2072;
  t2200 = t2122*t2175;
  t2304 = t2090 + t2200;
  t2363 = t2122*t2072;
  t2368 = t604*t2175;
  t2410 = t2363 + t2368;
  t2909 = -1.*t604*t2906;
  t3011 = t2122*t3009;
  t3019 = t2909 + t3011;
  t3048 = t2122*t2906;
  t3051 = t604*t3009;
  t3077 = t3048 + t3051;
  t3432 = -1.*t604*t3427;
  t3490 = t2122*t3486;
  t3518 = t3432 + t3490;
  t3533 = t2122*t3427;
  t3546 = t604*t3486;
  t3555 = t3533 + t3546;
  t4131 = -1.*t899;
  t4139 = 1. + t4131;
  t4400 = -1.*t809;
  t4405 = 1. + t4400;
  t4524 = -1.*t2122;
  t4568 = 1. + t4524;
  t4696 = -1.*t406;
  t4709 = 1. + t4696;
  t3579 = t2308*t2304;
  t3595 = t406*t2410;
  t3638 = t3579 + t3595;
  t3929 = -1.*t969;
  t3932 = 1. + t3929;
  t4006 = 0.135*t3932;
  t4031 = 0. + t4006;
  t4055 = -0.135*t1478;
  t4064 = 0. + t4055;
  t4148 = 0.135*t4139;
  t4155 = 0.049*t1601;
  t4160 = 0. + t4148 + t4155;
  t4320 = -0.049*t4139;
  t4326 = 0.135*t1601;
  t4333 = 0. + t4320 + t4326;
  t4406 = -0.049*t4405;
  t4417 = -0.09*t1969;
  t4419 = 0. + t4406 + t4417;
  t4426 = -0.09*t4405;
  t4487 = 0.049*t1969;
  t4499 = 0. + t4426 + t4487;
  t4614 = -0.049*t4568;
  t4619 = -0.21*t604;
  t4629 = 0. + t4614 + t4619;
  t4635 = -0.21*t4568;
  t4643 = 0.049*t604;
  t4664 = 0. + t4635 + t4643;
  t4716 = -0.2707*t4709;
  t4766 = 0.0016*t2308;
  t4775 = 0. + t4716 + t4766;
  t4782 = -0.0016*t4709;
  t4788 = -0.2707*t2308;
  t4796 = 0. + t4782 + t4788;
  t3650 = t2308*t3019;
  t3682 = t406*t3077;
  t3728 = t3650 + t3682;
  t3754 = t2308*t3518;
  t3755 = t406*t3555;
  t3765 = t3754 + t3755;
  p_output1[0]=t2308*t2410 - 1.*t2304*t406;
  p_output1[1]=t2308*t3077 - 1.*t3019*t406;
  p_output1[2]=t2308*t3555 - 1.*t3518*t406;
  p_output1[3]=0.;
  p_output1[4]=t3638;
  p_output1[5]=t3728;
  p_output1[6]=t3765;
  p_output1[7]=0.;
  p_output1[8]=t1601*t847*t860 - 1.*t1589*t899;
  p_output1[9]=t1078*t1601*t860 - 1.*t2666*t899;
  p_output1[10]=-1.*t1101*t1601 - 1.*t3207*t899;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0016*t3638 + t1342*t4031 - 0.2707*(-1.*t2308*t2410 + t2304*t406) + t1433*t4064 + t1589*t4160 + t1663*t4419 + t1935*t4499 + t2072*t4629 + t2175*t4664 + t2304*t4775 + t2410*t4796 + t4333*t847*t860 + 0.1305*(-1.*t1601*t847*t860 + t1589*t899) + var1[0];
  p_output1[13]=0. - 0.0016*t3728 + t2522*t4031 - 0.2707*(-1.*t2308*t3077 + t3019*t406) + t2595*t4064 + t2666*t4160 + t2743*t4419 + t2803*t4499 + t2906*t4629 + t3009*t4664 + t3019*t4775 + t3077*t4796 + t1078*t4333*t860 + 0.1305*(-1.*t1078*t1601*t860 + t2666*t899) + var1[1];
  p_output1[14]=0. - 0.0016*t3765 - 0.2707*(-1.*t2308*t3555 + t3518*t406) + t3207*t4160 - 1.*t1101*t4333 + t3211*t4419 + t3392*t4499 + t3427*t4629 + t3486*t4664 + t3518*t4775 + t3555*t4796 + t1143*t4031*t860 + t1035*t4064*t860 + 0.1305*(t1101*t1601 + t3207*t899) + var1[2];
  p_output1[15]=1.;
}



void H_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
