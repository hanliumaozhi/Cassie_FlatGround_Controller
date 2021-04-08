/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:16 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeFront_src.h"

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
  double t1677;
  double t1581;
  double t1739;
  double t1637;
  double t1774;
  double t97;
  double t1670;
  double t1879;
  double t1890;
  double t1924;
  double t1932;
  double t1943;
  double t2209;
  double t2490;
  double t2568;
  double t2609;
  double t2699;
  double t2455;
  double t2457;
  double t2469;
  double t2839;
  double t3450;
  double t3455;
  double t3499;
  double t3565;
  double t3365;
  double t3426;
  double t3448;
  double t3651;
  double t3677;
  double t3736;
  double t3897;
  double t3960;
  double t3964;
  double t4095;
  double t4170;
  double t4285;
  double t4298;
  double t4623;
  double t4656;
  double t4695;
  double t4761;
  double t4768;
  double t4786;
  double t4857;
  double t5039;
  double t5066;
  double t5071;
  double t5230;
  double t5232;
  double t5245;
  double t5303;
  double t5333;
  double t5351;
  double t5379;
  double t5467;
  double t5478;
  double t5483;
  double t5568;
  double t5574;
  double t5577;
  double t5615;
  double t5643;
  double t5644;
  double t5664;
  double t5700;
  double t5706;
  double t5717;
  double t5777;
  double t5807;
  double t5811;
  double t819;
  double t957;
  double t1092;
  double t1518;
  double t2239;
  double t2369;
  double t5949;
  double t5960;
  double t5964;
  double t5996;
  double t6010;
  double t6037;
  double t2696;
  double t2708;
  double t2821;
  double t2881;
  double t2958;
  double t2961;
  double t6068;
  double t6081;
  double t6100;
  double t3563;
  double t3609;
  double t3632;
  double t3790;
  double t3804;
  double t3839;
  double t4080;
  double t4111;
  double t4169;
  double t6180;
  double t6204;
  double t6210;
  double t6225;
  double t6244;
  double t6254;
  double t4511;
  double t4570;
  double t4601;
  double t4826;
  double t4924;
  double t5024;
  double t6266;
  double t6269;
  double t6275;
  double t6303;
  double t6319;
  double t6324;
  double t5165;
  double t5203;
  double t5212;
  double t5378;
  double t5420;
  double t5465;
  double t6351;
  double t6360;
  double t6367;
  double t6389;
  double t6391;
  double t6394;
  double t5505;
  double t5536;
  double t5558;
  double t5659;
  double t5679;
  double t5693;
  double t6412;
  double t6426;
  double t6432;
  double t6452;
  double t6460;
  double t6480;
  double t5750;
  double t5756;
  double t5757;
  double t6521;
  double t6532;
  double t6535;
  double t6563;
  double t6579;
  double t6587;
  double t6691;
  double t6693;
  double t6717;
  double t6786;
  double t6787;
  double t6788;
  double t6791;
  double t6796;
  double t6804;
  double t6808;
  double t6813;
  double t6818;
  double t6833;
  double t6834;
  double t6839;
  double t6852;
  double t6855;
  double t6857;
  double t6872;
  double t6887;
  double t6901;
  double t6943;
  double t6947;
  double t6951;
  double t6968;
  double t6971;
  double t6973;
  double t6991;
  double t6999;
  double t7004;
  double t7017;
  double t7018;
  double t7037;
  t1677 = Cos(var1[3]);
  t1581 = Cos(var1[5]);
  t1739 = Sin(var1[4]);
  t1637 = Sin(var1[3]);
  t1774 = Sin(var1[5]);
  t97 = Cos(var1[6]);
  t1670 = -1.*t1581*t1637;
  t1879 = t1677*t1739*t1774;
  t1890 = t1670 + t1879;
  t1924 = t1677*t1581*t1739;
  t1932 = t1637*t1774;
  t1943 = t1924 + t1932;
  t2209 = Sin(var1[6]);
  t2490 = Cos(var1[7]);
  t2568 = -1.*t2490;
  t2609 = 1. + t2568;
  t2699 = Sin(var1[7]);
  t2455 = t97*t1890;
  t2457 = t1943*t2209;
  t2469 = t2455 + t2457;
  t2839 = Cos(var1[4]);
  t3450 = Cos(var1[8]);
  t3455 = -1.*t3450;
  t3499 = 1. + t3455;
  t3565 = Sin(var1[8]);
  t3365 = t1677*t2839*t2490;
  t3426 = t2469*t2699;
  t3448 = t3365 + t3426;
  t3651 = t97*t1943;
  t3677 = -1.*t1890*t2209;
  t3736 = t3651 + t3677;
  t3897 = Cos(var1[9]);
  t3960 = -1.*t3897;
  t3964 = 1. + t3960;
  t4095 = Sin(var1[9]);
  t4170 = t3450*t3448;
  t4285 = t3736*t3565;
  t4298 = t4170 + t4285;
  t4623 = t3450*t3736;
  t4656 = -1.*t3448*t3565;
  t4695 = t4623 + t4656;
  t4761 = Cos(var1[10]);
  t4768 = -1.*t4761;
  t4786 = 1. + t4768;
  t4857 = Sin(var1[10]);
  t5039 = -1.*t4095*t4298;
  t5066 = t3897*t4695;
  t5071 = t5039 + t5066;
  t5230 = t3897*t4298;
  t5232 = t4095*t4695;
  t5245 = t5230 + t5232;
  t5303 = Cos(var1[11]);
  t5333 = -1.*t5303;
  t5351 = 1. + t5333;
  t5379 = Sin(var1[11]);
  t5467 = t4857*t5071;
  t5478 = t4761*t5245;
  t5483 = t5467 + t5478;
  t5568 = t4761*t5071;
  t5574 = -1.*t4857*t5245;
  t5577 = t5568 + t5574;
  t5615 = Cos(var1[12]);
  t5643 = -1.*t5615;
  t5644 = 1. + t5643;
  t5664 = Sin(var1[12]);
  t5700 = -1.*t5379*t5483;
  t5706 = t5303*t5577;
  t5717 = t5700 + t5706;
  t5777 = t5303*t5483;
  t5807 = t5379*t5577;
  t5811 = t5777 + t5807;
  t819 = -1.*t97;
  t957 = 1. + t819;
  t1092 = 0.135*t957;
  t1518 = 0. + t1092;
  t2239 = -0.135*t2209;
  t2369 = 0. + t2239;
  t5949 = t1677*t1581;
  t5960 = t1637*t1739*t1774;
  t5964 = t5949 + t5960;
  t5996 = t1581*t1637*t1739;
  t6010 = -1.*t1677*t1774;
  t6037 = t5996 + t6010;
  t2696 = 0.135*t2609;
  t2708 = 0.049*t2699;
  t2821 = 0. + t2696 + t2708;
  t2881 = -0.049*t2609;
  t2958 = 0.135*t2699;
  t2961 = 0. + t2881 + t2958;
  t6068 = t97*t5964;
  t6081 = t6037*t2209;
  t6100 = t6068 + t6081;
  t3563 = -0.049*t3499;
  t3609 = -0.09*t3565;
  t3632 = 0. + t3563 + t3609;
  t3790 = -0.09*t3499;
  t3804 = 0.049*t3565;
  t3839 = 0. + t3790 + t3804;
  t4080 = -0.049*t3964;
  t4111 = -0.21*t4095;
  t4169 = 0. + t4080 + t4111;
  t6180 = t2839*t2490*t1637;
  t6204 = t6100*t2699;
  t6210 = t6180 + t6204;
  t6225 = t97*t6037;
  t6244 = -1.*t5964*t2209;
  t6254 = t6225 + t6244;
  t4511 = -0.21*t3964;
  t4570 = 0.049*t4095;
  t4601 = 0. + t4511 + t4570;
  t4826 = -0.2707*t4786;
  t4924 = 0.0016*t4857;
  t5024 = 0. + t4826 + t4924;
  t6266 = t3450*t6210;
  t6269 = t6254*t3565;
  t6275 = t6266 + t6269;
  t6303 = t3450*t6254;
  t6319 = -1.*t6210*t3565;
  t6324 = t6303 + t6319;
  t5165 = -0.0016*t4786;
  t5203 = -0.2707*t4857;
  t5212 = 0. + t5165 + t5203;
  t5378 = 0.0184*t5351;
  t5420 = -0.7055*t5379;
  t5465 = 0. + t5378 + t5420;
  t6351 = -1.*t4095*t6275;
  t6360 = t3897*t6324;
  t6367 = t6351 + t6360;
  t6389 = t3897*t6275;
  t6391 = t4095*t6324;
  t6394 = t6389 + t6391;
  t5505 = -0.7055*t5351;
  t5536 = -0.0184*t5379;
  t5558 = 0. + t5505 + t5536;
  t5659 = -1.1135*t5644;
  t5679 = 0.0216*t5664;
  t5693 = 0. + t5659 + t5679;
  t6412 = t4857*t6367;
  t6426 = t4761*t6394;
  t6432 = t6412 + t6426;
  t6452 = t4761*t6367;
  t6460 = -1.*t4857*t6394;
  t6480 = t6452 + t6460;
  t5750 = -0.0216*t5644;
  t5756 = -1.1135*t5664;
  t5757 = 0. + t5750 + t5756;
  t6521 = -1.*t5379*t6432;
  t6532 = t5303*t6480;
  t6535 = t6521 + t6532;
  t6563 = t5303*t6432;
  t6579 = t5379*t6480;
  t6587 = t6563 + t6579;
  t6691 = t2839*t97*t1774;
  t6693 = t2839*t1581*t2209;
  t6717 = t6691 + t6693;
  t6786 = -1.*t2490*t1739;
  t6787 = t6717*t2699;
  t6788 = t6786 + t6787;
  t6791 = t2839*t1581*t97;
  t6796 = -1.*t2839*t1774*t2209;
  t6804 = t6791 + t6796;
  t6808 = t3450*t6788;
  t6813 = t6804*t3565;
  t6818 = t6808 + t6813;
  t6833 = t3450*t6804;
  t6834 = -1.*t6788*t3565;
  t6839 = t6833 + t6834;
  t6852 = -1.*t4095*t6818;
  t6855 = t3897*t6839;
  t6857 = t6852 + t6855;
  t6872 = t3897*t6818;
  t6887 = t4095*t6839;
  t6901 = t6872 + t6887;
  t6943 = t4857*t6857;
  t6947 = t4761*t6901;
  t6951 = t6943 + t6947;
  t6968 = t4761*t6857;
  t6971 = -1.*t4857*t6901;
  t6973 = t6968 + t6971;
  t6991 = -1.*t5379*t6951;
  t6999 = t5303*t6973;
  t7004 = t6991 + t6999;
  t7017 = t5303*t6951;
  t7018 = t5379*t6973;
  t7037 = t7017 + t7018;
  p_output1[0]=0. + t1518*t1890 + t1943*t2369 + t2469*t2821 + 0.1305*(t2469*t2490 - 1.*t1677*t2699*t2839) + t1677*t2839*t2961 + t3448*t3632 + t3736*t3839 + t4169*t4298 + t4601*t4695 + t5024*t5071 + t5212*t5245 + t5465*t5483 + t5558*t5577 + t5693*t5717 + t5757*t5811 + 0.088451*(t5664*t5717 + t5615*t5811) - 1.062256*(t5615*t5717 - 1.*t5664*t5811) + var1[0];
  p_output1[1]=0. + t1637*t2839*t2961 + t1518*t5964 + t2369*t6037 + t2821*t6100 + 0.1305*(-1.*t1637*t2699*t2839 + t2490*t6100) + t3632*t6210 + t3839*t6254 + t4169*t6275 + t4601*t6324 + t5024*t6367 + t5212*t6394 + t5465*t6432 + t5558*t6480 + t5693*t6535 + t5757*t6587 + 0.088451*(t5664*t6535 + t5615*t6587) - 1.062256*(t5615*t6535 - 1.*t5664*t6587) + var1[1];
  p_output1[2]=0. + t1518*t1774*t2839 + t1581*t2369*t2839 - 1.*t1739*t2961 + t2821*t6717 + 0.1305*(t1739*t2699 + t2490*t6717) + t3632*t6788 + t3839*t6804 + t4169*t6818 + t4601*t6839 + t5024*t6857 + t5212*t6901 + t5465*t6951 + t5558*t6973 + t5693*t7004 + t5757*t7037 + 0.088451*(t5664*t7004 + t5615*t7037) - 1.062256*(t5615*t7004 - 1.*t5664*t7037) + var1[2];
}



void p_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
