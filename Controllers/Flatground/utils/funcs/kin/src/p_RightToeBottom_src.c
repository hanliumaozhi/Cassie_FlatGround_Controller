/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:21 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBottom_src.h"

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
  double t257;
  double t1681;
  double t1910;
  double t1698;
  double t1976;
  double t542;
  double t551;
  double t718;
  double t1032;
  double t1446;
  double t1808;
  double t1995;
  double t2119;
  double t2188;
  double t2442;
  double t2572;
  double t2651;
  double t270;
  double t2864;
  double t2948;
  double t3024;
  double t3096;
  double t3168;
  double t3369;
  double t3402;
  double t3532;
  double t3550;
  double t3576;
  double t3951;
  double t4073;
  double t4138;
  double t4152;
  double t4166;
  double t4185;
  double t4248;
  double t4322;
  double t4331;
  double t4339;
  double t4562;
  double t4592;
  double t4681;
  double t4754;
  double t4759;
  double t4775;
  double t4785;
  double t4811;
  double t4825;
  double t4841;
  double t4870;
  double t4872;
  double t4873;
  double t4894;
  double t4899;
  double t4909;
  double t4917;
  double t4973;
  double t4977;
  double t4979;
  double t4993;
  double t5000;
  double t5002;
  double t5014;
  double t5016;
  double t5027;
  double t5044;
  double t5050;
  double t5053;
  double t5058;
  double t5093;
  double t5101;
  double t5103;
  double t863;
  double t1155;
  double t1358;
  double t1448;
  double t1453;
  double t2233;
  double t2249;
  double t2325;
  double t2345;
  double t2755;
  double t2790;
  double t2841;
  double t5172;
  double t5175;
  double t5179;
  double t5202;
  double t5211;
  double t5218;
  double t3379;
  double t3480;
  double t3525;
  double t5233;
  double t5249;
  double t5257;
  double t3828;
  double t3866;
  double t3940;
  double t4224;
  double t4252;
  double t4265;
  double t5282;
  double t5283;
  double t5293;
  double t5342;
  double t5346;
  double t5352;
  double t4443;
  double t4451;
  double t4503;
  double t4777;
  double t4795;
  double t4799;
  double t5376;
  double t5387;
  double t5407;
  double t5412;
  double t5415;
  double t5431;
  double t4862;
  double t4864;
  double t4867;
  double t4913;
  double t4938;
  double t4964;
  double t5438;
  double t5439;
  double t5446;
  double t5455;
  double t5492;
  double t5494;
  double t4983;
  double t4986;
  double t4992;
  double t5038;
  double t5046;
  double t5048;
  double t5523;
  double t5559;
  double t5576;
  double t5590;
  double t5592;
  double t5606;
  double t5072;
  double t5076;
  double t5089;
  double t5628;
  double t5648;
  double t5657;
  double t5715;
  double t5737;
  double t5738;
  double t5942;
  double t5945;
  double t5963;
  double t5994;
  double t6002;
  double t6014;
  double t6092;
  double t6093;
  double t6095;
  double t6099;
  double t6103;
  double t6112;
  double t6126;
  double t6131;
  double t6132;
  double t6144;
  double t6145;
  double t6146;
  double t6162;
  double t6163;
  double t6166;
  double t6206;
  double t6215;
  double t6228;
  double t6269;
  double t6272;
  double t6281;
  double t6293;
  double t6297;
  double t6298;
  double t6302;
  double t6307;
  double t6309;
  t257 = Cos(var1[3]);
  t1681 = Cos(var1[5]);
  t1910 = Sin(var1[3]);
  t1698 = Sin(var1[4]);
  t1976 = Sin(var1[5]);
  t542 = Cos(var1[14]);
  t551 = -1.*t542;
  t718 = 1. + t551;
  t1032 = Sin(var1[14]);
  t1446 = Sin(var1[13]);
  t1808 = t257*t1681*t1698;
  t1995 = t1910*t1976;
  t2119 = t1808 + t1995;
  t2188 = Cos(var1[13]);
  t2442 = -1.*t1681*t1910;
  t2572 = t257*t1698*t1976;
  t2651 = t2442 + t2572;
  t270 = Cos(var1[4]);
  t2864 = t1446*t2119;
  t2948 = t2188*t2651;
  t3024 = t2864 + t2948;
  t3096 = Cos(var1[15]);
  t3168 = -1.*t3096;
  t3369 = 1. + t3168;
  t3402 = Sin(var1[15]);
  t3532 = t2188*t2119;
  t3550 = -1.*t1446*t2651;
  t3576 = t3532 + t3550;
  t3951 = t542*t257*t270;
  t4073 = t1032*t3024;
  t4138 = t3951 + t4073;
  t4152 = Cos(var1[16]);
  t4166 = -1.*t4152;
  t4185 = 1. + t4166;
  t4248 = Sin(var1[16]);
  t4322 = t3402*t3576;
  t4331 = t3096*t4138;
  t4339 = t4322 + t4331;
  t4562 = t3096*t3576;
  t4592 = -1.*t3402*t4138;
  t4681 = t4562 + t4592;
  t4754 = Cos(var1[17]);
  t4759 = -1.*t4754;
  t4775 = 1. + t4759;
  t4785 = Sin(var1[17]);
  t4811 = -1.*t4248*t4339;
  t4825 = t4152*t4681;
  t4841 = t4811 + t4825;
  t4870 = t4152*t4339;
  t4872 = t4248*t4681;
  t4873 = t4870 + t4872;
  t4894 = Cos(var1[18]);
  t4899 = -1.*t4894;
  t4909 = 1. + t4899;
  t4917 = Sin(var1[18]);
  t4973 = t4785*t4841;
  t4977 = t4754*t4873;
  t4979 = t4973 + t4977;
  t4993 = t4754*t4841;
  t5000 = -1.*t4785*t4873;
  t5002 = t4993 + t5000;
  t5014 = Cos(var1[19]);
  t5016 = -1.*t5014;
  t5027 = 1. + t5016;
  t5044 = Sin(var1[19]);
  t5050 = -1.*t4917*t4979;
  t5053 = t4894*t5002;
  t5058 = t5050 + t5053;
  t5093 = t4894*t4979;
  t5101 = t4917*t5002;
  t5103 = t5093 + t5101;
  t863 = -0.049*t718;
  t1155 = -0.135*t1032;
  t1358 = 0. + t863 + t1155;
  t1448 = 0.135*t1446;
  t1453 = 0. + t1448;
  t2233 = -1.*t2188;
  t2249 = 1. + t2233;
  t2325 = -0.135*t2249;
  t2345 = 0. + t2325;
  t2755 = -0.135*t718;
  t2790 = 0.049*t1032;
  t2841 = 0. + t2755 + t2790;
  t5172 = t1681*t1910*t1698;
  t5175 = -1.*t257*t1976;
  t5179 = t5172 + t5175;
  t5202 = t257*t1681;
  t5211 = t1910*t1698*t1976;
  t5218 = t5202 + t5211;
  t3379 = -0.09*t3369;
  t3480 = 0.049*t3402;
  t3525 = 0. + t3379 + t3480;
  t5233 = t1446*t5179;
  t5249 = t2188*t5218;
  t5257 = t5233 + t5249;
  t3828 = -0.049*t3369;
  t3866 = -0.09*t3402;
  t3940 = 0. + t3828 + t3866;
  t4224 = -0.049*t4185;
  t4252 = -0.21*t4248;
  t4265 = 0. + t4224 + t4252;
  t5282 = t2188*t5179;
  t5283 = -1.*t1446*t5218;
  t5293 = t5282 + t5283;
  t5342 = t542*t270*t1910;
  t5346 = t1032*t5257;
  t5352 = t5342 + t5346;
  t4443 = -0.21*t4185;
  t4451 = 0.049*t4248;
  t4503 = 0. + t4443 + t4451;
  t4777 = -0.2707*t4775;
  t4795 = 0.0016*t4785;
  t4799 = 0. + t4777 + t4795;
  t5376 = t3402*t5293;
  t5387 = t3096*t5352;
  t5407 = t5376 + t5387;
  t5412 = t3096*t5293;
  t5415 = -1.*t3402*t5352;
  t5431 = t5412 + t5415;
  t4862 = -0.0016*t4775;
  t4864 = -0.2707*t4785;
  t4867 = 0. + t4862 + t4864;
  t4913 = 0.0184*t4909;
  t4938 = -0.7055*t4917;
  t4964 = 0. + t4913 + t4938;
  t5438 = -1.*t4248*t5407;
  t5439 = t4152*t5431;
  t5446 = t5438 + t5439;
  t5455 = t4152*t5407;
  t5492 = t4248*t5431;
  t5494 = t5455 + t5492;
  t4983 = -0.7055*t4909;
  t4986 = -0.0184*t4917;
  t4992 = 0. + t4983 + t4986;
  t5038 = -1.1135*t5027;
  t5046 = 0.0216*t5044;
  t5048 = 0. + t5038 + t5046;
  t5523 = t4785*t5446;
  t5559 = t4754*t5494;
  t5576 = t5523 + t5559;
  t5590 = t4754*t5446;
  t5592 = -1.*t4785*t5494;
  t5606 = t5590 + t5592;
  t5072 = -0.0216*t5027;
  t5076 = -1.1135*t5044;
  t5089 = 0. + t5072 + t5076;
  t5628 = -1.*t4917*t5576;
  t5648 = t4894*t5606;
  t5657 = t5628 + t5648;
  t5715 = t4894*t5576;
  t5737 = t4917*t5606;
  t5738 = t5715 + t5737;
  t5942 = t270*t1681*t1446;
  t5945 = t2188*t270*t1976;
  t5963 = t5942 + t5945;
  t5994 = t2188*t270*t1681;
  t6002 = -1.*t270*t1446*t1976;
  t6014 = t5994 + t6002;
  t6092 = -1.*t542*t1698;
  t6093 = t1032*t5963;
  t6095 = t6092 + t6093;
  t6099 = t3402*t6014;
  t6103 = t3096*t6095;
  t6112 = t6099 + t6103;
  t6126 = t3096*t6014;
  t6131 = -1.*t3402*t6095;
  t6132 = t6126 + t6131;
  t6144 = -1.*t4248*t6112;
  t6145 = t4152*t6132;
  t6146 = t6144 + t6145;
  t6162 = t4152*t6112;
  t6163 = t4248*t6132;
  t6166 = t6162 + t6163;
  t6206 = t4785*t6146;
  t6215 = t4754*t6166;
  t6228 = t6206 + t6215;
  t6269 = t4754*t6146;
  t6272 = -1.*t4785*t6166;
  t6281 = t6269 + t6272;
  t6293 = -1.*t4917*t6228;
  t6297 = t4894*t6281;
  t6298 = t6293 + t6297;
  t6302 = t4894*t6228;
  t6307 = t4917*t6281;
  t6309 = t6302 + t6307;
  p_output1[0]=0. + t1453*t2119 + t2345*t2651 + t1358*t257*t270 + t2841*t3024 + t3525*t3576 + t3940*t4138 + t4265*t4339 + t4503*t4681 + t4799*t4841 + t4867*t4873 + t4964*t4979 + t4992*t5002 + t5048*t5058 + t5089*t5103 + 0.0306*(t5044*t5058 + t5014*t5103) - 1.1312*(t5014*t5058 - 1.*t5044*t5103) - 0.1305*(-1.*t1032*t257*t270 + t3024*t542) + var1[0];
  p_output1[1]=0. + t1358*t1910*t270 + t1453*t5179 + t2345*t5218 + t2841*t5257 + t3525*t5293 + t3940*t5352 + t4265*t5407 - 0.1305*(-1.*t1032*t1910*t270 + t5257*t542) + t4503*t5431 + t4799*t5446 + t4867*t5494 + t4964*t5576 + t4992*t5606 + t5048*t5657 + t5089*t5738 + 0.0306*(t5044*t5657 + t5014*t5738) - 1.1312*(t5014*t5657 - 1.*t5044*t5738) + var1[1];
  p_output1[2]=0. - 1.*t1358*t1698 + t1453*t1681*t270 + t1976*t2345*t270 + t2841*t5963 - 0.1305*(t1032*t1698 + t542*t5963) + t3525*t6014 + t3940*t6095 + t4265*t6112 + t4503*t6132 + t4799*t6146 + t4867*t6166 + t4964*t6228 + t4992*t6281 + t5048*t6298 + t5089*t6309 + 0.0306*(t5044*t6298 + t5014*t6309) - 1.1312*(t5014*t6298 - 1.*t5044*t6309) + var1[2];
}



void p_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
