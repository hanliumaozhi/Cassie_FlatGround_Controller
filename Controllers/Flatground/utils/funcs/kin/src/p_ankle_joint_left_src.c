/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:49 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_left_src.h"

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
  double t1912;
  double t1174;
  double t1928;
  double t1214;
  double t1990;
  double t402;
  double t1531;
  double t2026;
  double t2048;
  double t2693;
  double t3063;
  double t3169;
  double t3278;
  double t4869;
  double t5654;
  double t5740;
  double t5935;
  double t4676;
  double t4815;
  double t4857;
  double t6379;
  double t6847;
  double t6854;
  double t6887;
  double t6918;
  double t6815;
  double t6825;
  double t6841;
  double t6960;
  double t6964;
  double t6978;
  double t7053;
  double t7079;
  double t7130;
  double t7144;
  double t7196;
  double t7200;
  double t7253;
  double t7353;
  double t7362;
  double t7364;
  double t7371;
  double t7382;
  double t7424;
  double t7476;
  double t7526;
  double t7539;
  double t7547;
  double t7615;
  double t7624;
  double t7647;
  double t7658;
  double t7667;
  double t7681;
  double t7735;
  double t7752;
  double t7770;
  double t7789;
  double t7852;
  double t7857;
  double t7873;
  double t407;
  double t994;
  double t1082;
  double t1091;
  double t3640;
  double t3851;
  double t7954;
  double t7960;
  double t7989;
  double t7998;
  double t7999;
  double t8016;
  double t5773;
  double t6185;
  double t6361;
  double t6674;
  double t6710;
  double t6712;
  double t8040;
  double t8044;
  double t8045;
  double t6896;
  double t6921;
  double t6933;
  double t6991;
  double t7020;
  double t7039;
  double t7136;
  double t7176;
  double t7178;
  double t8085;
  double t8090;
  double t8095;
  double t8111;
  double t8116;
  double t8127;
  double t7285;
  double t7325;
  double t7329;
  double t7451;
  double t7497;
  double t7508;
  double t8134;
  double t8142;
  double t8143;
  double t8162;
  double t8166;
  double t8167;
  double t7569;
  double t7584;
  double t7614;
  double t7720;
  double t7739;
  double t7744;
  double t8176;
  double t8179;
  double t8184;
  double t8196;
  double t8197;
  double t8198;
  double t7826;
  double t7834;
  double t7843;
  double t8205;
  double t8219;
  double t8221;
  double t8231;
  double t8240;
  double t8252;
  double t8345;
  double t8350;
  double t8362;
  double t8386;
  double t8388;
  double t8390;
  double t8407;
  double t8409;
  double t8410;
  double t8417;
  double t8418;
  double t8421;
  double t8425;
  double t8428;
  double t8432;
  double t8436;
  double t8437;
  double t8443;
  double t8456;
  double t8496;
  double t8510;
  double t8518;
  double t8523;
  double t8529;
  double t8552;
  double t8566;
  double t8570;
  t1912 = Cos(var1[3]);
  t1174 = Cos(var1[5]);
  t1928 = Sin(var1[4]);
  t1214 = Sin(var1[3]);
  t1990 = Sin(var1[5]);
  t402 = Cos(var1[6]);
  t1531 = -1.*t1174*t1214;
  t2026 = t1912*t1928*t1990;
  t2048 = t1531 + t2026;
  t2693 = t1912*t1174*t1928;
  t3063 = t1214*t1990;
  t3169 = t2693 + t3063;
  t3278 = Sin(var1[6]);
  t4869 = Cos(var1[7]);
  t5654 = -1.*t4869;
  t5740 = 1. + t5654;
  t5935 = Sin(var1[7]);
  t4676 = t402*t2048;
  t4815 = t3169*t3278;
  t4857 = t4676 + t4815;
  t6379 = Cos(var1[4]);
  t6847 = Cos(var1[8]);
  t6854 = -1.*t6847;
  t6887 = 1. + t6854;
  t6918 = Sin(var1[8]);
  t6815 = t1912*t6379*t4869;
  t6825 = t4857*t5935;
  t6841 = t6815 + t6825;
  t6960 = t402*t3169;
  t6964 = -1.*t2048*t3278;
  t6978 = t6960 + t6964;
  t7053 = Cos(var1[9]);
  t7079 = -1.*t7053;
  t7130 = 1. + t7079;
  t7144 = Sin(var1[9]);
  t7196 = t6847*t6841;
  t7200 = t6978*t6918;
  t7253 = t7196 + t7200;
  t7353 = t6847*t6978;
  t7362 = -1.*t6841*t6918;
  t7364 = t7353 + t7362;
  t7371 = Cos(var1[10]);
  t7382 = -1.*t7371;
  t7424 = 1. + t7382;
  t7476 = Sin(var1[10]);
  t7526 = -1.*t7144*t7253;
  t7539 = t7053*t7364;
  t7547 = t7526 + t7539;
  t7615 = t7053*t7253;
  t7624 = t7144*t7364;
  t7647 = t7615 + t7624;
  t7658 = Cos(var1[11]);
  t7667 = -1.*t7658;
  t7681 = 1. + t7667;
  t7735 = Sin(var1[11]);
  t7752 = t7476*t7547;
  t7770 = t7371*t7647;
  t7789 = t7752 + t7770;
  t7852 = t7371*t7547;
  t7857 = -1.*t7476*t7647;
  t7873 = t7852 + t7857;
  t407 = -1.*t402;
  t994 = 1. + t407;
  t1082 = 0.135*t994;
  t1091 = 0. + t1082;
  t3640 = -0.135*t3278;
  t3851 = 0. + t3640;
  t7954 = t1912*t1174;
  t7960 = t1214*t1928*t1990;
  t7989 = t7954 + t7960;
  t7998 = t1174*t1214*t1928;
  t7999 = -1.*t1912*t1990;
  t8016 = t7998 + t7999;
  t5773 = 0.135*t5740;
  t6185 = 0.049*t5935;
  t6361 = 0. + t5773 + t6185;
  t6674 = -0.049*t5740;
  t6710 = 0.135*t5935;
  t6712 = 0. + t6674 + t6710;
  t8040 = t402*t7989;
  t8044 = t8016*t3278;
  t8045 = t8040 + t8044;
  t6896 = -0.049*t6887;
  t6921 = -0.09*t6918;
  t6933 = 0. + t6896 + t6921;
  t6991 = -0.09*t6887;
  t7020 = 0.049*t6918;
  t7039 = 0. + t6991 + t7020;
  t7136 = -0.049*t7130;
  t7176 = -0.21*t7144;
  t7178 = 0. + t7136 + t7176;
  t8085 = t6379*t4869*t1214;
  t8090 = t8045*t5935;
  t8095 = t8085 + t8090;
  t8111 = t402*t8016;
  t8116 = -1.*t7989*t3278;
  t8127 = t8111 + t8116;
  t7285 = -0.21*t7130;
  t7325 = 0.049*t7144;
  t7329 = 0. + t7285 + t7325;
  t7451 = -0.2707*t7424;
  t7497 = 0.0016*t7476;
  t7508 = 0. + t7451 + t7497;
  t8134 = t6847*t8095;
  t8142 = t8127*t6918;
  t8143 = t8134 + t8142;
  t8162 = t6847*t8127;
  t8166 = -1.*t8095*t6918;
  t8167 = t8162 + t8166;
  t7569 = -0.0016*t7424;
  t7584 = -0.2707*t7476;
  t7614 = 0. + t7569 + t7584;
  t7720 = 0.0184*t7681;
  t7739 = -0.7055*t7735;
  t7744 = 0. + t7720 + t7739;
  t8176 = -1.*t7144*t8143;
  t8179 = t7053*t8167;
  t8184 = t8176 + t8179;
  t8196 = t7053*t8143;
  t8197 = t7144*t8167;
  t8198 = t8196 + t8197;
  t7826 = -0.7055*t7681;
  t7834 = -0.0184*t7735;
  t7843 = 0. + t7826 + t7834;
  t8205 = t7476*t8184;
  t8219 = t7371*t8198;
  t8221 = t8205 + t8219;
  t8231 = t7371*t8184;
  t8240 = -1.*t7476*t8198;
  t8252 = t8231 + t8240;
  t8345 = t6379*t402*t1990;
  t8350 = t6379*t1174*t3278;
  t8362 = t8345 + t8350;
  t8386 = -1.*t4869*t1928;
  t8388 = t8362*t5935;
  t8390 = t8386 + t8388;
  t8407 = t6379*t1174*t402;
  t8409 = -1.*t6379*t1990*t3278;
  t8410 = t8407 + t8409;
  t8417 = t6847*t8390;
  t8418 = t8410*t6918;
  t8421 = t8417 + t8418;
  t8425 = t6847*t8410;
  t8428 = -1.*t8390*t6918;
  t8432 = t8425 + t8428;
  t8436 = -1.*t7144*t8421;
  t8437 = t7053*t8432;
  t8443 = t8436 + t8437;
  t8456 = t7053*t8421;
  t8496 = t7144*t8432;
  t8510 = t8456 + t8496;
  t8518 = t7476*t8443;
  t8523 = t7371*t8510;
  t8529 = t8518 + t8523;
  t8552 = t7371*t8443;
  t8566 = -1.*t7476*t8510;
  t8570 = t8552 + t8566;
  p_output1[0]=0. + t1091*t2048 + t3169*t3851 + t4857*t6361 + 0.1305*(t4857*t4869 - 1.*t1912*t5935*t6379) + t1912*t6379*t6712 + t6841*t6933 + t6978*t7039 + t7178*t7253 + t7329*t7364 + t7508*t7547 + t7614*t7647 + t7744*t7789 + t7843*t7873 - 0.7055*(-1.*t7735*t7789 + t7658*t7873) + 0.0184*(t7658*t7789 + t7735*t7873) + var1[0];
  p_output1[1]=0. + t1214*t6379*t6712 + t1091*t7989 + t3851*t8016 + t6361*t8045 + 0.1305*(-1.*t1214*t5935*t6379 + t4869*t8045) + t6933*t8095 + t7039*t8127 + t7178*t8143 + t7329*t8167 + t7508*t8184 + t7614*t8198 + t7744*t8221 + t7843*t8252 - 0.7055*(-1.*t7735*t8221 + t7658*t8252) + 0.0184*(t7658*t8221 + t7735*t8252) + var1[1];
  p_output1[2]=0. + t1091*t1990*t6379 + t1174*t3851*t6379 - 1.*t1928*t6712 + t6361*t8362 + 0.1305*(t1928*t5935 + t4869*t8362) + t6933*t8390 + t7039*t8410 + t7178*t8421 + t7329*t8432 + t7508*t8443 + t7614*t8510 + t7744*t8529 + t7843*t8570 - 0.7055*(-1.*t7735*t8529 + t7658*t8570) + 0.0184*(t7658*t8529 + t7735*t8570) + var1[2];
}



void p_ankle_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
