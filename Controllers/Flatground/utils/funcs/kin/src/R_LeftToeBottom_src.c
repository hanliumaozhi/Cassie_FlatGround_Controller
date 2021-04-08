/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:15 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_src.h"

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
  double t650;
  double t421;
  double t696;
  double t473;
  double t930;
  double t184;
  double t258;
  double t1216;
  double t1444;
  double t1471;
  double t615;
  double t1019;
  double t1045;
  double t1130;
  double t1164;
  double t1173;
  double t1181;
  double t1321;
  double t1404;
  double t2469;
  double t2609;
  double t2690;
  double t2696;
  double t2490;
  double t2568;
  double t2573;
  double t2698;
  double t2743;
  double t2601;
  double t2699;
  double t2706;
  double t2376;
  double t2802;
  double t2833;
  double t2900;
  double t2983;
  double t2729;
  double t2935;
  double t2958;
  double t2333;
  double t3008;
  double t3083;
  double t3100;
  double t3200;
  double t2961;
  double t3127;
  double t3129;
  double t2327;
  double t3316;
  double t3342;
  double t3354;
  double t3455;
  double t3148;
  double t3365;
  double t3386;
  double t2289;
  double t3490;
  double t3499;
  double t3546;
  double t1524;
  double t1569;
  double t1628;
  double t1631;
  double t1677;
  double t1687;
  double t1719;
  double t1782;
  double t1862;
  double t3897;
  double t3934;
  double t3960;
  double t3816;
  double t3854;
  double t3864;
  double t3869;
  double t3964;
  double t4027;
  double t4050;
  double t4065;
  double t4080;
  double t4031;
  double t4087;
  double t4095;
  double t4169;
  double t4170;
  double t4188;
  double t4111;
  double t4201;
  double t4209;
  double t4240;
  double t4296;
  double t4298;
  double t4227;
  double t4319;
  double t4366;
  double t4429;
  double t4488;
  double t4502;
  double t1969;
  double t2060;
  double t2116;
  double t4656;
  double t4693;
  double t4695;
  double t4630;
  double t4644;
  double t4646;
  double t4649;
  double t4696;
  double t4710;
  double t4761;
  double t4765;
  double t4768;
  double t4756;
  double t4772;
  double t4786;
  double t4812;
  double t4826;
  double t4853;
  double t4793;
  double t4859;
  double t4861;
  double t4878;
  double t4898;
  double t4924;
  double t4868;
  double t4928;
  double t4940;
  double t5024;
  double t5030;
  double t5031;
  double t3448;
  double t3563;
  double t3565;
  double t3632;
  double t3634;
  double t3659;
  double t4382;
  double t4511;
  double t4534;
  double t4570;
  double t4576;
  double t4585;
  double t5004;
  double t5036;
  double t5039;
  double t5071;
  double t5078;
  double t5107;
  t650 = Cos(var1[3]);
  t421 = Cos(var1[5]);
  t696 = Sin(var1[4]);
  t473 = Sin(var1[3]);
  t930 = Sin(var1[5]);
  t184 = Cos(var1[7]);
  t258 = Cos(var1[6]);
  t1216 = Sin(var1[6]);
  t1444 = Cos(var1[4]);
  t1471 = Sin(var1[7]);
  t615 = -1.*t421*t473;
  t1019 = t650*t696*t930;
  t1045 = t615 + t1019;
  t1130 = t258*t1045;
  t1164 = t650*t421*t696;
  t1173 = t473*t930;
  t1181 = t1164 + t1173;
  t1321 = t1181*t1216;
  t1404 = t1130 + t1321;
  t2469 = Cos(var1[8]);
  t2609 = t258*t1181;
  t2690 = -1.*t1045*t1216;
  t2696 = t2609 + t2690;
  t2490 = t650*t1444*t184;
  t2568 = t1404*t1471;
  t2573 = t2490 + t2568;
  t2698 = Sin(var1[8]);
  t2743 = Cos(var1[9]);
  t2601 = t2469*t2573;
  t2699 = t2696*t2698;
  t2706 = t2601 + t2699;
  t2376 = Sin(var1[9]);
  t2802 = t2469*t2696;
  t2833 = -1.*t2573*t2698;
  t2900 = t2802 + t2833;
  t2983 = Cos(var1[10]);
  t2729 = -1.*t2376*t2706;
  t2935 = t2743*t2900;
  t2958 = t2729 + t2935;
  t2333 = Sin(var1[10]);
  t3008 = t2743*t2706;
  t3083 = t2376*t2900;
  t3100 = t3008 + t3083;
  t3200 = Cos(var1[11]);
  t2961 = t2333*t2958;
  t3127 = t2983*t3100;
  t3129 = t2961 + t3127;
  t2327 = Sin(var1[11]);
  t3316 = t2983*t2958;
  t3342 = -1.*t2333*t3100;
  t3354 = t3316 + t3342;
  t3455 = Cos(var1[12]);
  t3148 = -1.*t2327*t3129;
  t3365 = t3200*t3354;
  t3386 = t3148 + t3365;
  t2289 = Sin(var1[12]);
  t3490 = t3200*t3129;
  t3499 = t2327*t3354;
  t3546 = t3490 + t3499;
  t1524 = t650*t421;
  t1569 = t473*t696*t930;
  t1628 = t1524 + t1569;
  t1631 = t258*t1628;
  t1677 = t421*t473*t696;
  t1687 = -1.*t650*t930;
  t1719 = t1677 + t1687;
  t1782 = t1719*t1216;
  t1862 = t1631 + t1782;
  t3897 = t258*t1719;
  t3934 = -1.*t1628*t1216;
  t3960 = t3897 + t3934;
  t3816 = t1444*t184*t473;
  t3854 = t1862*t1471;
  t3864 = t3816 + t3854;
  t3869 = t2469*t3864;
  t3964 = t3960*t2698;
  t4027 = t3869 + t3964;
  t4050 = t2469*t3960;
  t4065 = -1.*t3864*t2698;
  t4080 = t4050 + t4065;
  t4031 = -1.*t2376*t4027;
  t4087 = t2743*t4080;
  t4095 = t4031 + t4087;
  t4169 = t2743*t4027;
  t4170 = t2376*t4080;
  t4188 = t4169 + t4170;
  t4111 = t2333*t4095;
  t4201 = t2983*t4188;
  t4209 = t4111 + t4201;
  t4240 = t2983*t4095;
  t4296 = -1.*t2333*t4188;
  t4298 = t4240 + t4296;
  t4227 = -1.*t2327*t4209;
  t4319 = t3200*t4298;
  t4366 = t4227 + t4319;
  t4429 = t3200*t4209;
  t4488 = t2327*t4298;
  t4502 = t4429 + t4488;
  t1969 = t1444*t258*t930;
  t2060 = t1444*t421*t1216;
  t2116 = t1969 + t2060;
  t4656 = t1444*t421*t258;
  t4693 = -1.*t1444*t930*t1216;
  t4695 = t4656 + t4693;
  t4630 = -1.*t184*t696;
  t4644 = t2116*t1471;
  t4646 = t4630 + t4644;
  t4649 = t2469*t4646;
  t4696 = t4695*t2698;
  t4710 = t4649 + t4696;
  t4761 = t2469*t4695;
  t4765 = -1.*t4646*t2698;
  t4768 = t4761 + t4765;
  t4756 = -1.*t2376*t4710;
  t4772 = t2743*t4768;
  t4786 = t4756 + t4772;
  t4812 = t2743*t4710;
  t4826 = t2376*t4768;
  t4853 = t4812 + t4826;
  t4793 = t2333*t4786;
  t4859 = t2983*t4853;
  t4861 = t4793 + t4859;
  t4878 = t2983*t4786;
  t4898 = -1.*t2333*t4853;
  t4924 = t4878 + t4898;
  t4868 = -1.*t2327*t4861;
  t4928 = t3200*t4924;
  t4940 = t4868 + t4928;
  t5024 = t3200*t4861;
  t5030 = t2327*t4924;
  t5031 = t5024 + t5030;
  t3448 = t2289*t3386;
  t3563 = t3455*t3546;
  t3565 = t3448 + t3563;
  t3632 = t3455*t3386;
  t3634 = -1.*t2289*t3546;
  t3659 = t3632 + t3634;
  t4382 = t2289*t4366;
  t4511 = t3455*t4502;
  t4534 = t4382 + t4511;
  t4570 = t3455*t4366;
  t4576 = -1.*t2289*t4502;
  t4585 = t4570 + t4576;
  t5004 = t2289*t4940;
  t5036 = t3455*t5031;
  t5039 = t5004 + t5036;
  t5071 = t3455*t4940;
  t5078 = -1.*t2289*t5031;
  t5107 = t5071 + t5078;
  p_output1[0]=-1.*t1404*t184 + t1444*t1471*t650;
  p_output1[1]=-1.*t184*t1862 + t1444*t1471*t473;
  p_output1[2]=-1.*t184*t2116 - 1.*t1471*t696;
  p_output1[3]=0.642788*t3565 + 0.766044*t3659;
  p_output1[4]=0.642788*t4534 + 0.766044*t4585;
  p_output1[5]=0.642788*t5039 + 0.766044*t5107;
  p_output1[6]=-0.766044*t3565 + 0.642788*t3659;
  p_output1[7]=-0.766044*t4534 + 0.642788*t4585;
  p_output1[8]=-0.766044*t5039 + 0.642788*t5107;
}



void R_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
