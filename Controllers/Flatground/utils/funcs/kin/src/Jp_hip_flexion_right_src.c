/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:01 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_flexion_right_src.h"

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
  double t744;
  double t1885;
  double t1769;
  double t1776;
  double t1994;
  double t166;
  double t201;
  double t212;
  double t432;
  double t1017;
  double t1813;
  double t2198;
  double t2331;
  double t2675;
  double t3170;
  double t3187;
  double t3253;
  double t88;
  double t3708;
  double t3888;
  double t3960;
  double t4321;
  double t4404;
  double t4516;
  double t4624;
  double t4737;
  double t4786;
  double t4787;
  double t5730;
  double t6223;
  double t6804;
  double t242;
  double t607;
  double t728;
  double t1261;
  double t1549;
  double t2782;
  double t2801;
  double t3004;
  double t3026;
  double t3342;
  double t3354;
  double t3649;
  double t7034;
  double t7039;
  double t7060;
  double t7088;
  double t7091;
  double t7100;
  double t4578;
  double t4636;
  double t4681;
  double t7116;
  double t7123;
  double t7129;
  double t5474;
  double t5621;
  double t5667;
  double t7168;
  double t7179;
  double t7185;
  double t7279;
  double t7280;
  double t7283;
  double t7470;
  double t7478;
  double t7482;
  double t7510;
  double t7517;
  double t7534;
  double t7622;
  double t7628;
  double t7660;
  double t7820;
  double t7827;
  double t7847;
  double t7854;
  double t7861;
  double t7877;
  double t7907;
  double t7913;
  double t7916;
  double t8037;
  double t8041;
  double t8061;
  double t8113;
  double t8129;
  double t8145;
  double t8188;
  double t8190;
  double t8212;
  double t8294;
  double t8297;
  double t8301;
  double t8335;
  double t8342;
  double t8315;
  double t8327;
  double t8328;
  double t8464;
  double t8466;
  double t8467;
  double t8501;
  double t8502;
  double t8506;
  double t8480;
  double t8491;
  double t8642;
  double t8667;
  double t8676;
  double t8574;
  double t8590;
  double t8594;
  double t8791;
  double t8798;
  double t8925;
  double t8927;
  double t8931;
  double t8947;
  double t8948;
  double t8940;
  double t8945;
  double t8623;
  double t8692;
  double t8697;
  double t8701;
  double t8708;
  double t8723;
  double t8735;
  double t8756;
  double t8764;
  double t8770;
  double t8776;
  double t8780;
  double t7235;
  double t7236;
  double t7248;
  double t9011;
  double t9015;
  double t9022;
  double t9030;
  double t9036;
  double t9084;
  double t9085;
  double t9093;
  double t9102;
  double t9103;
  double t9107;
  double t9153;
  double t9157;
  double t9160;
  double t9162;
  double t9164;
  double t9175;
  double t7390;
  double t7394;
  double t7409;
  double t9234;
  double t9237;
  double t9242;
  double t9249;
  double t9258;
  double t9299;
  double t9301;
  double t9302;
  double t9337;
  double t9350;
  double t9351;
  t744 = Sin(var1[3]);
  t1885 = Cos(var1[3]);
  t1769 = Cos(var1[5]);
  t1776 = Sin(var1[4]);
  t1994 = Sin(var1[5]);
  t166 = Cos(var1[14]);
  t201 = -1.*t166;
  t212 = 1. + t201;
  t432 = Sin(var1[14]);
  t1017 = Sin(var1[13]);
  t1813 = -1.*t1769*t744*t1776;
  t2198 = t1885*t1994;
  t2331 = t1813 + t2198;
  t2675 = Cos(var1[13]);
  t3170 = -1.*t1885*t1769;
  t3187 = -1.*t744*t1776*t1994;
  t3253 = t3170 + t3187;
  t88 = Cos(var1[4]);
  t3708 = t1017*t2331;
  t3888 = t2675*t3253;
  t3960 = t3708 + t3888;
  t4321 = Cos(var1[15]);
  t4404 = -1.*t4321;
  t4516 = 1. + t4404;
  t4624 = Sin(var1[15]);
  t4737 = t2675*t2331;
  t4786 = -1.*t1017*t3253;
  t4787 = t4737 + t4786;
  t5730 = -1.*t166*t88*t744;
  t6223 = t432*t3960;
  t6804 = t5730 + t6223;
  t242 = -0.049*t212;
  t607 = -0.135*t432;
  t728 = 0. + t242 + t607;
  t1261 = 0.135*t1017;
  t1549 = 0. + t1261;
  t2782 = -1.*t2675;
  t2801 = 1. + t2782;
  t3004 = -0.135*t2801;
  t3026 = 0. + t3004;
  t3342 = -0.135*t212;
  t3354 = 0.049*t432;
  t3649 = 0. + t3342 + t3354;
  t7034 = t1885*t1769*t1776;
  t7039 = t744*t1994;
  t7060 = t7034 + t7039;
  t7088 = -1.*t1769*t744;
  t7091 = t1885*t1776*t1994;
  t7100 = t7088 + t7091;
  t4578 = -0.09*t4516;
  t4636 = 0.049*t4624;
  t4681 = 0. + t4578 + t4636;
  t7116 = t1017*t7060;
  t7123 = t2675*t7100;
  t7129 = t7116 + t7123;
  t5474 = -0.049*t4516;
  t5621 = -0.09*t4624;
  t5667 = 0. + t5474 + t5621;
  t7168 = t2675*t7060;
  t7179 = -1.*t1017*t7100;
  t7185 = t7168 + t7179;
  t7279 = t166*t1885*t88;
  t7280 = t432*t7129;
  t7283 = t7279 + t7280;
  t7470 = t1885*t88*t1769*t1017;
  t7478 = t2675*t1885*t88*t1994;
  t7482 = t7470 + t7478;
  t7510 = t2675*t1885*t88*t1769;
  t7517 = -1.*t1885*t88*t1017*t1994;
  t7534 = t7510 + t7517;
  t7622 = -1.*t166*t1885*t1776;
  t7628 = t432*t7482;
  t7660 = t7622 + t7628;
  t7820 = t88*t1769*t1017*t744;
  t7827 = t2675*t88*t744*t1994;
  t7847 = t7820 + t7827;
  t7854 = t2675*t88*t1769*t744;
  t7861 = -1.*t88*t1017*t744*t1994;
  t7877 = t7854 + t7861;
  t7907 = -1.*t166*t744*t1776;
  t7913 = t432*t7847;
  t7916 = t7907 + t7913;
  t8037 = -1.*t1769*t1017*t1776;
  t8041 = -1.*t2675*t1776*t1994;
  t8061 = t8037 + t8041;
  t8113 = -1.*t2675*t1769*t1776;
  t8129 = t1017*t1776*t1994;
  t8145 = t8113 + t8129;
  t8188 = -1.*t166*t88;
  t8190 = t432*t8061;
  t8212 = t8188 + t8190;
  t8294 = t1769*t744;
  t8297 = -1.*t1885*t1776*t1994;
  t8301 = t8294 + t8297;
  t8335 = t1017*t8301;
  t8342 = t7168 + t8335;
  t8315 = -1.*t1017*t7060;
  t8327 = t2675*t8301;
  t8328 = t8315 + t8327;
  t8464 = t1769*t744*t1776;
  t8466 = -1.*t1885*t1994;
  t8467 = t8464 + t8466;
  t8501 = t2675*t8467;
  t8502 = t1017*t3253;
  t8506 = t8501 + t8502;
  t8480 = -1.*t1017*t8467;
  t8491 = t8480 + t3888;
  t8642 = t2675*t88*t1769;
  t8667 = -1.*t88*t1017*t1994;
  t8676 = t8642 + t8667;
  t8574 = -1.*t88*t1769*t1017;
  t8590 = -1.*t2675*t88*t1994;
  t8594 = t8574 + t8590;
  t8791 = -1.*t2675*t7100;
  t8798 = t8315 + t8791;
  t8925 = t1885*t1769;
  t8927 = t744*t1776*t1994;
  t8931 = t8925 + t8927;
  t8947 = -1.*t1017*t8931;
  t8948 = t8501 + t8947;
  t8940 = -1.*t2675*t8931;
  t8945 = t8480 + t8940;
  t8623 = t4681*t8594;
  t8692 = -0.135*t166*t8676;
  t8697 = t3649*t8676;
  t8701 = t432*t5667*t8676;
  t8708 = t4624*t8594;
  t8723 = t4321*t432*t8676;
  t8735 = t8708 + t8723;
  t8756 = -0.049*t8735;
  t8764 = t4321*t8594;
  t8770 = -1.*t432*t4624*t8676;
  t8776 = t8764 + t8770;
  t8780 = -0.09*t8776;
  t7235 = -1.*t1885*t88*t432;
  t7236 = t166*t7129;
  t7248 = t7235 + t7236;
  t9011 = -0.135*t166;
  t9015 = -0.049*t432;
  t9022 = t9011 + t9015;
  t9030 = 0.049*t166;
  t9036 = t9030 + t607;
  t9084 = t1017*t8467;
  t9085 = t2675*t8931;
  t9093 = t9084 + t9085;
  t9102 = -1.*t88*t432*t744;
  t9103 = t166*t9093;
  t9107 = t9102 + t9103;
  t9153 = t88*t1769*t1017;
  t9157 = t2675*t88*t1994;
  t9160 = t9153 + t9157;
  t9162 = t432*t1776;
  t9164 = t166*t9160;
  t9175 = t9162 + t9164;
  t7390 = t4321*t7185;
  t7394 = -1.*t4624*t7283;
  t7409 = t7390 + t7394;
  t9234 = 0.049*t4321;
  t9237 = t9234 + t5621;
  t9242 = -0.09*t4321;
  t9249 = -0.049*t4624;
  t9258 = t9242 + t9249;
  t9299 = t166*t88*t744;
  t9301 = t432*t9093;
  t9302 = t9299 + t9301;
  t9337 = -1.*t166*t1776;
  t9350 = t432*t9160;
  t9351 = t9337 + t9350;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1549*t2331 + t3026*t3253 + t3649*t3960 + t4681*t4787 + t5667*t6804 - 0.049*(t4624*t4787 + t4321*t6804) - 0.09*(t4321*t4787 - 1.*t4624*t6804) - 1.*t728*t744*t88 - 0.135*(t166*t3960 + t432*t744*t88);
  p_output1[10]=t1549*t7060 + t3026*t7100 + t3649*t7129 + t4681*t7185 - 0.135*t7248 + t5667*t7283 - 0.049*(t4624*t7185 + t4321*t7283) - 0.09*t7409 + t1885*t728*t88;
  p_output1[11]=0;
  p_output1[12]=-1.*t1776*t1885*t728 + t3649*t7482 - 0.135*(t1776*t1885*t432 + t166*t7482) + t4681*t7534 + t5667*t7660 - 0.049*(t4624*t7534 + t4321*t7660) - 0.09*(t4321*t7534 - 1.*t4624*t7660) + t1549*t1769*t1885*t88 + t1885*t1994*t3026*t88;
  p_output1[13]=-1.*t1776*t728*t744 + t3649*t7847 - 0.135*(t1776*t432*t744 + t166*t7847) + t4681*t7877 + t5667*t7916 - 0.049*(t4624*t7877 + t4321*t7916) - 0.09*(t4321*t7877 - 1.*t4624*t7916) + t1549*t1769*t744*t88 + t1994*t3026*t744*t88;
  p_output1[14]=-1.*t1549*t1769*t1776 - 1.*t1776*t1994*t3026 + t3649*t8061 + t4681*t8145 + t5667*t8212 - 0.049*(t4624*t8145 + t4321*t8212) - 0.09*(t4321*t8145 - 1.*t4624*t8212) - 1.*t728*t88 - 0.135*(t166*t8061 + t432*t88);
  p_output1[15]=t3026*t7060 + t1549*t8301 + t4681*t8328 - 0.135*t166*t8342 + t3649*t8342 + t432*t5667*t8342 - 0.049*(t4624*t8328 + t432*t4321*t8342) - 0.09*(t4321*t8328 - 1.*t432*t4624*t8342);
  p_output1[16]=t1549*t3253 + t3026*t8467 + t4681*t8491 - 0.135*t166*t8506 + t3649*t8506 + t432*t5667*t8506 - 0.049*(t4624*t8491 + t432*t4321*t8506) - 0.09*(t4321*t8491 - 1.*t432*t4624*t8506);
  p_output1[17]=t8623 + t8692 + t8697 + t8701 + t8756 + t8780 - 1.*t1549*t1994*t88 + t1769*t3026*t88;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.135*t2675*t7060 - 0.135*t1017*t7100 - 0.135*t166*t7185 + t3649*t7185 + t432*t5667*t7185 + t4681*t8798 - 0.09*(-1.*t432*t4624*t7185 + t4321*t8798) - 0.049*(t432*t4321*t7185 + t4624*t8798);
  p_output1[40]=0.135*t2675*t8467 - 0.135*t1017*t8931 + t4681*t8945 - 0.135*t166*t8948 + t3649*t8948 + t432*t5667*t8948 - 0.049*(t4624*t8945 + t432*t4321*t8948) - 0.09*(t4321*t8945 - 1.*t432*t4624*t8948);
  p_output1[41]=t8623 + t8692 + t8697 + t8701 + t8756 + t8780 - 0.135*t1017*t1994*t88 + 0.135*t1769*t2675*t88;
  p_output1[42]=-0.049*t4321*t7248 + 0.09*t4624*t7248 + t5667*t7248 - 0.135*(-1.*t432*t7129 - 1.*t166*t1885*t88) + t1885*t88*t9022 + t7129*t9036;
  p_output1[43]=t744*t88*t9022 + t9036*t9093 - 0.135*(t5730 - 1.*t432*t9093) - 0.049*t4321*t9107 + 0.09*t4624*t9107 + t5667*t9107;
  p_output1[44]=-1.*t1776*t9022 + t9036*t9160 - 0.135*(t166*t1776 - 1.*t432*t9160) - 0.049*t4321*t9175 + 0.09*t4624*t9175 + t5667*t9175;
  p_output1[45]=-0.09*(-1.*t4624*t7185 - 1.*t4321*t7283) - 0.049*t7409 + t7185*t9237 + t7283*t9258;
  p_output1[46]=t8948*t9237 + t9258*t9302 - 0.09*(-1.*t4624*t8948 - 1.*t4321*t9302) - 0.049*(t4321*t8948 - 1.*t4624*t9302);
  p_output1[47]=t8676*t9237 + t9258*t9351 - 0.09*(-1.*t4624*t8676 - 1.*t4321*t9351) - 0.049*(t4321*t8676 - 1.*t4624*t9351);
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jp_hip_flexion_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
