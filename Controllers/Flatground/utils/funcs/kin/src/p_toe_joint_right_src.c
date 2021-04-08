/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:11 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_right_src.h"

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
  double t3;
  double t1157;
  double t1752;
  double t1475;
  double t1762;
  double t297;
  double t366;
  double t374;
  double t567;
  double t821;
  double t1653;
  double t1867;
  double t1971;
  double t2522;
  double t3317;
  double t3696;
  double t3703;
  double t144;
  double t4221;
  double t4228;
  double t4439;
  double t4764;
  double t5279;
  double t5389;
  double t5740;
  double t6354;
  double t6399;
  double t6567;
  double t6939;
  double t6959;
  double t6961;
  double t7045;
  double t7171;
  double t7202;
  double t7272;
  double t7445;
  double t7529;
  double t7595;
  double t7650;
  double t7670;
  double t7705;
  double t7734;
  double t7749;
  double t7761;
  double t7764;
  double t7785;
  double t7787;
  double t7797;
  double t7827;
  double t7845;
  double t7848;
  double t7862;
  double t7869;
  double t7885;
  double t7926;
  double t7948;
  double t7951;
  double t7954;
  double t7998;
  double t8000;
  double t8017;
  double t8030;
  double t8046;
  double t8053;
  double t8066;
  double t8079;
  double t8081;
  double t8087;
  double t8119;
  double t8128;
  double t8135;
  double t506;
  double t673;
  double t764;
  double t884;
  double t906;
  double t2625;
  double t2770;
  double t3020;
  double t3293;
  double t3780;
  double t3970;
  double t4167;
  double t8246;
  double t8251;
  double t8274;
  double t8294;
  double t8311;
  double t8313;
  double t5416;
  double t6007;
  double t6310;
  double t8331;
  double t8334;
  double t8337;
  double t6811;
  double t6846;
  double t6914;
  double t7266;
  double t7295;
  double t7415;
  double t8348;
  double t8352;
  double t8358;
  double t8392;
  double t8397;
  double t8408;
  double t7624;
  double t7644;
  double t7649;
  double t7763;
  double t7767;
  double t7782;
  double t8419;
  double t8423;
  double t8431;
  double t8444;
  double t8450;
  double t8454;
  double t7805;
  double t7812;
  double t7817;
  double t7889;
  double t7935;
  double t7937;
  double t8465;
  double t8470;
  double t8477;
  double t8483;
  double t8499;
  double t8519;
  double t7960;
  double t7982;
  double t7989;
  double t8062;
  double t8071;
  double t8076;
  double t8532;
  double t8534;
  double t8560;
  double t8582;
  double t8583;
  double t8585;
  double t8116;
  double t8117;
  double t8118;
  double t8607;
  double t8615;
  double t8631;
  double t8656;
  double t8669;
  double t8680;
  double t8752;
  double t8755;
  double t8760;
  double t8768;
  double t8769;
  double t8773;
  double t8803;
  double t8810;
  double t8818;
  double t8822;
  double t8832;
  double t8840;
  double t8869;
  double t8873;
  double t8876;
  double t8887;
  double t8890;
  double t8896;
  double t8911;
  double t8917;
  double t8918;
  double t8957;
  double t8977;
  double t8982;
  double t9010;
  double t9018;
  double t9032;
  double t9057;
  double t9077;
  double t9080;
  double t9111;
  double t9122;
  double t9135;
  t3 = Cos(var1[3]);
  t1157 = Cos(var1[5]);
  t1752 = Sin(var1[3]);
  t1475 = Sin(var1[4]);
  t1762 = Sin(var1[5]);
  t297 = Cos(var1[14]);
  t366 = -1.*t297;
  t374 = 1. + t366;
  t567 = Sin(var1[14]);
  t821 = Sin(var1[13]);
  t1653 = t3*t1157*t1475;
  t1867 = t1752*t1762;
  t1971 = t1653 + t1867;
  t2522 = Cos(var1[13]);
  t3317 = -1.*t1157*t1752;
  t3696 = t3*t1475*t1762;
  t3703 = t3317 + t3696;
  t144 = Cos(var1[4]);
  t4221 = t821*t1971;
  t4228 = t2522*t3703;
  t4439 = t4221 + t4228;
  t4764 = Cos(var1[15]);
  t5279 = -1.*t4764;
  t5389 = 1. + t5279;
  t5740 = Sin(var1[15]);
  t6354 = t2522*t1971;
  t6399 = -1.*t821*t3703;
  t6567 = t6354 + t6399;
  t6939 = t297*t3*t144;
  t6959 = t567*t4439;
  t6961 = t6939 + t6959;
  t7045 = Cos(var1[16]);
  t7171 = -1.*t7045;
  t7202 = 1. + t7171;
  t7272 = Sin(var1[16]);
  t7445 = t5740*t6567;
  t7529 = t4764*t6961;
  t7595 = t7445 + t7529;
  t7650 = t4764*t6567;
  t7670 = -1.*t5740*t6961;
  t7705 = t7650 + t7670;
  t7734 = Cos(var1[17]);
  t7749 = -1.*t7734;
  t7761 = 1. + t7749;
  t7764 = Sin(var1[17]);
  t7785 = -1.*t7272*t7595;
  t7787 = t7045*t7705;
  t7797 = t7785 + t7787;
  t7827 = t7045*t7595;
  t7845 = t7272*t7705;
  t7848 = t7827 + t7845;
  t7862 = Cos(var1[18]);
  t7869 = -1.*t7862;
  t7885 = 1. + t7869;
  t7926 = Sin(var1[18]);
  t7948 = t7764*t7797;
  t7951 = t7734*t7848;
  t7954 = t7948 + t7951;
  t7998 = t7734*t7797;
  t8000 = -1.*t7764*t7848;
  t8017 = t7998 + t8000;
  t8030 = Cos(var1[19]);
  t8046 = -1.*t8030;
  t8053 = 1. + t8046;
  t8066 = Sin(var1[19]);
  t8079 = -1.*t7926*t7954;
  t8081 = t7862*t8017;
  t8087 = t8079 + t8081;
  t8119 = t7862*t7954;
  t8128 = t7926*t8017;
  t8135 = t8119 + t8128;
  t506 = -0.049*t374;
  t673 = -0.135*t567;
  t764 = 0. + t506 + t673;
  t884 = 0.135*t821;
  t906 = 0. + t884;
  t2625 = -1.*t2522;
  t2770 = 1. + t2625;
  t3020 = -0.135*t2770;
  t3293 = 0. + t3020;
  t3780 = -0.135*t374;
  t3970 = 0.049*t567;
  t4167 = 0. + t3780 + t3970;
  t8246 = t1157*t1752*t1475;
  t8251 = -1.*t3*t1762;
  t8274 = t8246 + t8251;
  t8294 = t3*t1157;
  t8311 = t1752*t1475*t1762;
  t8313 = t8294 + t8311;
  t5416 = -0.09*t5389;
  t6007 = 0.049*t5740;
  t6310 = 0. + t5416 + t6007;
  t8331 = t821*t8274;
  t8334 = t2522*t8313;
  t8337 = t8331 + t8334;
  t6811 = -0.049*t5389;
  t6846 = -0.09*t5740;
  t6914 = 0. + t6811 + t6846;
  t7266 = -0.049*t7202;
  t7295 = -0.21*t7272;
  t7415 = 0. + t7266 + t7295;
  t8348 = t2522*t8274;
  t8352 = -1.*t821*t8313;
  t8358 = t8348 + t8352;
  t8392 = t297*t144*t1752;
  t8397 = t567*t8337;
  t8408 = t8392 + t8397;
  t7624 = -0.21*t7202;
  t7644 = 0.049*t7272;
  t7649 = 0. + t7624 + t7644;
  t7763 = -0.2707*t7761;
  t7767 = 0.0016*t7764;
  t7782 = 0. + t7763 + t7767;
  t8419 = t5740*t8358;
  t8423 = t4764*t8408;
  t8431 = t8419 + t8423;
  t8444 = t4764*t8358;
  t8450 = -1.*t5740*t8408;
  t8454 = t8444 + t8450;
  t7805 = -0.0016*t7761;
  t7812 = -0.2707*t7764;
  t7817 = 0. + t7805 + t7812;
  t7889 = 0.0184*t7885;
  t7935 = -0.7055*t7926;
  t7937 = 0. + t7889 + t7935;
  t8465 = -1.*t7272*t8431;
  t8470 = t7045*t8454;
  t8477 = t8465 + t8470;
  t8483 = t7045*t8431;
  t8499 = t7272*t8454;
  t8519 = t8483 + t8499;
  t7960 = -0.7055*t7885;
  t7982 = -0.0184*t7926;
  t7989 = 0. + t7960 + t7982;
  t8062 = -1.1135*t8053;
  t8071 = 0.0216*t8066;
  t8076 = 0. + t8062 + t8071;
  t8532 = t7764*t8477;
  t8534 = t7734*t8519;
  t8560 = t8532 + t8534;
  t8582 = t7734*t8477;
  t8583 = -1.*t7764*t8519;
  t8585 = t8582 + t8583;
  t8116 = -0.0216*t8053;
  t8117 = -1.1135*t8066;
  t8118 = 0. + t8116 + t8117;
  t8607 = -1.*t7926*t8560;
  t8615 = t7862*t8585;
  t8631 = t8607 + t8615;
  t8656 = t7862*t8560;
  t8669 = t7926*t8585;
  t8680 = t8656 + t8669;
  t8752 = t144*t1157*t821;
  t8755 = t2522*t144*t1762;
  t8760 = t8752 + t8755;
  t8768 = t2522*t144*t1157;
  t8769 = -1.*t144*t821*t1762;
  t8773 = t8768 + t8769;
  t8803 = -1.*t297*t1475;
  t8810 = t567*t8760;
  t8818 = t8803 + t8810;
  t8822 = t5740*t8773;
  t8832 = t4764*t8818;
  t8840 = t8822 + t8832;
  t8869 = t4764*t8773;
  t8873 = -1.*t5740*t8818;
  t8876 = t8869 + t8873;
  t8887 = -1.*t7272*t8840;
  t8890 = t7045*t8876;
  t8896 = t8887 + t8890;
  t8911 = t7045*t8840;
  t8917 = t7272*t8876;
  t8918 = t8911 + t8917;
  t8957 = t7764*t8896;
  t8977 = t7734*t8918;
  t8982 = t8957 + t8977;
  t9010 = t7734*t8896;
  t9018 = -1.*t7764*t8918;
  t9032 = t9010 + t9018;
  t9057 = -1.*t7926*t8982;
  t9077 = t7862*t9032;
  t9080 = t9057 + t9077;
  t9111 = t7862*t8982;
  t9122 = t7926*t9032;
  t9135 = t9111 + t9122;
  p_output1[0]=0. + t3293*t3703 + t4167*t4439 - 0.1305*(t297*t4439 - 1.*t144*t3*t567) + t6310*t6567 + t6914*t6961 + t7415*t7595 + t144*t3*t764 + t7649*t7705 + t7782*t7797 + t7817*t7848 + t7937*t7954 + t7989*t8017 + t8076*t8087 + t8118*t8135 - 0.0216*(t8066*t8087 + t8030*t8135) - 1.1135*(t8030*t8087 - 1.*t8066*t8135) + t1971*t906 + var1[0];
  p_output1[1]=0. + t144*t1752*t764 + t3293*t8313 + t4167*t8337 - 0.1305*(-1.*t144*t1752*t567 + t297*t8337) + t6310*t8358 + t6914*t8408 + t7415*t8431 + t7649*t8454 + t7782*t8477 + t7817*t8519 + t7937*t8560 + t7989*t8585 + t8076*t8631 + t8118*t8680 - 0.0216*(t8066*t8631 + t8030*t8680) - 1.1135*(t8030*t8631 - 1.*t8066*t8680) + t8274*t906 + var1[1];
  p_output1[2]=0. + t144*t1762*t3293 - 1.*t1475*t764 + t4167*t8760 - 0.1305*(t1475*t567 + t297*t8760) + t6310*t8773 + t6914*t8818 + t7415*t8840 + t7649*t8876 + t7782*t8896 + t7817*t8918 + t7937*t8982 + t7989*t9032 + t1157*t144*t906 + t8076*t9080 + t8118*t9135 - 0.0216*(t8066*t9080 + t8030*t9135) - 1.1135*(t8030*t9080 - 1.*t8066*t9135) + var1[2];
}



void p_toe_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
