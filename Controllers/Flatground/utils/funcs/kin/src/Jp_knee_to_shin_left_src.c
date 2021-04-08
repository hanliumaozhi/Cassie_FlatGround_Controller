/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:47 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_knee_to_shin_left_src.h"

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
  double t649;
  double t704;
  double t725;
  double t577;
  double t785;
  double t42;
  double t652;
  double t826;
  double t889;
  double t1061;
  double t1203;
  double t1213;
  double t1266;
  double t1567;
  double t1586;
  double t1647;
  double t1675;
  double t1472;
  double t1526;
  double t1566;
  double t1920;
  double t2409;
  double t2525;
  double t2542;
  double t2641;
  double t2270;
  double t2363;
  double t2374;
  double t2754;
  double t2832;
  double t2859;
  double t3013;
  double t3017;
  double t3056;
  double t3080;
  double t3143;
  double t3198;
  double t3202;
  double t3485;
  double t3523;
  double t3528;
  double t3602;
  double t3663;
  double t3666;
  double t3694;
  double t3934;
  double t4006;
  double t4015;
  double t4188;
  double t4201;
  double t4228;
  double t52;
  double t86;
  double t415;
  double t456;
  double t1347;
  double t1447;
  double t4590;
  double t4619;
  double t4623;
  double t4633;
  double t4635;
  double t4684;
  double t1663;
  double t1716;
  double t1775;
  double t1955;
  double t2006;
  double t2008;
  double t4716;
  double t4797;
  double t4811;
  double t2612;
  double t2666;
  double t2732;
  double t2901;
  double t2964;
  double t2966;
  double t3077;
  double t3098;
  double t3102;
  double t5144;
  double t5159;
  double t5187;
  double t5234;
  double t5297;
  double t5312;
  double t3432;
  double t3462;
  double t3463;
  double t3682;
  double t3782;
  double t3892;
  double t5335;
  double t5403;
  double t5430;
  double t5476;
  double t5684;
  double t5775;
  double t4056;
  double t4111;
  double t4131;
  double t5918;
  double t5920;
  double t5950;
  double t5985;
  double t6182;
  double t6356;
  double t6712;
  double t6721;
  double t6724;
  double t6903;
  double t6918;
  double t6922;
  double t6927;
  double t6955;
  double t6960;
  double t7039;
  double t7041;
  double t7052;
  double t7104;
  double t7113;
  double t7127;
  double t7145;
  double t7150;
  double t7169;
  double t7196;
  double t7200;
  double t7209;
  double t7438;
  double t7442;
  double t7459;
  double t7545;
  double t7547;
  double t7554;
  double t7576;
  double t7578;
  double t7584;
  double t7593;
  double t7627;
  double t7634;
  double t7658;
  double t7677;
  double t7720;
  double t7733;
  double t7739;
  double t7740;
  double t7749;
  double t7790;
  double t7814;
  double t7923;
  double t7931;
  double t7936;
  double t8017;
  double t8019;
  double t8034;
  double t8041;
  double t8044;
  double t8048;
  double t8056;
  double t8060;
  double t8070;
  double t8080;
  double t8084;
  double t8085;
  double t8088;
  double t8090;
  double t8091;
  double t8096;
  double t8097;
  double t8102;
  double t8153;
  double t8158;
  double t8161;
  double t8166;
  double t8172;
  double t8185;
  double t8195;
  double t8198;
  double t8219;
  double t8221;
  double t8222;
  double t8228;
  double t8230;
  double t8231;
  double t8233;
  double t8234;
  double t8237;
  double t8239;
  double t8242;
  double t8243;
  double t8289;
  double t8293;
  double t8297;
  double t8308;
  double t8310;
  double t8314;
  double t8335;
  double t8336;
  double t8345;
  double t8352;
  double t8353;
  double t8359;
  double t8360;
  double t8362;
  double t8367;
  double t8368;
  double t8369;
  double t8375;
  double t8379;
  double t8380;
  double t8436;
  double t8448;
  double t8452;
  double t8471;
  double t8475;
  double t8496;
  double t8510;
  double t8513;
  double t8514;
  double t8518;
  double t8519;
  double t8529;
  double t8532;
  double t8536;
  double t8552;
  double t8566;
  double t8581;
  double t8586;
  double t8635;
  double t8636;
  double t8639;
  double t8640;
  double t8641;
  double t8647;
  double t8656;
  double t8659;
  double t8666;
  double t8669;
  double t8673;
  double t8678;
  double t8679;
  double t8683;
  double t8718;
  double t8719;
  double t8725;
  double t8731;
  double t8733;
  double t8741;
  double t8742;
  double t8745;
  double t8746;
  double t8747;
  double t8749;
  double t8751;
  double t8752;
  double t8755;
  double t8756;
  double t8757;
  double t8761;
  double t8769;
  double t8771;
  double t8453;
  double t8461;
  double t8469;
  double t8497;
  double t8516;
  double t8530;
  double t8561;
  double t8594;
  double t8597;
  double t8603;
  double t8604;
  double t8609;
  double t8611;
  double t8614;
  double t8616;
  double t8618;
  double t4883;
  double t5033;
  double t5035;
  double t8858;
  double t8859;
  double t8862;
  double t8865;
  double t8866;
  double t8868;
  double t8823;
  double t8831;
  double t8832;
  double t8835;
  double t8836;
  double t8901;
  double t8903;
  double t8906;
  double t8908;
  double t8909;
  double t8910;
  double t8932;
  double t8933;
  double t8939;
  double t8941;
  double t8953;
  double t8956;
  double t8982;
  double t8983;
  double t8986;
  double t8992;
  double t8996;
  double t8998;
  double t9034;
  double t9039;
  double t9041;
  double t9044;
  double t9045;
  double t9047;
  double t9096;
  double t9098;
  double t9101;
  double t9106;
  double t9109;
  double t9112;
  double t9113;
  double t9114;
  double t9069;
  double t9072;
  double t9084;
  double t9085;
  double t9089;
  double t9146;
  double t9147;
  double t9149;
  double t9156;
  double t9158;
  double t9162;
  double t9165;
  double t9166;
  double t9167;
  double t9172;
  double t9173;
  double t9174;
  double t9179;
  double t9185;
  double t9186;
  double t9225;
  double t9226;
  double t9230;
  double t9235;
  double t9236;
  double t9237;
  double t9239;
  double t9240;
  double t9243;
  double t9245;
  double t9247;
  double t9248;
  double t9254;
  double t9258;
  double t9261;
  double t9333;
  double t9334;
  double t6520;
  double t9305;
  double t9307;
  double t9311;
  double t9316;
  double t9320;
  double t9378;
  double t9379;
  double t9380;
  double t9394;
  double t9397;
  double t9402;
  double t9405;
  double t9427;
  double t9432;
  double t9434;
  double t9439;
  double t9441;
  double t9445;
  double t9449;
  double t9339;
  double t6530;
  double t6570;
  double t9483;
  double t9484;
  double t9486;
  double t9487;
  double t9488;
  double t9407;
  double t9505;
  double t9507;
  double t9508;
  double t9418;
  double t9456;
  double t9528;
  double t9537;
  double t9541;
  double t9473;
  t649 = Cos(var1[5]);
  t704 = Sin(var1[3]);
  t725 = Sin(var1[4]);
  t577 = Cos(var1[3]);
  t785 = Sin(var1[5]);
  t42 = Cos(var1[6]);
  t652 = -1.*t577*t649;
  t826 = -1.*t704*t725*t785;
  t889 = t652 + t826;
  t1061 = -1.*t649*t704*t725;
  t1203 = t577*t785;
  t1213 = t1061 + t1203;
  t1266 = Sin(var1[6]);
  t1567 = Cos(var1[7]);
  t1586 = -1.*t1567;
  t1647 = 1. + t1586;
  t1675 = Sin(var1[7]);
  t1472 = t42*t889;
  t1526 = t1213*t1266;
  t1566 = t1472 + t1526;
  t1920 = Cos(var1[4]);
  t2409 = Cos(var1[8]);
  t2525 = -1.*t2409;
  t2542 = 1. + t2525;
  t2641 = Sin(var1[8]);
  t2270 = -1.*t1920*t1567*t704;
  t2363 = t1566*t1675;
  t2374 = t2270 + t2363;
  t2754 = t42*t1213;
  t2832 = -1.*t889*t1266;
  t2859 = t2754 + t2832;
  t3013 = Cos(var1[9]);
  t3017 = -1.*t3013;
  t3056 = 1. + t3017;
  t3080 = Sin(var1[9]);
  t3143 = t2409*t2374;
  t3198 = t2859*t2641;
  t3202 = t3143 + t3198;
  t3485 = t2409*t2859;
  t3523 = -1.*t2374*t2641;
  t3528 = t3485 + t3523;
  t3602 = Cos(var1[10]);
  t3663 = -1.*t3602;
  t3666 = 1. + t3663;
  t3694 = Sin(var1[10]);
  t3934 = -1.*t3080*t3202;
  t4006 = t3013*t3528;
  t4015 = t3934 + t4006;
  t4188 = t3013*t3202;
  t4201 = t3080*t3528;
  t4228 = t4188 + t4201;
  t52 = -1.*t42;
  t86 = 1. + t52;
  t415 = 0.135*t86;
  t456 = 0. + t415;
  t1347 = -0.135*t1266;
  t1447 = 0. + t1347;
  t4590 = -1.*t649*t704;
  t4619 = t577*t725*t785;
  t4623 = t4590 + t4619;
  t4633 = t577*t649*t725;
  t4635 = t704*t785;
  t4684 = t4633 + t4635;
  t1663 = 0.135*t1647;
  t1716 = 0.049*t1675;
  t1775 = 0. + t1663 + t1716;
  t1955 = -0.049*t1647;
  t2006 = 0.135*t1675;
  t2008 = 0. + t1955 + t2006;
  t4716 = t42*t4623;
  t4797 = t4684*t1266;
  t4811 = t4716 + t4797;
  t2612 = -0.049*t2542;
  t2666 = -0.09*t2641;
  t2732 = 0. + t2612 + t2666;
  t2901 = -0.09*t2542;
  t2964 = 0.049*t2641;
  t2966 = 0. + t2901 + t2964;
  t3077 = -0.049*t3056;
  t3098 = -0.21*t3080;
  t3102 = 0. + t3077 + t3098;
  t5144 = t577*t1920*t1567;
  t5159 = t4811*t1675;
  t5187 = t5144 + t5159;
  t5234 = t42*t4684;
  t5297 = -1.*t4623*t1266;
  t5312 = t5234 + t5297;
  t3432 = -0.21*t3056;
  t3462 = 0.049*t3080;
  t3463 = 0. + t3432 + t3462;
  t3682 = -0.2707*t3666;
  t3782 = 0.0016*t3694;
  t3892 = 0. + t3682 + t3782;
  t5335 = t2409*t5187;
  t5403 = t5312*t2641;
  t5430 = t5335 + t5403;
  t5476 = t2409*t5312;
  t5684 = -1.*t5187*t2641;
  t5775 = t5476 + t5684;
  t4056 = -0.0016*t3666;
  t4111 = -0.2707*t3694;
  t4131 = 0. + t4056 + t4111;
  t5918 = -1.*t3080*t5430;
  t5920 = t3013*t5775;
  t5950 = t5918 + t5920;
  t5985 = t3013*t5430;
  t6182 = t3080*t5775;
  t6356 = t5985 + t6182;
  t6712 = t577*t1920*t42*t785;
  t6721 = t577*t1920*t649*t1266;
  t6724 = t6712 + t6721;
  t6903 = -1.*t577*t1567*t725;
  t6918 = t6724*t1675;
  t6922 = t6903 + t6918;
  t6927 = t577*t1920*t649*t42;
  t6955 = -1.*t577*t1920*t785*t1266;
  t6960 = t6927 + t6955;
  t7039 = t2409*t6922;
  t7041 = t6960*t2641;
  t7052 = t7039 + t7041;
  t7104 = t2409*t6960;
  t7113 = -1.*t6922*t2641;
  t7127 = t7104 + t7113;
  t7145 = -1.*t3080*t7052;
  t7150 = t3013*t7127;
  t7169 = t7145 + t7150;
  t7196 = t3013*t7052;
  t7200 = t3080*t7127;
  t7209 = t7196 + t7200;
  t7438 = t1920*t42*t704*t785;
  t7442 = t1920*t649*t704*t1266;
  t7459 = t7438 + t7442;
  t7545 = -1.*t1567*t704*t725;
  t7547 = t7459*t1675;
  t7554 = t7545 + t7547;
  t7576 = t1920*t649*t42*t704;
  t7578 = -1.*t1920*t704*t785*t1266;
  t7584 = t7576 + t7578;
  t7593 = t2409*t7554;
  t7627 = t7584*t2641;
  t7634 = t7593 + t7627;
  t7658 = t2409*t7584;
  t7677 = -1.*t7554*t2641;
  t7720 = t7658 + t7677;
  t7733 = -1.*t3080*t7634;
  t7739 = t3013*t7720;
  t7740 = t7733 + t7739;
  t7749 = t3013*t7634;
  t7790 = t3080*t7720;
  t7814 = t7749 + t7790;
  t7923 = -1.*t42*t725*t785;
  t7931 = -1.*t649*t725*t1266;
  t7936 = t7923 + t7931;
  t8017 = -1.*t1920*t1567;
  t8019 = t7936*t1675;
  t8034 = t8017 + t8019;
  t8041 = -1.*t649*t42*t725;
  t8044 = t725*t785*t1266;
  t8048 = t8041 + t8044;
  t8056 = t2409*t8034;
  t8060 = t8048*t2641;
  t8070 = t8056 + t8060;
  t8080 = t2409*t8048;
  t8084 = -1.*t8034*t2641;
  t8085 = t8080 + t8084;
  t8088 = -1.*t3080*t8070;
  t8090 = t3013*t8085;
  t8091 = t8088 + t8090;
  t8096 = t3013*t8070;
  t8097 = t3080*t8085;
  t8102 = t8096 + t8097;
  t8153 = t649*t704;
  t8158 = -1.*t577*t725*t785;
  t8161 = t8153 + t8158;
  t8166 = t8161*t1266;
  t8172 = t5234 + t8166;
  t8185 = t42*t8161;
  t8195 = -1.*t4684*t1266;
  t8198 = t8185 + t8195;
  t8219 = t2409*t8172*t1675;
  t8221 = t8198*t2641;
  t8222 = t8219 + t8221;
  t8228 = t2409*t8198;
  t8230 = -1.*t8172*t1675*t2641;
  t8231 = t8228 + t8230;
  t8233 = -1.*t3080*t8222;
  t8234 = t3013*t8231;
  t8237 = t8233 + t8234;
  t8239 = t3013*t8222;
  t8242 = t3080*t8231;
  t8243 = t8239 + t8242;
  t8289 = t649*t704*t725;
  t8293 = -1.*t577*t785;
  t8297 = t8289 + t8293;
  t8308 = t42*t8297;
  t8310 = t889*t1266;
  t8314 = t8308 + t8310;
  t8335 = -1.*t8297*t1266;
  t8336 = t1472 + t8335;
  t8345 = t2409*t8314*t1675;
  t8352 = t8336*t2641;
  t8353 = t8345 + t8352;
  t8359 = t2409*t8336;
  t8360 = -1.*t8314*t1675*t2641;
  t8362 = t8359 + t8360;
  t8367 = -1.*t3080*t8353;
  t8368 = t3013*t8362;
  t8369 = t8367 + t8368;
  t8375 = t3013*t8353;
  t8379 = t3080*t8362;
  t8380 = t8375 + t8379;
  t8436 = t1920*t649*t42;
  t8448 = -1.*t1920*t785*t1266;
  t8452 = t8436 + t8448;
  t8471 = -1.*t1920*t42*t785;
  t8475 = -1.*t1920*t649*t1266;
  t8496 = t8471 + t8475;
  t8510 = t2409*t8452*t1675;
  t8513 = t8496*t2641;
  t8514 = t8510 + t8513;
  t8518 = t2409*t8496;
  t8519 = -1.*t8452*t1675*t2641;
  t8529 = t8518 + t8519;
  t8532 = -1.*t3080*t8514;
  t8536 = t3013*t8529;
  t8552 = t8532 + t8536;
  t8566 = t3013*t8514;
  t8581 = t3080*t8529;
  t8586 = t8566 + t8581;
  t8635 = -1.*t42*t4623;
  t8636 = t8635 + t8195;
  t8639 = t2409*t5312*t1675;
  t8640 = t8636*t2641;
  t8641 = t8639 + t8640;
  t8647 = t2409*t8636;
  t8656 = -1.*t5312*t1675*t2641;
  t8659 = t8647 + t8656;
  t8666 = -1.*t3080*t8641;
  t8669 = t3013*t8659;
  t8673 = t8666 + t8669;
  t8678 = t3013*t8641;
  t8679 = t3080*t8659;
  t8683 = t8678 + t8679;
  t8718 = t577*t649;
  t8719 = t704*t725*t785;
  t8725 = t8718 + t8719;
  t8731 = -1.*t8725*t1266;
  t8733 = t8308 + t8731;
  t8741 = -1.*t42*t8725;
  t8742 = t8741 + t8335;
  t8745 = t2409*t8733*t1675;
  t8746 = t8742*t2641;
  t8747 = t8745 + t8746;
  t8749 = t2409*t8742;
  t8751 = -1.*t8733*t1675*t2641;
  t8752 = t8749 + t8751;
  t8755 = -1.*t3080*t8747;
  t8756 = t3013*t8752;
  t8757 = t8755 + t8756;
  t8761 = t3013*t8747;
  t8769 = t3080*t8752;
  t8771 = t8761 + t8769;
  t8453 = 0.1305*t1567*t8452;
  t8461 = t8452*t1775;
  t8469 = t8452*t1675*t2732;
  t8497 = t8496*t2966;
  t8516 = t3102*t8514;
  t8530 = t3463*t8529;
  t8561 = t3892*t8552;
  t8594 = t4131*t8586;
  t8597 = t3694*t8552;
  t8603 = t3602*t8586;
  t8604 = t8597 + t8603;
  t8609 = -0.0016*t8604;
  t8611 = t3602*t8552;
  t8614 = -1.*t3694*t8586;
  t8616 = t8611 + t8614;
  t8618 = -0.2707*t8616;
  t4883 = t1567*t4811;
  t5033 = -1.*t577*t1920*t1675;
  t5035 = t4883 + t5033;
  t8858 = -1.*t2409*t3080*t5035;
  t8859 = -1.*t3013*t5035*t2641;
  t8862 = t8858 + t8859;
  t8865 = t3013*t2409*t5035;
  t8866 = -1.*t3080*t5035*t2641;
  t8868 = t8865 + t8866;
  t8823 = 0.135*t1567;
  t8831 = -0.049*t1675;
  t8832 = t8823 + t8831;
  t8835 = 0.049*t1567;
  t8836 = t8835 + t2006;
  t8901 = t42*t8725;
  t8903 = t8297*t1266;
  t8906 = t8901 + t8903;
  t8908 = t1567*t8906;
  t8909 = -1.*t1920*t704*t1675;
  t8910 = t8908 + t8909;
  t8932 = -1.*t2409*t3080*t8910;
  t8933 = -1.*t3013*t8910*t2641;
  t8939 = t8932 + t8933;
  t8941 = t3013*t2409*t8910;
  t8953 = -1.*t3080*t8910*t2641;
  t8956 = t8941 + t8953;
  t8982 = t1920*t42*t785;
  t8983 = t1920*t649*t1266;
  t8986 = t8982 + t8983;
  t8992 = t1567*t8986;
  t8996 = t725*t1675;
  t8998 = t8992 + t8996;
  t9034 = -1.*t2409*t3080*t8998;
  t9039 = -1.*t3013*t8998*t2641;
  t9041 = t9034 + t9039;
  t9044 = t3013*t2409*t8998;
  t9045 = -1.*t3080*t8998*t2641;
  t9047 = t9044 + t9045;
  t9096 = -1.*t2409*t5187;
  t9098 = -1.*t5312*t2641;
  t9101 = t9096 + t9098;
  t9106 = t3080*t9101;
  t9109 = t9106 + t5920;
  t9112 = t3013*t9101;
  t9113 = -1.*t3080*t5775;
  t9114 = t9112 + t9113;
  t9069 = 0.049*t2409;
  t9072 = t9069 + t2666;
  t9084 = -0.09*t2409;
  t9085 = -0.049*t2641;
  t9089 = t9084 + t9085;
  t9146 = t1920*t1567*t704;
  t9147 = t8906*t1675;
  t9149 = t9146 + t9147;
  t9156 = -1.*t2409*t9149;
  t9158 = -1.*t8733*t2641;
  t9162 = t9156 + t9158;
  t9165 = t2409*t8733;
  t9166 = -1.*t9149*t2641;
  t9167 = t9165 + t9166;
  t9172 = t3080*t9162;
  t9173 = t3013*t9167;
  t9174 = t9172 + t9173;
  t9179 = t3013*t9162;
  t9185 = -1.*t3080*t9167;
  t9186 = t9179 + t9185;
  t9225 = -1.*t1567*t725;
  t9226 = t8986*t1675;
  t9230 = t9225 + t9226;
  t9235 = -1.*t2409*t9230;
  t9236 = -1.*t8452*t2641;
  t9237 = t9235 + t9236;
  t9239 = t2409*t8452;
  t9240 = -1.*t9230*t2641;
  t9243 = t9239 + t9240;
  t9245 = t3080*t9237;
  t9247 = t3013*t9243;
  t9248 = t9245 + t9247;
  t9254 = t3013*t9237;
  t9258 = -1.*t3080*t9243;
  t9261 = t9254 + t9258;
  t9333 = -1.*t3013*t5430;
  t9334 = t9333 + t9113;
  t6520 = t3602*t5950;
  t9305 = -0.21*t3013;
  t9307 = -0.049*t3080;
  t9311 = t9305 + t9307;
  t9316 = 0.049*t3013;
  t9320 = t9316 + t3098;
  t9378 = t2409*t9149;
  t9379 = t8733*t2641;
  t9380 = t9378 + t9379;
  t9394 = -1.*t3080*t9380;
  t9397 = t9394 + t9173;
  t9402 = -1.*t3013*t9380;
  t9405 = t9402 + t9185;
  t9427 = t2409*t9230;
  t9432 = t8452*t2641;
  t9434 = t9427 + t9432;
  t9439 = -1.*t3080*t9434;
  t9441 = t9439 + t9247;
  t9445 = -1.*t3013*t9434;
  t9449 = t9445 + t9258;
  t9339 = -1.*t3694*t5950;
  t6530 = -1.*t3694*t6356;
  t6570 = t6520 + t6530;
  t9483 = 0.0016*t3602;
  t9484 = t9483 + t4111;
  t9486 = -0.2707*t3602;
  t9487 = -0.0016*t3694;
  t9488 = t9486 + t9487;
  t9407 = -1.*t3694*t9397;
  t9505 = t3013*t9380;
  t9507 = t3080*t9167;
  t9508 = t9505 + t9507;
  t9418 = t3602*t9397;
  t9456 = -1.*t3694*t9441;
  t9528 = t3013*t9434;
  t9537 = t3080*t9243;
  t9541 = t9528 + t9537;
  t9473 = t3602*t9441;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1213*t1447 + t1566*t1775 + t2374*t2732 + t2859*t2966 + t3102*t3202 + t3463*t3528 + t3892*t4015 + t4131*t4228 - 0.0016*(t3694*t4015 + t3602*t4228) - 0.2707*(t3602*t4015 - 1.*t3694*t4228) - 1.*t1920*t2008*t704 + 0.1305*(t1566*t1567 + t1675*t1920*t704) + t456*t889;
  p_output1[10]=t456*t4623 + t1447*t4684 + t1775*t4811 + 0.1305*t5035 + t2732*t5187 + t2966*t5312 + t3102*t5430 + t1920*t2008*t577 + t3463*t5775 + t3892*t5950 + t4131*t6356 - 0.0016*(t3694*t5950 + t3602*t6356) - 0.2707*t6570;
  p_output1[11]=0;
  p_output1[12]=t1447*t1920*t577*t649 + t1775*t6724 + t2732*t6922 + t2966*t6960 + t3102*t7052 + t3463*t7127 + t3892*t7169 + t4131*t7209 - 0.0016*(t3694*t7169 + t3602*t7209) - 0.2707*(t3602*t7169 - 1.*t3694*t7209) - 1.*t2008*t577*t725 + 0.1305*(t1567*t6724 + t1675*t577*t725) + t1920*t456*t577*t785;
  p_output1[13]=t1447*t1920*t649*t704 - 1.*t2008*t704*t725 + t1775*t7459 + 0.1305*(t1675*t704*t725 + t1567*t7459) + t2732*t7554 + t2966*t7584 + t3102*t7634 + t3463*t7720 + t3892*t7740 + t4131*t7814 - 0.0016*(t3694*t7740 + t3602*t7814) - 0.2707*(t3602*t7740 - 1.*t3694*t7814) + t1920*t456*t704*t785;
  p_output1[14]=-1.*t1920*t2008 - 1.*t1447*t649*t725 - 1.*t456*t725*t785 + t1775*t7936 + 0.1305*(t1675*t1920 + t1567*t7936) + t2732*t8034 + t2966*t8048 + t3102*t8070 + t3463*t8085 + t3892*t8091 + t4131*t8102 - 0.0016*(t3694*t8091 + t3602*t8102) - 0.2707*(t3602*t8091 - 1.*t3694*t8102);
  p_output1[15]=t456*t4684 + t1447*t8161 + 0.1305*t1567*t8172 + t1775*t8172 + t1675*t2732*t8172 + t2966*t8198 + t3102*t8222 + t3463*t8231 + t3892*t8237 + t4131*t8243 - 0.0016*(t3694*t8237 + t3602*t8243) - 0.2707*(t3602*t8237 - 1.*t3694*t8243);
  p_output1[16]=t456*t8297 + 0.1305*t1567*t8314 + t1775*t8314 + t1675*t2732*t8314 + t2966*t8336 + t3102*t8353 + t3463*t8362 + t3892*t8369 + t4131*t8380 - 0.0016*(t3694*t8369 + t3602*t8380) - 0.2707*(t3602*t8369 - 1.*t3694*t8380) + t1447*t889;
  p_output1[17]=t1920*t456*t649 - 1.*t1447*t1920*t785 + t8453 + t8461 + t8469 + t8497 + t8516 + t8530 + t8561 + t8594 + t8609 + t8618;
  p_output1[18]=0.135*t1266*t4623 - 0.135*t42*t4684 + 0.1305*t1567*t5312 + t1775*t5312 + t1675*t2732*t5312 + t2966*t8636 + t3102*t8641 + t3463*t8659 + t3892*t8673 + t4131*t8683 - 0.0016*(t3694*t8673 + t3602*t8683) - 0.2707*(t3602*t8673 - 1.*t3694*t8683);
  p_output1[19]=-0.135*t42*t8297 + 0.135*t1266*t8725 + 0.1305*t1567*t8733 + t1775*t8733 + t1675*t2732*t8733 + t2966*t8742 + t3102*t8747 + t3463*t8752 + t3892*t8757 + t4131*t8771 - 0.0016*(t3694*t8757 + t3602*t8771) - 0.2707*(t3602*t8757 - 1.*t3694*t8771);
  p_output1[20]=-0.135*t1920*t42*t649 + 0.135*t1266*t1920*t785 + t8453 + t8461 + t8469 + t8497 + t8516 + t8530 + t8561 + t8594 + t8609 + t8618;
  p_output1[21]=t2732*t5035 + t2409*t3102*t5035 - 1.*t2641*t3463*t5035 + 0.1305*(-1.*t1675*t4811 - 1.*t1567*t1920*t577) + t1920*t577*t8832 + t4811*t8836 + t3892*t8862 + t4131*t8868 - 0.0016*(t3694*t8862 + t3602*t8868) - 0.2707*(t3602*t8862 - 1.*t3694*t8868);
  p_output1[22]=t1920*t704*t8832 + t8836*t8906 + 0.1305*(t2270 - 1.*t1675*t8906) + t2732*t8910 + t2409*t3102*t8910 - 1.*t2641*t3463*t8910 + t3892*t8939 + t4131*t8956 - 0.0016*(t3694*t8939 + t3602*t8956) - 0.2707*(t3602*t8939 - 1.*t3694*t8956);
  p_output1[23]=-1.*t725*t8832 + t8836*t8986 + 0.1305*(t1567*t725 - 1.*t1675*t8986) + t2732*t8998 + t2409*t3102*t8998 - 1.*t2641*t3463*t8998 + t3892*t9041 + t4131*t9047 - 0.0016*(t3694*t9041 + t3602*t9047) - 0.2707*(t3602*t9041 - 1.*t3694*t9047);
  p_output1[24]=t3102*t5775 + t5312*t9072 + t5187*t9089 + t3463*t9101 + t4131*t9109 + t3892*t9114 - 0.2707*(-1.*t3694*t9109 + t3602*t9114) - 0.0016*(t3602*t9109 + t3694*t9114);
  p_output1[25]=t8733*t9072 + t9089*t9149 + t3463*t9162 + t3102*t9167 + t4131*t9174 + t3892*t9186 - 0.2707*(-1.*t3694*t9174 + t3602*t9186) - 0.0016*(t3602*t9174 + t3694*t9186);
  p_output1[26]=t8452*t9072 + t9089*t9230 + t3463*t9237 + t3102*t9243 + t4131*t9248 + t3892*t9261 - 0.2707*(-1.*t3694*t9248 + t3602*t9261) - 0.0016*(t3602*t9248 + t3694*t9261);
  p_output1[27]=t4131*t5950 + t5430*t9311 + t5775*t9320 + t3892*t9334 - 0.0016*(t6520 + t3694*t9334) - 0.2707*(t3602*t9334 + t9339);
  p_output1[28]=t9167*t9320 + t9311*t9380 + t4131*t9397 + t3892*t9405 - 0.2707*(t3602*t9405 + t9407) - 0.0016*(t3694*t9405 + t9418);
  p_output1[29]=t9243*t9320 + t9311*t9434 + t4131*t9441 + t3892*t9449 - 0.2707*(t3602*t9449 + t9456) - 0.0016*(t3694*t9449 + t9473);
  p_output1[30]=-0.0016*t6570 - 0.2707*(-1.*t3602*t6356 + t9339) + t5950*t9484 + t6356*t9488;
  p_output1[31]=t9397*t9484 + t9488*t9508 - 0.2707*(t9407 - 1.*t3602*t9508) - 0.0016*(t9418 - 1.*t3694*t9508);
  p_output1[32]=t9441*t9484 + t9488*t9541 - 0.2707*(t9456 - 1.*t3602*t9541) - 0.0016*(t9473 - 1.*t3694*t9541);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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



void Jp_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}