/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:50:06 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_knee_to_shin_right_src.h"

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
  double t621;
  double t963;
  double t857;
  double t951;
  double t1010;
  double t260;
  double t281;
  double t457;
  double t495;
  double t701;
  double t958;
  double t1086;
  double t1103;
  double t1158;
  double t1396;
  double t1410;
  double t1487;
  double t51;
  double t1681;
  double t1692;
  double t1703;
  double t1775;
  double t1832;
  double t1836;
  double t1893;
  double t2018;
  double t2025;
  double t2043;
  double t2252;
  double t2270;
  double t2389;
  double t2519;
  double t2653;
  double t2699;
  double t2858;
  double t2988;
  double t3021;
  double t3212;
  double t3355;
  double t3382;
  double t3383;
  double t3399;
  double t3478;
  double t3479;
  double t3549;
  double t3633;
  double t3735;
  double t3779;
  double t3949;
  double t3963;
  double t3976;
  double t474;
  double t538;
  double t581;
  double t748;
  double t791;
  double t1194;
  double t1255;
  double t1329;
  double t1363;
  double t1562;
  double t1564;
  double t1606;
  double t4457;
  double t4467;
  double t4600;
  double t4747;
  double t4779;
  double t4789;
  double t1876;
  double t2016;
  double t2017;
  double t4894;
  double t4903;
  double t4930;
  double t2201;
  double t2218;
  double t2228;
  double t2714;
  double t2892;
  double t2975;
  double t5021;
  double t5132;
  double t5175;
  double t5396;
  double t5404;
  double t5491;
  double t3332;
  double t3340;
  double t3341;
  double t3526;
  double t3585;
  double t3605;
  double t5509;
  double t5519;
  double t5530;
  double t5553;
  double t5636;
  double t5651;
  double t3871;
  double t3874;
  double t3886;
  double t5665;
  double t5670;
  double t5672;
  double t5689;
  double t5691;
  double t5695;
  double t5956;
  double t6041;
  double t6048;
  double t6104;
  double t6130;
  double t6136;
  double t6319;
  double t6334;
  double t6337;
  double t6390;
  double t6417;
  double t6421;
  double t6444;
  double t6445;
  double t6461;
  double t6482;
  double t6485;
  double t6511;
  double t6557;
  double t6568;
  double t6571;
  double t6829;
  double t6853;
  double t6865;
  double t6895;
  double t6903;
  double t6904;
  double t6988;
  double t6992;
  double t7021;
  double t7083;
  double t7096;
  double t7103;
  double t7143;
  double t7151;
  double t7153;
  double t7162;
  double t7167;
  double t7175;
  double t7212;
  double t7228;
  double t7256;
  double t7430;
  double t7461;
  double t7468;
  double t7484;
  double t7486;
  double t7489;
  double t7639;
  double t7641;
  double t7661;
  double t7679;
  double t7699;
  double t7704;
  double t7731;
  double t7738;
  double t7743;
  double t7766;
  double t7772;
  double t7776;
  double t7804;
  double t7810;
  double t7820;
  double t7878;
  double t7893;
  double t7903;
  double t7962;
  double t7963;
  double t7925;
  double t7927;
  double t7944;
  double t7983;
  double t7986;
  double t7987;
  double t8009;
  double t8010;
  double t8012;
  double t8014;
  double t8023;
  double t8067;
  double t8085;
  double t8087;
  double t8099;
  double t8207;
  double t8223;
  double t8239;
  double t8296;
  double t8298;
  double t8305;
  double t8281;
  double t8286;
  double t8335;
  double t8344;
  double t8345;
  double t8382;
  double t8406;
  double t8412;
  double t8436;
  double t8446;
  double t8448;
  double t8476;
  double t8486;
  double t8492;
  double t8632;
  double t8634;
  double t8642;
  double t8602;
  double t8617;
  double t8621;
  double t8704;
  double t8709;
  double t8717;
  double t8723;
  double t8730;
  double t8738;
  double t8740;
  double t8751;
  double t8754;
  double t8766;
  double t8773;
  double t8775;
  double t8824;
  double t8863;
  double t8906;
  double t8916;
  double t8937;
  double t8951;
  double t8953;
  double t8954;
  double t8961;
  double t8965;
  double t8966;
  double t8978;
  double t8979;
  double t8981;
  double t9077;
  double t9082;
  double t9085;
  double t9125;
  double t9127;
  double t9096;
  double t9108;
  double t9143;
  double t9144;
  double t9150;
  double t9152;
  double t9153;
  double t9161;
  double t9181;
  double t9193;
  double t9205;
  double t9237;
  double t9246;
  double t9265;
  double t8629;
  double t8655;
  double t8679;
  double t8688;
  double t8720;
  double t8739;
  double t8759;
  double t8776;
  double t8779;
  double t8781;
  double t8792;
  double t8805;
  double t8806;
  double t8807;
  double t8810;
  double t8819;
  double t5342;
  double t5348;
  double t5362;
  double t9445;
  double t9452;
  double t9460;
  double t9475;
  double t9490;
  double t9491;
  double t9357;
  double t9363;
  double t9364;
  double t9375;
  double t9376;
  double t9526;
  double t9531;
  double t9533;
  double t9547;
  double t9548;
  double t9551;
  double t9586;
  double t9589;
  double t9593;
  double t9602;
  double t9611;
  double t9617;
  double t9678;
  double t9679;
  double t9680;
  double t9692;
  double t9695;
  double t9697;
  double t9745;
  double t9746;
  double t9747;
  double t9764;
  double t9767;
  double t9768;
  double t9853;
  double t9855;
  double t9860;
  double t9869;
  double t9878;
  double t9889;
  double t9890;
  double t9891;
  double t9813;
  double t9831;
  double t9845;
  double t9846;
  double t9847;
  double t9950;
  double t9953;
  double t9954;
  double t9957;
  double t9958;
  double t9969;
  double t9974;
  double t9984;
  double t9986;
  double t9994;
  double t9995;
  double t9999;
  double t10007;
  double t10008;
  double t10009;
  double t10073;
  double t10076;
  double t10078;
  double t10093;
  double t10095;
  double t10099;
  double t10102;
  double t10103;
  double t10104;
  double t10112;
  double t10113;
  double t10115;
  double t10130;
  double t10131;
  double t10132;
  double t10208;
  double t10212;
  double t5796;
  double t10185;
  double t10189;
  double t10190;
  double t10195;
  double t10198;
  double t10244;
  double t10247;
  double t10256;
  double t10268;
  double t10271;
  double t10275;
  double t10277;
  double t10308;
  double t10312;
  double t10313;
  double t10319;
  double t10320;
  double t10331;
  double t10339;
  double t10214;
  double t5811;
  double t5815;
  double t10372;
  double t10375;
  double t10386;
  double t10387;
  double t10398;
  double t10284;
  double t10423;
  double t10425;
  double t10429;
  double t10293;
  double t10348;
  double t10448;
  double t10451;
  double t10453;
  double t10362;
  t621 = Sin(var1[3]);
  t963 = Cos(var1[3]);
  t857 = Cos(var1[5]);
  t951 = Sin(var1[4]);
  t1010 = Sin(var1[5]);
  t260 = Cos(var1[14]);
  t281 = -1.*t260;
  t457 = 1. + t281;
  t495 = Sin(var1[14]);
  t701 = Sin(var1[13]);
  t958 = -1.*t857*t621*t951;
  t1086 = t963*t1010;
  t1103 = t958 + t1086;
  t1158 = Cos(var1[13]);
  t1396 = -1.*t963*t857;
  t1410 = -1.*t621*t951*t1010;
  t1487 = t1396 + t1410;
  t51 = Cos(var1[4]);
  t1681 = t701*t1103;
  t1692 = t1158*t1487;
  t1703 = t1681 + t1692;
  t1775 = Cos(var1[15]);
  t1832 = -1.*t1775;
  t1836 = 1. + t1832;
  t1893 = Sin(var1[15]);
  t2018 = t1158*t1103;
  t2025 = -1.*t701*t1487;
  t2043 = t2018 + t2025;
  t2252 = -1.*t260*t51*t621;
  t2270 = t495*t1703;
  t2389 = t2252 + t2270;
  t2519 = Cos(var1[16]);
  t2653 = -1.*t2519;
  t2699 = 1. + t2653;
  t2858 = Sin(var1[16]);
  t2988 = t1893*t2043;
  t3021 = t1775*t2389;
  t3212 = t2988 + t3021;
  t3355 = t1775*t2043;
  t3382 = -1.*t1893*t2389;
  t3383 = t3355 + t3382;
  t3399 = Cos(var1[17]);
  t3478 = -1.*t3399;
  t3479 = 1. + t3478;
  t3549 = Sin(var1[17]);
  t3633 = -1.*t2858*t3212;
  t3735 = t2519*t3383;
  t3779 = t3633 + t3735;
  t3949 = t2519*t3212;
  t3963 = t2858*t3383;
  t3976 = t3949 + t3963;
  t474 = -0.049*t457;
  t538 = -0.135*t495;
  t581 = 0. + t474 + t538;
  t748 = 0.135*t701;
  t791 = 0. + t748;
  t1194 = -1.*t1158;
  t1255 = 1. + t1194;
  t1329 = -0.135*t1255;
  t1363 = 0. + t1329;
  t1562 = -0.135*t457;
  t1564 = 0.049*t495;
  t1606 = 0. + t1562 + t1564;
  t4457 = t963*t857*t951;
  t4467 = t621*t1010;
  t4600 = t4457 + t4467;
  t4747 = -1.*t857*t621;
  t4779 = t963*t951*t1010;
  t4789 = t4747 + t4779;
  t1876 = -0.09*t1836;
  t2016 = 0.049*t1893;
  t2017 = 0. + t1876 + t2016;
  t4894 = t701*t4600;
  t4903 = t1158*t4789;
  t4930 = t4894 + t4903;
  t2201 = -0.049*t1836;
  t2218 = -0.09*t1893;
  t2228 = 0. + t2201 + t2218;
  t2714 = -0.049*t2699;
  t2892 = -0.21*t2858;
  t2975 = 0. + t2714 + t2892;
  t5021 = t1158*t4600;
  t5132 = -1.*t701*t4789;
  t5175 = t5021 + t5132;
  t5396 = t260*t963*t51;
  t5404 = t495*t4930;
  t5491 = t5396 + t5404;
  t3332 = -0.21*t2699;
  t3340 = 0.049*t2858;
  t3341 = 0. + t3332 + t3340;
  t3526 = -0.2707*t3479;
  t3585 = 0.0016*t3549;
  t3605 = 0. + t3526 + t3585;
  t5509 = t1893*t5175;
  t5519 = t1775*t5491;
  t5530 = t5509 + t5519;
  t5553 = t1775*t5175;
  t5636 = -1.*t1893*t5491;
  t5651 = t5553 + t5636;
  t3871 = -0.0016*t3479;
  t3874 = -0.2707*t3549;
  t3886 = 0. + t3871 + t3874;
  t5665 = -1.*t2858*t5530;
  t5670 = t2519*t5651;
  t5672 = t5665 + t5670;
  t5689 = t2519*t5530;
  t5691 = t2858*t5651;
  t5695 = t5689 + t5691;
  t5956 = t963*t51*t857*t701;
  t6041 = t1158*t963*t51*t1010;
  t6048 = t5956 + t6041;
  t6104 = t1158*t963*t51*t857;
  t6130 = -1.*t963*t51*t701*t1010;
  t6136 = t6104 + t6130;
  t6319 = -1.*t260*t963*t951;
  t6334 = t495*t6048;
  t6337 = t6319 + t6334;
  t6390 = t1893*t6136;
  t6417 = t1775*t6337;
  t6421 = t6390 + t6417;
  t6444 = t1775*t6136;
  t6445 = -1.*t1893*t6337;
  t6461 = t6444 + t6445;
  t6482 = -1.*t2858*t6421;
  t6485 = t2519*t6461;
  t6511 = t6482 + t6485;
  t6557 = t2519*t6421;
  t6568 = t2858*t6461;
  t6571 = t6557 + t6568;
  t6829 = t51*t857*t701*t621;
  t6853 = t1158*t51*t621*t1010;
  t6865 = t6829 + t6853;
  t6895 = t1158*t51*t857*t621;
  t6903 = -1.*t51*t701*t621*t1010;
  t6904 = t6895 + t6903;
  t6988 = -1.*t260*t621*t951;
  t6992 = t495*t6865;
  t7021 = t6988 + t6992;
  t7083 = t1893*t6904;
  t7096 = t1775*t7021;
  t7103 = t7083 + t7096;
  t7143 = t1775*t6904;
  t7151 = -1.*t1893*t7021;
  t7153 = t7143 + t7151;
  t7162 = -1.*t2858*t7103;
  t7167 = t2519*t7153;
  t7175 = t7162 + t7167;
  t7212 = t2519*t7103;
  t7228 = t2858*t7153;
  t7256 = t7212 + t7228;
  t7430 = -1.*t857*t701*t951;
  t7461 = -1.*t1158*t951*t1010;
  t7468 = t7430 + t7461;
  t7484 = -1.*t1158*t857*t951;
  t7486 = t701*t951*t1010;
  t7489 = t7484 + t7486;
  t7639 = -1.*t260*t51;
  t7641 = t495*t7468;
  t7661 = t7639 + t7641;
  t7679 = t1893*t7489;
  t7699 = t1775*t7661;
  t7704 = t7679 + t7699;
  t7731 = t1775*t7489;
  t7738 = -1.*t1893*t7661;
  t7743 = t7731 + t7738;
  t7766 = -1.*t2858*t7704;
  t7772 = t2519*t7743;
  t7776 = t7766 + t7772;
  t7804 = t2519*t7704;
  t7810 = t2858*t7743;
  t7820 = t7804 + t7810;
  t7878 = t857*t621;
  t7893 = -1.*t963*t951*t1010;
  t7903 = t7878 + t7893;
  t7962 = t701*t7903;
  t7963 = t5021 + t7962;
  t7925 = -1.*t701*t4600;
  t7927 = t1158*t7903;
  t7944 = t7925 + t7927;
  t7983 = t1893*t7944;
  t7986 = t1775*t495*t7963;
  t7987 = t7983 + t7986;
  t8009 = t1775*t7944;
  t8010 = -1.*t495*t1893*t7963;
  t8012 = t8009 + t8010;
  t8014 = -1.*t2858*t7987;
  t8023 = t2519*t8012;
  t8067 = t8014 + t8023;
  t8085 = t2519*t7987;
  t8087 = t2858*t8012;
  t8099 = t8085 + t8087;
  t8207 = t857*t621*t951;
  t8223 = -1.*t963*t1010;
  t8239 = t8207 + t8223;
  t8296 = t1158*t8239;
  t8298 = t701*t1487;
  t8305 = t8296 + t8298;
  t8281 = -1.*t701*t8239;
  t8286 = t8281 + t1692;
  t8335 = t1893*t8286;
  t8344 = t1775*t495*t8305;
  t8345 = t8335 + t8344;
  t8382 = t1775*t8286;
  t8406 = -1.*t495*t1893*t8305;
  t8412 = t8382 + t8406;
  t8436 = -1.*t2858*t8345;
  t8446 = t2519*t8412;
  t8448 = t8436 + t8446;
  t8476 = t2519*t8345;
  t8486 = t2858*t8412;
  t8492 = t8476 + t8486;
  t8632 = t1158*t51*t857;
  t8634 = -1.*t51*t701*t1010;
  t8642 = t8632 + t8634;
  t8602 = -1.*t51*t857*t701;
  t8617 = -1.*t1158*t51*t1010;
  t8621 = t8602 + t8617;
  t8704 = t1893*t8621;
  t8709 = t1775*t495*t8642;
  t8717 = t8704 + t8709;
  t8723 = t1775*t8621;
  t8730 = -1.*t495*t1893*t8642;
  t8738 = t8723 + t8730;
  t8740 = -1.*t2858*t8717;
  t8751 = t2519*t8738;
  t8754 = t8740 + t8751;
  t8766 = t2519*t8717;
  t8773 = t2858*t8738;
  t8775 = t8766 + t8773;
  t8824 = -1.*t1158*t4789;
  t8863 = t7925 + t8824;
  t8906 = t1893*t8863;
  t8916 = t1775*t495*t5175;
  t8937 = t8906 + t8916;
  t8951 = t1775*t8863;
  t8953 = -1.*t495*t1893*t5175;
  t8954 = t8951 + t8953;
  t8961 = -1.*t2858*t8937;
  t8965 = t2519*t8954;
  t8966 = t8961 + t8965;
  t8978 = t2519*t8937;
  t8979 = t2858*t8954;
  t8981 = t8978 + t8979;
  t9077 = t963*t857;
  t9082 = t621*t951*t1010;
  t9085 = t9077 + t9082;
  t9125 = -1.*t701*t9085;
  t9127 = t8296 + t9125;
  t9096 = -1.*t1158*t9085;
  t9108 = t8281 + t9096;
  t9143 = t1893*t9108;
  t9144 = t1775*t495*t9127;
  t9150 = t9143 + t9144;
  t9152 = t1775*t9108;
  t9153 = -1.*t495*t1893*t9127;
  t9161 = t9152 + t9153;
  t9181 = -1.*t2858*t9150;
  t9193 = t2519*t9161;
  t9205 = t9181 + t9193;
  t9237 = t2519*t9150;
  t9246 = t2858*t9161;
  t9265 = t9237 + t9246;
  t8629 = t2017*t8621;
  t8655 = -0.1305*t260*t8642;
  t8679 = t1606*t8642;
  t8688 = t495*t2228*t8642;
  t8720 = t2975*t8717;
  t8739 = t3341*t8738;
  t8759 = t3605*t8754;
  t8776 = t3886*t8775;
  t8779 = t3549*t8754;
  t8781 = t3399*t8775;
  t8792 = t8779 + t8781;
  t8805 = -0.0016*t8792;
  t8806 = t3399*t8754;
  t8807 = -1.*t3549*t8775;
  t8810 = t8806 + t8807;
  t8819 = -0.2707*t8810;
  t5342 = -1.*t963*t51*t495;
  t5348 = t260*t4930;
  t5362 = t5342 + t5348;
  t9445 = -1.*t2519*t1893*t5362;
  t9452 = -1.*t1775*t2858*t5362;
  t9460 = t9445 + t9452;
  t9475 = t1775*t2519*t5362;
  t9490 = -1.*t1893*t2858*t5362;
  t9491 = t9475 + t9490;
  t9357 = -0.135*t260;
  t9363 = -0.049*t495;
  t9364 = t9357 + t9363;
  t9375 = 0.049*t260;
  t9376 = t9375 + t538;
  t9526 = t701*t8239;
  t9531 = t1158*t9085;
  t9533 = t9526 + t9531;
  t9547 = -1.*t51*t495*t621;
  t9548 = t260*t9533;
  t9551 = t9547 + t9548;
  t9586 = -1.*t2519*t1893*t9551;
  t9589 = -1.*t1775*t2858*t9551;
  t9593 = t9586 + t9589;
  t9602 = t1775*t2519*t9551;
  t9611 = -1.*t1893*t2858*t9551;
  t9617 = t9602 + t9611;
  t9678 = t51*t857*t701;
  t9679 = t1158*t51*t1010;
  t9680 = t9678 + t9679;
  t9692 = t495*t951;
  t9695 = t260*t9680;
  t9697 = t9692 + t9695;
  t9745 = -1.*t2519*t1893*t9697;
  t9746 = -1.*t1775*t2858*t9697;
  t9747 = t9745 + t9746;
  t9764 = t1775*t2519*t9697;
  t9767 = -1.*t1893*t2858*t9697;
  t9768 = t9764 + t9767;
  t9853 = -1.*t1893*t5175;
  t9855 = -1.*t1775*t5491;
  t9860 = t9853 + t9855;
  t9869 = t2858*t9860;
  t9878 = t9869 + t5670;
  t9889 = t2519*t9860;
  t9890 = -1.*t2858*t5651;
  t9891 = t9889 + t9890;
  t9813 = 0.049*t1775;
  t9831 = t9813 + t2218;
  t9845 = -0.09*t1775;
  t9846 = -0.049*t1893;
  t9847 = t9845 + t9846;
  t9950 = t260*t51*t621;
  t9953 = t495*t9533;
  t9954 = t9950 + t9953;
  t9957 = -1.*t1893*t9127;
  t9958 = -1.*t1775*t9954;
  t9969 = t9957 + t9958;
  t9974 = t1775*t9127;
  t9984 = -1.*t1893*t9954;
  t9986 = t9974 + t9984;
  t9994 = t2858*t9969;
  t9995 = t2519*t9986;
  t9999 = t9994 + t9995;
  t10007 = t2519*t9969;
  t10008 = -1.*t2858*t9986;
  t10009 = t10007 + t10008;
  t10073 = -1.*t260*t951;
  t10076 = t495*t9680;
  t10078 = t10073 + t10076;
  t10093 = -1.*t1893*t8642;
  t10095 = -1.*t1775*t10078;
  t10099 = t10093 + t10095;
  t10102 = t1775*t8642;
  t10103 = -1.*t1893*t10078;
  t10104 = t10102 + t10103;
  t10112 = t2858*t10099;
  t10113 = t2519*t10104;
  t10115 = t10112 + t10113;
  t10130 = t2519*t10099;
  t10131 = -1.*t2858*t10104;
  t10132 = t10130 + t10131;
  t10208 = -1.*t2519*t5530;
  t10212 = t10208 + t9890;
  t5796 = t3399*t5672;
  t10185 = -0.21*t2519;
  t10189 = -0.049*t2858;
  t10190 = t10185 + t10189;
  t10195 = 0.049*t2519;
  t10198 = t10195 + t2892;
  t10244 = t1893*t9127;
  t10247 = t1775*t9954;
  t10256 = t10244 + t10247;
  t10268 = -1.*t2858*t10256;
  t10271 = t10268 + t9995;
  t10275 = -1.*t2519*t10256;
  t10277 = t10275 + t10008;
  t10308 = t1893*t8642;
  t10312 = t1775*t10078;
  t10313 = t10308 + t10312;
  t10319 = -1.*t2858*t10313;
  t10320 = t10319 + t10113;
  t10331 = -1.*t2519*t10313;
  t10339 = t10331 + t10131;
  t10214 = -1.*t3549*t5672;
  t5811 = -1.*t3549*t5695;
  t5815 = t5796 + t5811;
  t10372 = 0.0016*t3399;
  t10375 = t10372 + t3874;
  t10386 = -0.2707*t3399;
  t10387 = -0.0016*t3549;
  t10398 = t10386 + t10387;
  t10284 = -1.*t3549*t10271;
  t10423 = t2519*t10256;
  t10425 = t2858*t9986;
  t10429 = t10423 + t10425;
  t10293 = t3399*t10271;
  t10348 = -1.*t3549*t10320;
  t10448 = t2519*t10313;
  t10451 = t2858*t10104;
  t10453 = t10448 + t10451;
  t10362 = t3399*t10320;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1363*t1487 + t1606*t1703 + t2017*t2043 + t2228*t2389 + t2975*t3212 + t3341*t3383 + t3605*t3779 + t3886*t3976 - 0.0016*(t3549*t3779 + t3399*t3976) - 0.2707*(t3399*t3779 - 1.*t3549*t3976) - 1.*t51*t581*t621 - 0.1305*(t1703*t260 + t495*t51*t621) + t1103*t791;
  p_output1[10]=t1363*t4789 + t1606*t4930 + t2017*t5175 - 0.1305*t5362 + t2228*t5491 + t2975*t5530 + t3341*t5651 + t3605*t5672 + t3886*t5695 - 0.0016*(t3549*t5672 + t3399*t5695) - 0.2707*t5815 + t4600*t791 + t51*t581*t963;
  p_output1[11]=0;
  p_output1[12]=t1606*t6048 + t2017*t6136 + t2228*t6337 + t2975*t6421 + t3341*t6461 + t3605*t6511 + t3886*t6571 - 0.0016*(t3549*t6511 + t3399*t6571) - 0.2707*(t3399*t6511 - 1.*t3549*t6571) + t1010*t1363*t51*t963 + t51*t791*t857*t963 - 1.*t581*t951*t963 - 0.1305*(t260*t6048 + t495*t951*t963);
  p_output1[13]=t1010*t1363*t51*t621 + t1606*t6865 + t2017*t6904 + t2228*t7021 + t2975*t7103 + t3341*t7153 + t3605*t7175 + t3886*t7256 - 0.0016*(t3549*t7175 + t3399*t7256) - 0.2707*(t3399*t7175 - 1.*t3549*t7256) + t51*t621*t791*t857 - 1.*t581*t621*t951 - 0.1305*(t260*t6865 + t495*t621*t951);
  p_output1[14]=-1.*t51*t581 + t1606*t7468 - 0.1305*(t495*t51 + t260*t7468) + t2017*t7489 + t2228*t7661 + t2975*t7704 + t3341*t7743 + t3605*t7776 + t3886*t7820 - 0.0016*(t3549*t7776 + t3399*t7820) - 0.2707*(t3399*t7776 - 1.*t3549*t7820) - 1.*t1010*t1363*t951 - 1.*t791*t857*t951;
  p_output1[15]=t1363*t4600 + t7903*t791 + t2017*t7944 + t1606*t7963 - 0.1305*t260*t7963 + t2228*t495*t7963 + t2975*t7987 + t3341*t8012 + t3605*t8067 + t3886*t8099 - 0.0016*(t3549*t8067 + t3399*t8099) - 0.2707*(t3399*t8067 - 1.*t3549*t8099);
  p_output1[16]=t1487*t791 + t1363*t8239 + t2017*t8286 + t1606*t8305 - 0.1305*t260*t8305 + t2228*t495*t8305 + t2975*t8345 + t3341*t8412 + t3605*t8448 + t3886*t8492 - 0.0016*(t3549*t8448 + t3399*t8492) - 0.2707*(t3399*t8448 - 1.*t3549*t8492);
  p_output1[17]=-1.*t1010*t51*t791 + t1363*t51*t857 + t8629 + t8655 + t8679 + t8688 + t8720 + t8739 + t8759 + t8776 + t8805 + t8819;
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
  p_output1[39]=0.135*t1158*t4600 + t1606*t5175 - 0.1305*t260*t5175 + t2228*t495*t5175 - 0.135*t4789*t701 + t2017*t8863 + t2975*t8937 + t3341*t8954 + t3605*t8966 + t3886*t8981 - 0.0016*(t3549*t8966 + t3399*t8981) - 0.2707*(t3399*t8966 - 1.*t3549*t8981);
  p_output1[40]=0.135*t1158*t8239 - 0.135*t701*t9085 + t2017*t9108 + t1606*t9127 - 0.1305*t260*t9127 + t2228*t495*t9127 + t2975*t9150 + t3341*t9161 + t3605*t9205 + t3886*t9265 - 0.0016*(t3549*t9205 + t3399*t9265) - 0.2707*(t3399*t9205 - 1.*t3549*t9265);
  p_output1[41]=-0.135*t1010*t51*t701 + 0.135*t1158*t51*t857 + t8629 + t8655 + t8679 + t8688 + t8720 + t8739 + t8759 + t8776 + t8805 + t8819;
  p_output1[42]=t2228*t5362 + t1775*t2975*t5362 - 1.*t1893*t3341*t5362 + t4930*t9376 + t3605*t9460 + t3886*t9491 - 0.0016*(t3549*t9460 + t3399*t9491) - 0.2707*(t3399*t9460 - 1.*t3549*t9491) + t51*t9364*t963 - 0.1305*(-1.*t4930*t495 - 1.*t260*t51*t963);
  p_output1[43]=t51*t621*t9364 + t9376*t9533 - 0.1305*(t2252 - 1.*t495*t9533) + t2228*t9551 + t1775*t2975*t9551 - 1.*t1893*t3341*t9551 + t3605*t9593 + t3886*t9617 - 0.0016*(t3549*t9593 + t3399*t9617) - 0.2707*(t3399*t9593 - 1.*t3549*t9617);
  p_output1[44]=-1.*t9364*t951 + t9376*t9680 - 0.1305*(t260*t951 - 1.*t495*t9680) + t2228*t9697 + t1775*t2975*t9697 - 1.*t1893*t3341*t9697 + t3605*t9747 + t3886*t9768 - 0.0016*(t3549*t9747 + t3399*t9768) - 0.2707*(t3399*t9747 - 1.*t3549*t9768);
  p_output1[45]=t2975*t5651 + t5175*t9831 + t5491*t9847 + t3341*t9860 + t3886*t9878 + t3605*t9891 - 0.2707*(-1.*t3549*t9878 + t3399*t9891) - 0.0016*(t3399*t9878 + t3549*t9891);
  p_output1[46]=t10009*t3605 + t9127*t9831 + t9847*t9954 + t3341*t9969 + t2975*t9986 + t3886*t9999 - 0.0016*(t10009*t3549 + t3399*t9999) - 0.2707*(t10009*t3399 - 1.*t3549*t9999);
  p_output1[47]=t10104*t2975 + t10099*t3341 - 0.2707*(t10132*t3399 - 1.*t10115*t3549) - 0.0016*(t10115*t3399 + t10132*t3549) + t10132*t3605 + t10115*t3886 + t8642*t9831 + t10078*t9847;
  p_output1[48]=-0.2707*(t10214 + t10212*t3399) + t10212*t3605 + t10190*t5530 + t10198*t5651 + t3886*t5672 - 0.0016*(t10212*t3549 + t5796);
  p_output1[49]=t10190*t10256 - 0.2707*(t10284 + t10277*t3399) - 0.0016*(t10293 + t10277*t3549) + t10277*t3605 + t10271*t3886 + t10198*t9986;
  p_output1[50]=t10104*t10198 + t10190*t10313 - 0.2707*(t10348 + t10339*t3399) - 0.0016*(t10362 + t10339*t3549) + t10339*t3605 + t10320*t3886;
  p_output1[51]=t10375*t5672 + t10398*t5695 - 0.2707*(t10214 - 1.*t3399*t5695) - 0.0016*t5815;
  p_output1[52]=t10271*t10375 + t10398*t10429 - 0.2707*(t10284 - 1.*t10429*t3399) - 0.0016*(t10293 - 1.*t10429*t3549);
  p_output1[53]=t10320*t10375 + t10398*t10453 - 0.2707*(t10348 - 1.*t10453*t3399) - 0.0016*(t10362 - 1.*t10453*t3549);
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jp_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
