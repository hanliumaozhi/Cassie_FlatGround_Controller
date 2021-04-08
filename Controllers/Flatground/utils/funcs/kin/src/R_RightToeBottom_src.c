/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:23 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_src.h"

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
  double t360;
  double t933;
  double t1067;
  double t952;
  double t1148;
  double t737;
  double t751;
  double t811;
  double t837;
  double t1225;
  double t1056;
  double t1212;
  double t1218;
  double t1256;
  double t1308;
  double t1344;
  double t1222;
  double t1356;
  double t1369;
  double t2948;
  double t2827;
  double t2841;
  double t2854;
  double t2816;
  double t3001;
  double t3029;
  double t3034;
  double t3246;
  double t2865;
  double t3124;
  double t3138;
  double t2773;
  double t3312;
  double t3326;
  double t3335;
  double t3372;
  double t3174;
  double t3356;
  double t3366;
  double t2762;
  double t3488;
  double t3504;
  double t3512;
  double t3631;
  double t3370;
  double t3536;
  double t3557;
  double t2638;
  double t3636;
  double t3682;
  double t3723;
  double t3844;
  double t3564;
  double t3728;
  double t3814;
  double t2572;
  double t3850;
  double t3885;
  double t3886;
  double t1438;
  double t1525;
  double t1598;
  double t1769;
  double t1788;
  double t1880;
  double t1619;
  double t1888;
  double t1902;
  double t3999;
  double t4002;
  double t4024;
  double t4081;
  double t4101;
  double t4116;
  double t4031;
  double t4150;
  double t4163;
  double t4184;
  double t4191;
  double t4210;
  double t4172;
  double t4211;
  double t4218;
  double t4307;
  double t4311;
  double t4313;
  double t4299;
  double t4325;
  double t4341;
  double t4367;
  double t4407;
  double t4413;
  double t4344;
  double t4429;
  double t4432;
  double t4449;
  double t4492;
  double t4537;
  double t2334;
  double t2346;
  double t2371;
  double t4794;
  double t4799;
  double t4831;
  double t4844;
  double t4893;
  double t4913;
  double t4842;
  double t4915;
  double t4934;
  double t4946;
  double t4978;
  double t5002;
  double t4941;
  double t5013;
  double t5015;
  double t5035;
  double t5040;
  double t5041;
  double t5023;
  double t5045;
  double t5055;
  double t5072;
  double t5082;
  double t5102;
  double t5056;
  double t5112;
  double t5115;
  double t5123;
  double t5134;
  double t5154;
  double t3834;
  double t3889;
  double t3918;
  double t3974;
  double t3976;
  double t3982;
  double t4442;
  double t4543;
  double t4546;
  double t4559;
  double t4606;
  double t4660;
  double t5116;
  double t5161;
  double t5163;
  double t5193;
  double t5202;
  double t5207;
  t360 = Cos(var1[3]);
  t933 = Cos(var1[5]);
  t1067 = Sin(var1[3]);
  t952 = Sin(var1[4]);
  t1148 = Sin(var1[5]);
  t737 = Cos(var1[4]);
  t751 = Sin(var1[14]);
  t811 = Cos(var1[14]);
  t837 = Sin(var1[13]);
  t1225 = Cos(var1[13]);
  t1056 = t360*t933*t952;
  t1212 = t1067*t1148;
  t1218 = t1056 + t1212;
  t1256 = -1.*t933*t1067;
  t1308 = t360*t952*t1148;
  t1344 = t1256 + t1308;
  t1222 = t837*t1218;
  t1356 = t1225*t1344;
  t1369 = t1222 + t1356;
  t2948 = Cos(var1[15]);
  t2827 = t1225*t1218;
  t2841 = -1.*t837*t1344;
  t2854 = t2827 + t2841;
  t2816 = Sin(var1[15]);
  t3001 = t811*t360*t737;
  t3029 = t751*t1369;
  t3034 = t3001 + t3029;
  t3246 = Cos(var1[16]);
  t2865 = t2816*t2854;
  t3124 = t2948*t3034;
  t3138 = t2865 + t3124;
  t2773 = Sin(var1[16]);
  t3312 = t2948*t2854;
  t3326 = -1.*t2816*t3034;
  t3335 = t3312 + t3326;
  t3372 = Cos(var1[17]);
  t3174 = -1.*t2773*t3138;
  t3356 = t3246*t3335;
  t3366 = t3174 + t3356;
  t2762 = Sin(var1[17]);
  t3488 = t3246*t3138;
  t3504 = t2773*t3335;
  t3512 = t3488 + t3504;
  t3631 = Cos(var1[18]);
  t3370 = t2762*t3366;
  t3536 = t3372*t3512;
  t3557 = t3370 + t3536;
  t2638 = Sin(var1[18]);
  t3636 = t3372*t3366;
  t3682 = -1.*t2762*t3512;
  t3723 = t3636 + t3682;
  t3844 = Cos(var1[19]);
  t3564 = -1.*t2638*t3557;
  t3728 = t3631*t3723;
  t3814 = t3564 + t3728;
  t2572 = Sin(var1[19]);
  t3850 = t3631*t3557;
  t3885 = t2638*t3723;
  t3886 = t3850 + t3885;
  t1438 = t933*t1067*t952;
  t1525 = -1.*t360*t1148;
  t1598 = t1438 + t1525;
  t1769 = t360*t933;
  t1788 = t1067*t952*t1148;
  t1880 = t1769 + t1788;
  t1619 = t837*t1598;
  t1888 = t1225*t1880;
  t1902 = t1619 + t1888;
  t3999 = t1225*t1598;
  t4002 = -1.*t837*t1880;
  t4024 = t3999 + t4002;
  t4081 = t811*t737*t1067;
  t4101 = t751*t1902;
  t4116 = t4081 + t4101;
  t4031 = t2816*t4024;
  t4150 = t2948*t4116;
  t4163 = t4031 + t4150;
  t4184 = t2948*t4024;
  t4191 = -1.*t2816*t4116;
  t4210 = t4184 + t4191;
  t4172 = -1.*t2773*t4163;
  t4211 = t3246*t4210;
  t4218 = t4172 + t4211;
  t4307 = t3246*t4163;
  t4311 = t2773*t4210;
  t4313 = t4307 + t4311;
  t4299 = t2762*t4218;
  t4325 = t3372*t4313;
  t4341 = t4299 + t4325;
  t4367 = t3372*t4218;
  t4407 = -1.*t2762*t4313;
  t4413 = t4367 + t4407;
  t4344 = -1.*t2638*t4341;
  t4429 = t3631*t4413;
  t4432 = t4344 + t4429;
  t4449 = t3631*t4341;
  t4492 = t2638*t4413;
  t4537 = t4449 + t4492;
  t2334 = t737*t933*t837;
  t2346 = t1225*t737*t1148;
  t2371 = t2334 + t2346;
  t4794 = t1225*t737*t933;
  t4799 = -1.*t737*t837*t1148;
  t4831 = t4794 + t4799;
  t4844 = -1.*t811*t952;
  t4893 = t751*t2371;
  t4913 = t4844 + t4893;
  t4842 = t2816*t4831;
  t4915 = t2948*t4913;
  t4934 = t4842 + t4915;
  t4946 = t2948*t4831;
  t4978 = -1.*t2816*t4913;
  t5002 = t4946 + t4978;
  t4941 = -1.*t2773*t4934;
  t5013 = t3246*t5002;
  t5015 = t4941 + t5013;
  t5035 = t3246*t4934;
  t5040 = t2773*t5002;
  t5041 = t5035 + t5040;
  t5023 = t2762*t5015;
  t5045 = t3372*t5041;
  t5055 = t5023 + t5045;
  t5072 = t3372*t5015;
  t5082 = -1.*t2762*t5041;
  t5102 = t5072 + t5082;
  t5056 = -1.*t2638*t5055;
  t5112 = t3631*t5102;
  t5115 = t5056 + t5112;
  t5123 = t3631*t5055;
  t5134 = t2638*t5102;
  t5154 = t5123 + t5134;
  t3834 = t2572*t3814;
  t3889 = t3844*t3886;
  t3918 = t3834 + t3889;
  t3974 = t3844*t3814;
  t3976 = -1.*t2572*t3886;
  t3982 = t3974 + t3976;
  t4442 = t2572*t4432;
  t4543 = t3844*t4537;
  t4546 = t4442 + t4543;
  t4559 = t3844*t4432;
  t4606 = -1.*t2572*t4537;
  t4660 = t4559 + t4606;
  t5116 = t2572*t5115;
  t5161 = t3844*t5154;
  t5163 = t5116 + t5161;
  t5193 = t3844*t5115;
  t5202 = -1.*t2572*t5154;
  t5207 = t5193 + t5202;
  p_output1[0]=t360*t737*t751 - 1.*t1369*t811;
  p_output1[1]=t1067*t737*t751 - 1.*t1902*t811;
  p_output1[2]=-1.*t2371*t811 - 1.*t751*t952;
  p_output1[3]=0.642788*t3918 + 0.766044*t3982;
  p_output1[4]=0.642788*t4546 + 0.766044*t4660;
  p_output1[5]=0.642788*t5163 + 0.766044*t5207;
  p_output1[6]=-0.766044*t3918 + 0.642788*t3982;
  p_output1[7]=-0.766044*t4546 + 0.642788*t4660;
  p_output1[8]=-0.766044*t5163 + 0.642788*t5207;
}



void R_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
