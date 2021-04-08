/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:08 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_right_src.h"

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
  double t267;
  double t1496;
  double t1940;
  double t1756;
  double t1944;
  double t340;
  double t450;
  double t531;
  double t795;
  double t1195;
  double t1842;
  double t1955;
  double t2007;
  double t2394;
  double t3410;
  double t3470;
  double t3520;
  double t305;
  double t4171;
  double t4222;
  double t4237;
  double t4392;
  double t4420;
  double t4563;
  double t4966;
  double t5340;
  double t5426;
  double t6087;
  double t6589;
  double t6814;
  double t6851;
  double t6897;
  double t6904;
  double t6907;
  double t6929;
  double t6974;
  double t6984;
  double t6986;
  double t7033;
  double t7038;
  double t7047;
  double t7083;
  double t7087;
  double t7110;
  double t7152;
  double t7167;
  double t7195;
  double t7223;
  double t7278;
  double t7288;
  double t7323;
  double t7335;
  double t7358;
  double t7362;
  double t7373;
  double t7391;
  double t7402;
  double t7409;
  double t7528;
  double t7544;
  double t7553;
  double t711;
  double t814;
  double t864;
  double t1406;
  double t1481;
  double t2824;
  double t2829;
  double t3292;
  double t3330;
  double t3676;
  double t3715;
  double t4073;
  double t7717;
  double t7731;
  double t7734;
  double t7743;
  double t7745;
  double t7772;
  double t4674;
  double t5184;
  double t5231;
  double t7793;
  double t7797;
  double t7800;
  double t6510;
  double t6540;
  double t6557;
  double t6917;
  double t6964;
  double t6967;
  double t7812;
  double t7828;
  double t7838;
  double t7858;
  double t7860;
  double t7867;
  double t6997;
  double t7014;
  double t7028;
  double t7126;
  double t7161;
  double t7164;
  double t7878;
  double t7902;
  double t7903;
  double t7914;
  double t7956;
  double t7965;
  double t7244;
  double t7261;
  double t7268;
  double t7368;
  double t7375;
  double t7379;
  double t7978;
  double t7979;
  double t7983;
  double t7995;
  double t7997;
  double t8002;
  double t7472;
  double t7486;
  double t7489;
  double t8017;
  double t8023;
  double t8068;
  double t8074;
  double t8084;
  double t8085;
  double t8189;
  double t8219;
  double t8224;
  double t8286;
  double t8288;
  double t8289;
  double t8347;
  double t8352;
  double t8382;
  double t8415;
  double t8416;
  double t8426;
  double t8446;
  double t8459;
  double t8499;
  double t8513;
  double t8519;
  double t8520;
  double t8535;
  double t8541;
  double t8553;
  double t8560;
  double t8561;
  double t8562;
  double t8565;
  double t8568;
  double t8573;
  t267 = Cos(var1[3]);
  t1496 = Cos(var1[5]);
  t1940 = Sin(var1[3]);
  t1756 = Sin(var1[4]);
  t1944 = Sin(var1[5]);
  t340 = Cos(var1[14]);
  t450 = -1.*t340;
  t531 = 1. + t450;
  t795 = Sin(var1[14]);
  t1195 = Sin(var1[13]);
  t1842 = t267*t1496*t1756;
  t1955 = t1940*t1944;
  t2007 = t1842 + t1955;
  t2394 = Cos(var1[13]);
  t3410 = -1.*t1496*t1940;
  t3470 = t267*t1756*t1944;
  t3520 = t3410 + t3470;
  t305 = Cos(var1[4]);
  t4171 = t1195*t2007;
  t4222 = t2394*t3520;
  t4237 = t4171 + t4222;
  t4392 = Cos(var1[15]);
  t4420 = -1.*t4392;
  t4563 = 1. + t4420;
  t4966 = Sin(var1[15]);
  t5340 = t2394*t2007;
  t5426 = -1.*t1195*t3520;
  t6087 = t5340 + t5426;
  t6589 = t340*t267*t305;
  t6814 = t795*t4237;
  t6851 = t6589 + t6814;
  t6897 = Cos(var1[16]);
  t6904 = -1.*t6897;
  t6907 = 1. + t6904;
  t6929 = Sin(var1[16]);
  t6974 = t4966*t6087;
  t6984 = t4392*t6851;
  t6986 = t6974 + t6984;
  t7033 = t4392*t6087;
  t7038 = -1.*t4966*t6851;
  t7047 = t7033 + t7038;
  t7083 = Cos(var1[17]);
  t7087 = -1.*t7083;
  t7110 = 1. + t7087;
  t7152 = Sin(var1[17]);
  t7167 = -1.*t6929*t6986;
  t7195 = t6897*t7047;
  t7223 = t7167 + t7195;
  t7278 = t6897*t6986;
  t7288 = t6929*t7047;
  t7323 = t7278 + t7288;
  t7335 = Cos(var1[18]);
  t7358 = -1.*t7335;
  t7362 = 1. + t7358;
  t7373 = Sin(var1[18]);
  t7391 = t7152*t7223;
  t7402 = t7083*t7323;
  t7409 = t7391 + t7402;
  t7528 = t7083*t7223;
  t7544 = -1.*t7152*t7323;
  t7553 = t7528 + t7544;
  t711 = -0.049*t531;
  t814 = -0.135*t795;
  t864 = 0. + t711 + t814;
  t1406 = 0.135*t1195;
  t1481 = 0. + t1406;
  t2824 = -1.*t2394;
  t2829 = 1. + t2824;
  t3292 = -0.135*t2829;
  t3330 = 0. + t3292;
  t3676 = -0.135*t531;
  t3715 = 0.049*t795;
  t4073 = 0. + t3676 + t3715;
  t7717 = t1496*t1940*t1756;
  t7731 = -1.*t267*t1944;
  t7734 = t7717 + t7731;
  t7743 = t267*t1496;
  t7745 = t1940*t1756*t1944;
  t7772 = t7743 + t7745;
  t4674 = -0.09*t4563;
  t5184 = 0.049*t4966;
  t5231 = 0. + t4674 + t5184;
  t7793 = t1195*t7734;
  t7797 = t2394*t7772;
  t7800 = t7793 + t7797;
  t6510 = -0.049*t4563;
  t6540 = -0.09*t4966;
  t6557 = 0. + t6510 + t6540;
  t6917 = -0.049*t6907;
  t6964 = -0.21*t6929;
  t6967 = 0. + t6917 + t6964;
  t7812 = t2394*t7734;
  t7828 = -1.*t1195*t7772;
  t7838 = t7812 + t7828;
  t7858 = t340*t305*t1940;
  t7860 = t795*t7800;
  t7867 = t7858 + t7860;
  t6997 = -0.21*t6907;
  t7014 = 0.049*t6929;
  t7028 = 0. + t6997 + t7014;
  t7126 = -0.2707*t7110;
  t7161 = 0.0016*t7152;
  t7164 = 0. + t7126 + t7161;
  t7878 = t4966*t7838;
  t7902 = t4392*t7867;
  t7903 = t7878 + t7902;
  t7914 = t4392*t7838;
  t7956 = -1.*t4966*t7867;
  t7965 = t7914 + t7956;
  t7244 = -0.0016*t7110;
  t7261 = -0.2707*t7152;
  t7268 = 0. + t7244 + t7261;
  t7368 = 0.0184*t7362;
  t7375 = -0.7055*t7373;
  t7379 = 0. + t7368 + t7375;
  t7978 = -1.*t6929*t7903;
  t7979 = t6897*t7965;
  t7983 = t7978 + t7979;
  t7995 = t6897*t7903;
  t7997 = t6929*t7965;
  t8002 = t7995 + t7997;
  t7472 = -0.7055*t7362;
  t7486 = -0.0184*t7373;
  t7489 = 0. + t7472 + t7486;
  t8017 = t7152*t7983;
  t8023 = t7083*t8002;
  t8068 = t8017 + t8023;
  t8074 = t7083*t7983;
  t8084 = -1.*t7152*t8002;
  t8085 = t8074 + t8084;
  t8189 = t305*t1496*t1195;
  t8219 = t2394*t305*t1944;
  t8224 = t8189 + t8219;
  t8286 = t2394*t305*t1496;
  t8288 = -1.*t305*t1195*t1944;
  t8289 = t8286 + t8288;
  t8347 = -1.*t340*t1756;
  t8352 = t795*t8224;
  t8382 = t8347 + t8352;
  t8415 = t4966*t8289;
  t8416 = t4392*t8382;
  t8426 = t8415 + t8416;
  t8446 = t4392*t8289;
  t8459 = -1.*t4966*t8382;
  t8499 = t8446 + t8459;
  t8513 = -1.*t6929*t8426;
  t8519 = t6897*t8499;
  t8520 = t8513 + t8519;
  t8535 = t6897*t8426;
  t8541 = t6929*t8499;
  t8553 = t8535 + t8541;
  t8560 = t7152*t8520;
  t8561 = t7083*t8553;
  t8562 = t8560 + t8561;
  t8565 = t7083*t8520;
  t8568 = -1.*t7152*t8553;
  t8573 = t8565 + t8568;
  p_output1[0]=0. + t1481*t2007 + t3330*t3520 + t4073*t4237 + t5231*t6087 + t6557*t6851 + t6967*t6986 + t7028*t7047 + t7164*t7223 + t7268*t7323 + t7379*t7409 + t7489*t7553 - 0.7055*(-1.*t7373*t7409 + t7335*t7553) + 0.0184*(t7335*t7409 + t7373*t7553) - 0.1305*(t340*t4237 - 1.*t267*t305*t795) + t267*t305*t864 + var1[0];
  p_output1[1]=0. + t1481*t7734 + t3330*t7772 + t4073*t7800 + t5231*t7838 + t6557*t7867 + t6967*t7903 - 0.1305*(t340*t7800 - 1.*t1940*t305*t795) + t7028*t7965 + t7164*t7983 + t7268*t8002 + t7379*t8068 + t7489*t8085 - 0.7055*(-1.*t7373*t8068 + t7335*t8085) + 0.0184*(t7335*t8068 + t7373*t8085) + t1940*t305*t864 + var1[1];
  p_output1[2]=0. + t1481*t1496*t305 + t1944*t305*t3330 + t4073*t8224 - 0.1305*(t1756*t795 + t340*t8224) + t5231*t8289 + t6557*t8382 + t6967*t8426 + t7028*t8499 + t7164*t8520 + t7268*t8553 + t7379*t8562 + t7489*t8573 - 0.7055*(-1.*t7373*t8562 + t7335*t8573) + 0.0184*(t7335*t8562 + t7373*t8573) - 1.*t1756*t864 + var1[2];
}



void p_ankle_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
