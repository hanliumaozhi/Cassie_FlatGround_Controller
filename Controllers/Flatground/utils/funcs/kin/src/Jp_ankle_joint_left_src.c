/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:50 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_ankle_joint_left_src.h"

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
  double t253;
  double t343;
  double t376;
  double t241;
  double t486;
  double t10;
  double t275;
  double t516;
  double t659;
  double t710;
  double t732;
  double t756;
  double t768;
  double t1221;
  double t1321;
  double t1384;
  double t1436;
  double t957;
  double t1029;
  double t1082;
  double t1615;
  double t2107;
  double t2112;
  double t2116;
  double t2177;
  double t1899;
  double t2052;
  double t2105;
  double t2468;
  double t2471;
  double t2485;
  double t2889;
  double t3001;
  double t3020;
  double t3063;
  double t3155;
  double t3169;
  double t3175;
  double t3252;
  double t3282;
  double t3356;
  double t3431;
  double t3433;
  double t3489;
  double t3535;
  double t3597;
  double t3603;
  double t3647;
  double t3997;
  double t4088;
  double t4119;
  double t4257;
  double t4263;
  double t4265;
  double t4295;
  double t4464;
  double t4473;
  double t4490;
  double t4522;
  double t4543;
  double t4571;
  double t43;
  double t107;
  double t143;
  double t154;
  double t904;
  double t906;
  double t4917;
  double t4935;
  double t4936;
  double t4974;
  double t4975;
  double t4990;
  double t1394;
  double t1507;
  double t1565;
  double t1627;
  double t1691;
  double t1714;
  double t5061;
  double t5070;
  double t5107;
  double t2156;
  double t2216;
  double t2222;
  double t2691;
  double t2693;
  double t2712;
  double t3040;
  double t3066;
  double t3141;
  double t5516;
  double t5564;
  double t5628;
  double t5735;
  double t5844;
  double t5883;
  double t3215;
  double t3216;
  double t3219;
  double t3509;
  double t3549;
  double t3551;
  double t5922;
  double t5939;
  double t5964;
  double t5980;
  double t5991;
  double t5997;
  double t3881;
  double t3964;
  double t3967;
  double t4291;
  double t4306;
  double t4462;
  double t6010;
  double t6028;
  double t6111;
  double t6280;
  double t6292;
  double t6295;
  double t4495;
  double t4502;
  double t4510;
  double t6361;
  double t6362;
  double t6416;
  double t6609;
  double t6777;
  double t6783;
  double t7041;
  double t7049;
  double t7074;
  double t7306;
  double t7314;
  double t7326;
  double t7353;
  double t7369;
  double t7383;
  double t7426;
  double t7451;
  double t7485;
  double t7523;
  double t7539;
  double t7568;
  double t7596;
  double t7604;
  double t7615;
  double t7636;
  double t7648;
  double t7651;
  double t7722;
  double t7752;
  double t7786;
  double t7796;
  double t7811;
  double t7819;
  double t7960;
  double t7990;
  double t7998;
  double t8068;
  double t8085;
  double t8090;
  double t8129;
  double t8134;
  double t8142;
  double t8148;
  double t8167;
  double t8179;
  double t8193;
  double t8197;
  double t8199;
  double t8265;
  double t8267;
  double t8290;
  double t8316;
  double t8324;
  double t8337;
  double t8347;
  double t8350;
  double t8355;
  double t8375;
  double t8377;
  double t8383;
  double t8455;
  double t8456;
  double t8495;
  double t8556;
  double t8581;
  double t8595;
  double t8603;
  double t8607;
  double t8626;
  double t8632;
  double t8634;
  double t8640;
  double t8659;
  double t8675;
  double t8678;
  double t8689;
  double t8697;
  double t8709;
  double t8714;
  double t8717;
  double t8718;
  double t8721;
  double t8727;
  double t8734;
  double t8742;
  double t8744;
  double t8748;
  double t8801;
  double t8802;
  double t8807;
  double t8813;
  double t8815;
  double t8830;
  double t8835;
  double t8841;
  double t8844;
  double t8845;
  double t8846;
  double t8871;
  double t8877;
  double t8878;
  double t8885;
  double t8894;
  double t8897;
  double t8899;
  double t8900;
  double t8903;
  double t8908;
  double t8915;
  double t8920;
  double t8940;
  double t8941;
  double t8963;
  double t8988;
  double t8992;
  double t8996;
  double t9003;
  double t9004;
  double t9006;
  double t9028;
  double t9030;
  double t9044;
  double t9050;
  double t9054;
  double t9056;
  double t9060;
  double t9065;
  double t9073;
  double t9079;
  double t9084;
  double t9086;
  double t9089;
  double t9101;
  double t9105;
  double t9110;
  double t9112;
  double t9132;
  double t9134;
  double t9137;
  double t9195;
  double t9197;
  double t9200;
  double t9220;
  double t9224;
  double t9237;
  double t9242;
  double t9247;
  double t9253;
  double t9269;
  double t9270;
  double t9280;
  double t9288;
  double t9289;
  double t9294;
  double t9305;
  double t9311;
  double t9313;
  double t9324;
  double t9334;
  double t9336;
  double t9344;
  double t9345;
  double t9355;
  double t9406;
  double t9414;
  double t9426;
  double t9429;
  double t9431;
  double t9436;
  double t9444;
  double t9448;
  double t9453;
  double t9461;
  double t9464;
  double t9474;
  double t9478;
  double t9479;
  double t9484;
  double t9485;
  double t9488;
  double t9493;
  double t9497;
  double t9499;
  double t9561;
  double t9564;
  double t9569;
  double t9575;
  double t9577;
  double t9590;
  double t9593;
  double t9599;
  double t9600;
  double t9601;
  double t9603;
  double t9604;
  double t9605;
  double t9615;
  double t9617;
  double t9618;
  double t9624;
  double t9626;
  double t9627;
  double t9634;
  double t9635;
  double t9637;
  double t9643;
  double t9646;
  double t9649;
  double t9203;
  double t9204;
  double t9207;
  double t9238;
  double t9262;
  double t9285;
  double t9303;
  double t9323;
  double t9342;
  double t9356;
  double t9359;
  double t9362;
  double t9368;
  double t9372;
  double t9375;
  double t9378;
  double t9383;
  double t9384;
  double t5328;
  double t5344;
  double t5359;
  double t9719;
  double t9723;
  double t9724;
  double t9728;
  double t9729;
  double t9741;
  double t9744;
  double t9749;
  double t9750;
  double t9757;
  double t9758;
  double t9759;
  double t9685;
  double t9687;
  double t9688;
  double t9702;
  double t9704;
  double t9783;
  double t9786;
  double t9787;
  double t9790;
  double t9793;
  double t9794;
  double t9806;
  double t9809;
  double t9810;
  double t9813;
  double t9817;
  double t9821;
  double t9827;
  double t9832;
  double t9834;
  double t9836;
  double t9837;
  double t9839;
  double t9868;
  double t9872;
  double t9873;
  double t9879;
  double t9882;
  double t9883;
  double t9901;
  double t9904;
  double t9905;
  double t9907;
  double t9908;
  double t9910;
  double t9914;
  double t9917;
  double t9918;
  double t9922;
  double t9923;
  double t9925;
  double t9987;
  double t9990;
  double t9991;
  double t9997;
  double t9998;
  double t10001;
  double t10004;
  double t10006;
  double t10011;
  double t10023;
  double t10024;
  double t10026;
  double t10028;
  double t10030;
  double t9971;
  double t9975;
  double t9982;
  double t9983;
  double t9985;
  double t10052;
  double t10054;
  double t10055;
  double t10057;
  double t10058;
  double t10062;
  double t10065;
  double t10066;
  double t10068;
  double t10073;
  double t10075;
  double t10083;
  double t10085;
  double t10087;
  double t10088;
  double t10092;
  double t10096;
  double t10098;
  double t10103;
  double t10106;
  double t10107;
  double t10129;
  double t10130;
  double t10133;
  double t10138;
  double t10139;
  double t10142;
  double t10146;
  double t10147;
  double t10150;
  double t10153;
  double t10154;
  double t10158;
  double t10160;
  double t10161;
  double t10163;
  double t10165;
  double t10167;
  double t10168;
  double t10171;
  double t10173;
  double t10174;
  double t10202;
  double t10203;
  double t10205;
  double t10207;
  double t10209;
  double t10216;
  double t10217;
  double t10192;
  double t10193;
  double t10194;
  double t10197;
  double t10199;
  double t10232;
  double t10233;
  double t10234;
  double t10238;
  double t10240;
  double t10246;
  double t10249;
  double t10252;
  double t10254;
  double t10257;
  double t10260;
  double t10261;
  double t10262;
  double t10274;
  double t10276;
  double t10278;
  double t10282;
  double t10284;
  double t10288;
  double t10289;
  double t10293;
  double t10294;
  double t10295;
  double t10297;
  double t10298;
  double t10300;
  double t10330;
  double t10331;
  double t6812;
  double t10319;
  double t10320;
  double t10322;
  double t10324;
  double t10326;
  double t10347;
  double t10349;
  double t10350;
  double t10352;
  double t10353;
  double t10355;
  double t10357;
  double t10375;
  double t10377;
  double t10378;
  double t10380;
  double t10381;
  double t10383;
  double t10384;
  double t6798;
  double t6814;
  double t10342;
  double t10396;
  double t10397;
  double t10398;
  double t10400;
  double t10401;
  double t10409;
  double t10410;
  double t10411;
  double t10363;
  double t10368;
  double t10426;
  double t10427;
  double t10428;
  double t10387;
  double t10391;
  t253 = Cos(var1[5]);
  t343 = Sin(var1[3]);
  t376 = Sin(var1[4]);
  t241 = Cos(var1[3]);
  t486 = Sin(var1[5]);
  t10 = Cos(var1[6]);
  t275 = -1.*t241*t253;
  t516 = -1.*t343*t376*t486;
  t659 = t275 + t516;
  t710 = -1.*t253*t343*t376;
  t732 = t241*t486;
  t756 = t710 + t732;
  t768 = Sin(var1[6]);
  t1221 = Cos(var1[7]);
  t1321 = -1.*t1221;
  t1384 = 1. + t1321;
  t1436 = Sin(var1[7]);
  t957 = t10*t659;
  t1029 = t756*t768;
  t1082 = t957 + t1029;
  t1615 = Cos(var1[4]);
  t2107 = Cos(var1[8]);
  t2112 = -1.*t2107;
  t2116 = 1. + t2112;
  t2177 = Sin(var1[8]);
  t1899 = -1.*t1615*t1221*t343;
  t2052 = t1082*t1436;
  t2105 = t1899 + t2052;
  t2468 = t10*t756;
  t2471 = -1.*t659*t768;
  t2485 = t2468 + t2471;
  t2889 = Cos(var1[9]);
  t3001 = -1.*t2889;
  t3020 = 1. + t3001;
  t3063 = Sin(var1[9]);
  t3155 = t2107*t2105;
  t3169 = t2485*t2177;
  t3175 = t3155 + t3169;
  t3252 = t2107*t2485;
  t3282 = -1.*t2105*t2177;
  t3356 = t3252 + t3282;
  t3431 = Cos(var1[10]);
  t3433 = -1.*t3431;
  t3489 = 1. + t3433;
  t3535 = Sin(var1[10]);
  t3597 = -1.*t3063*t3175;
  t3603 = t2889*t3356;
  t3647 = t3597 + t3603;
  t3997 = t2889*t3175;
  t4088 = t3063*t3356;
  t4119 = t3997 + t4088;
  t4257 = Cos(var1[11]);
  t4263 = -1.*t4257;
  t4265 = 1. + t4263;
  t4295 = Sin(var1[11]);
  t4464 = t3535*t3647;
  t4473 = t3431*t4119;
  t4490 = t4464 + t4473;
  t4522 = t3431*t3647;
  t4543 = -1.*t3535*t4119;
  t4571 = t4522 + t4543;
  t43 = -1.*t10;
  t107 = 1. + t43;
  t143 = 0.135*t107;
  t154 = 0. + t143;
  t904 = -0.135*t768;
  t906 = 0. + t904;
  t4917 = -1.*t253*t343;
  t4935 = t241*t376*t486;
  t4936 = t4917 + t4935;
  t4974 = t241*t253*t376;
  t4975 = t343*t486;
  t4990 = t4974 + t4975;
  t1394 = 0.135*t1384;
  t1507 = 0.049*t1436;
  t1565 = 0. + t1394 + t1507;
  t1627 = -0.049*t1384;
  t1691 = 0.135*t1436;
  t1714 = 0. + t1627 + t1691;
  t5061 = t10*t4936;
  t5070 = t4990*t768;
  t5107 = t5061 + t5070;
  t2156 = -0.049*t2116;
  t2216 = -0.09*t2177;
  t2222 = 0. + t2156 + t2216;
  t2691 = -0.09*t2116;
  t2693 = 0.049*t2177;
  t2712 = 0. + t2691 + t2693;
  t3040 = -0.049*t3020;
  t3066 = -0.21*t3063;
  t3141 = 0. + t3040 + t3066;
  t5516 = t241*t1615*t1221;
  t5564 = t5107*t1436;
  t5628 = t5516 + t5564;
  t5735 = t10*t4990;
  t5844 = -1.*t4936*t768;
  t5883 = t5735 + t5844;
  t3215 = -0.21*t3020;
  t3216 = 0.049*t3063;
  t3219 = 0. + t3215 + t3216;
  t3509 = -0.2707*t3489;
  t3549 = 0.0016*t3535;
  t3551 = 0. + t3509 + t3549;
  t5922 = t2107*t5628;
  t5939 = t5883*t2177;
  t5964 = t5922 + t5939;
  t5980 = t2107*t5883;
  t5991 = -1.*t5628*t2177;
  t5997 = t5980 + t5991;
  t3881 = -0.0016*t3489;
  t3964 = -0.2707*t3535;
  t3967 = 0. + t3881 + t3964;
  t4291 = 0.0184*t4265;
  t4306 = -0.7055*t4295;
  t4462 = 0. + t4291 + t4306;
  t6010 = -1.*t3063*t5964;
  t6028 = t2889*t5997;
  t6111 = t6010 + t6028;
  t6280 = t2889*t5964;
  t6292 = t3063*t5997;
  t6295 = t6280 + t6292;
  t4495 = -0.7055*t4265;
  t4502 = -0.0184*t4295;
  t4510 = 0. + t4495 + t4502;
  t6361 = t3535*t6111;
  t6362 = t3431*t6295;
  t6416 = t6361 + t6362;
  t6609 = t3431*t6111;
  t6777 = -1.*t3535*t6295;
  t6783 = t6609 + t6777;
  t7041 = t241*t1615*t10*t486;
  t7049 = t241*t1615*t253*t768;
  t7074 = t7041 + t7049;
  t7306 = -1.*t241*t1221*t376;
  t7314 = t7074*t1436;
  t7326 = t7306 + t7314;
  t7353 = t241*t1615*t253*t10;
  t7369 = -1.*t241*t1615*t486*t768;
  t7383 = t7353 + t7369;
  t7426 = t2107*t7326;
  t7451 = t7383*t2177;
  t7485 = t7426 + t7451;
  t7523 = t2107*t7383;
  t7539 = -1.*t7326*t2177;
  t7568 = t7523 + t7539;
  t7596 = -1.*t3063*t7485;
  t7604 = t2889*t7568;
  t7615 = t7596 + t7604;
  t7636 = t2889*t7485;
  t7648 = t3063*t7568;
  t7651 = t7636 + t7648;
  t7722 = t3535*t7615;
  t7752 = t3431*t7651;
  t7786 = t7722 + t7752;
  t7796 = t3431*t7615;
  t7811 = -1.*t3535*t7651;
  t7819 = t7796 + t7811;
  t7960 = t1615*t10*t343*t486;
  t7990 = t1615*t253*t343*t768;
  t7998 = t7960 + t7990;
  t8068 = -1.*t1221*t343*t376;
  t8085 = t7998*t1436;
  t8090 = t8068 + t8085;
  t8129 = t1615*t253*t10*t343;
  t8134 = -1.*t1615*t343*t486*t768;
  t8142 = t8129 + t8134;
  t8148 = t2107*t8090;
  t8167 = t8142*t2177;
  t8179 = t8148 + t8167;
  t8193 = t2107*t8142;
  t8197 = -1.*t8090*t2177;
  t8199 = t8193 + t8197;
  t8265 = -1.*t3063*t8179;
  t8267 = t2889*t8199;
  t8290 = t8265 + t8267;
  t8316 = t2889*t8179;
  t8324 = t3063*t8199;
  t8337 = t8316 + t8324;
  t8347 = t3535*t8290;
  t8350 = t3431*t8337;
  t8355 = t8347 + t8350;
  t8375 = t3431*t8290;
  t8377 = -1.*t3535*t8337;
  t8383 = t8375 + t8377;
  t8455 = -1.*t10*t376*t486;
  t8456 = -1.*t253*t376*t768;
  t8495 = t8455 + t8456;
  t8556 = -1.*t1615*t1221;
  t8581 = t8495*t1436;
  t8595 = t8556 + t8581;
  t8603 = -1.*t253*t10*t376;
  t8607 = t376*t486*t768;
  t8626 = t8603 + t8607;
  t8632 = t2107*t8595;
  t8634 = t8626*t2177;
  t8640 = t8632 + t8634;
  t8659 = t2107*t8626;
  t8675 = -1.*t8595*t2177;
  t8678 = t8659 + t8675;
  t8689 = -1.*t3063*t8640;
  t8697 = t2889*t8678;
  t8709 = t8689 + t8697;
  t8714 = t2889*t8640;
  t8717 = t3063*t8678;
  t8718 = t8714 + t8717;
  t8721 = t3535*t8709;
  t8727 = t3431*t8718;
  t8734 = t8721 + t8727;
  t8742 = t3431*t8709;
  t8744 = -1.*t3535*t8718;
  t8748 = t8742 + t8744;
  t8801 = t253*t343;
  t8802 = -1.*t241*t376*t486;
  t8807 = t8801 + t8802;
  t8813 = t8807*t768;
  t8815 = t5735 + t8813;
  t8830 = t10*t8807;
  t8835 = -1.*t4990*t768;
  t8841 = t8830 + t8835;
  t8844 = t2107*t8815*t1436;
  t8845 = t8841*t2177;
  t8846 = t8844 + t8845;
  t8871 = t2107*t8841;
  t8877 = -1.*t8815*t1436*t2177;
  t8878 = t8871 + t8877;
  t8885 = -1.*t3063*t8846;
  t8894 = t2889*t8878;
  t8897 = t8885 + t8894;
  t8899 = t2889*t8846;
  t8900 = t3063*t8878;
  t8903 = t8899 + t8900;
  t8908 = t3535*t8897;
  t8915 = t3431*t8903;
  t8920 = t8908 + t8915;
  t8940 = t3431*t8897;
  t8941 = -1.*t3535*t8903;
  t8963 = t8940 + t8941;
  t8988 = t253*t343*t376;
  t8992 = -1.*t241*t486;
  t8996 = t8988 + t8992;
  t9003 = t10*t8996;
  t9004 = t659*t768;
  t9006 = t9003 + t9004;
  t9028 = -1.*t8996*t768;
  t9030 = t957 + t9028;
  t9044 = t2107*t9006*t1436;
  t9050 = t9030*t2177;
  t9054 = t9044 + t9050;
  t9056 = t2107*t9030;
  t9060 = -1.*t9006*t1436*t2177;
  t9065 = t9056 + t9060;
  t9073 = -1.*t3063*t9054;
  t9079 = t2889*t9065;
  t9084 = t9073 + t9079;
  t9086 = t2889*t9054;
  t9089 = t3063*t9065;
  t9101 = t9086 + t9089;
  t9105 = t3535*t9084;
  t9110 = t3431*t9101;
  t9112 = t9105 + t9110;
  t9132 = t3431*t9084;
  t9134 = -1.*t3535*t9101;
  t9137 = t9132 + t9134;
  t9195 = t1615*t253*t10;
  t9197 = -1.*t1615*t486*t768;
  t9200 = t9195 + t9197;
  t9220 = -1.*t1615*t10*t486;
  t9224 = -1.*t1615*t253*t768;
  t9237 = t9220 + t9224;
  t9242 = t2107*t9200*t1436;
  t9247 = t9237*t2177;
  t9253 = t9242 + t9247;
  t9269 = t2107*t9237;
  t9270 = -1.*t9200*t1436*t2177;
  t9280 = t9269 + t9270;
  t9288 = -1.*t3063*t9253;
  t9289 = t2889*t9280;
  t9294 = t9288 + t9289;
  t9305 = t2889*t9253;
  t9311 = t3063*t9280;
  t9313 = t9305 + t9311;
  t9324 = t3535*t9294;
  t9334 = t3431*t9313;
  t9336 = t9324 + t9334;
  t9344 = t3431*t9294;
  t9345 = -1.*t3535*t9313;
  t9355 = t9344 + t9345;
  t9406 = -1.*t10*t4936;
  t9414 = t9406 + t8835;
  t9426 = t2107*t5883*t1436;
  t9429 = t9414*t2177;
  t9431 = t9426 + t9429;
  t9436 = t2107*t9414;
  t9444 = -1.*t5883*t1436*t2177;
  t9448 = t9436 + t9444;
  t9453 = -1.*t3063*t9431;
  t9461 = t2889*t9448;
  t9464 = t9453 + t9461;
  t9474 = t2889*t9431;
  t9478 = t3063*t9448;
  t9479 = t9474 + t9478;
  t9484 = t3535*t9464;
  t9485 = t3431*t9479;
  t9488 = t9484 + t9485;
  t9493 = t3431*t9464;
  t9497 = -1.*t3535*t9479;
  t9499 = t9493 + t9497;
  t9561 = t241*t253;
  t9564 = t343*t376*t486;
  t9569 = t9561 + t9564;
  t9575 = -1.*t9569*t768;
  t9577 = t9003 + t9575;
  t9590 = -1.*t10*t9569;
  t9593 = t9590 + t9028;
  t9599 = t2107*t9577*t1436;
  t9600 = t9593*t2177;
  t9601 = t9599 + t9600;
  t9603 = t2107*t9593;
  t9604 = -1.*t9577*t1436*t2177;
  t9605 = t9603 + t9604;
  t9615 = -1.*t3063*t9601;
  t9617 = t2889*t9605;
  t9618 = t9615 + t9617;
  t9624 = t2889*t9601;
  t9626 = t3063*t9605;
  t9627 = t9624 + t9626;
  t9634 = t3535*t9618;
  t9635 = t3431*t9627;
  t9637 = t9634 + t9635;
  t9643 = t3431*t9618;
  t9646 = -1.*t3535*t9627;
  t9649 = t9643 + t9646;
  t9203 = 0.1305*t1221*t9200;
  t9204 = t9200*t1565;
  t9207 = t9200*t1436*t2222;
  t9238 = t9237*t2712;
  t9262 = t3141*t9253;
  t9285 = t3219*t9280;
  t9303 = t3551*t9294;
  t9323 = t3967*t9313;
  t9342 = t4462*t9336;
  t9356 = t4510*t9355;
  t9359 = -1.*t4295*t9336;
  t9362 = t4257*t9355;
  t9368 = t9359 + t9362;
  t9372 = -0.7055*t9368;
  t9375 = t4257*t9336;
  t9378 = t4295*t9355;
  t9383 = t9375 + t9378;
  t9384 = 0.0184*t9383;
  t5328 = t1221*t5107;
  t5344 = -1.*t241*t1615*t1436;
  t5359 = t5328 + t5344;
  t9719 = -1.*t2107*t3063*t5359;
  t9723 = -1.*t2889*t5359*t2177;
  t9724 = t9719 + t9723;
  t9728 = t2889*t2107*t5359;
  t9729 = -1.*t3063*t5359*t2177;
  t9741 = t9728 + t9729;
  t9744 = t3535*t9724;
  t9749 = t3431*t9741;
  t9750 = t9744 + t9749;
  t9757 = t3431*t9724;
  t9758 = -1.*t3535*t9741;
  t9759 = t9757 + t9758;
  t9685 = 0.135*t1221;
  t9687 = -0.049*t1436;
  t9688 = t9685 + t9687;
  t9702 = 0.049*t1221;
  t9704 = t9702 + t1691;
  t9783 = t10*t9569;
  t9786 = t8996*t768;
  t9787 = t9783 + t9786;
  t9790 = t1221*t9787;
  t9793 = -1.*t1615*t343*t1436;
  t9794 = t9790 + t9793;
  t9806 = -1.*t2107*t3063*t9794;
  t9809 = -1.*t2889*t9794*t2177;
  t9810 = t9806 + t9809;
  t9813 = t2889*t2107*t9794;
  t9817 = -1.*t3063*t9794*t2177;
  t9821 = t9813 + t9817;
  t9827 = t3535*t9810;
  t9832 = t3431*t9821;
  t9834 = t9827 + t9832;
  t9836 = t3431*t9810;
  t9837 = -1.*t3535*t9821;
  t9839 = t9836 + t9837;
  t9868 = t1615*t10*t486;
  t9872 = t1615*t253*t768;
  t9873 = t9868 + t9872;
  t9879 = t1221*t9873;
  t9882 = t376*t1436;
  t9883 = t9879 + t9882;
  t9901 = -1.*t2107*t3063*t9883;
  t9904 = -1.*t2889*t9883*t2177;
  t9905 = t9901 + t9904;
  t9907 = t2889*t2107*t9883;
  t9908 = -1.*t3063*t9883*t2177;
  t9910 = t9907 + t9908;
  t9914 = t3535*t9905;
  t9917 = t3431*t9910;
  t9918 = t9914 + t9917;
  t9922 = t3431*t9905;
  t9923 = -1.*t3535*t9910;
  t9925 = t9922 + t9923;
  t9987 = -1.*t2107*t5628;
  t9990 = -1.*t5883*t2177;
  t9991 = t9987 + t9990;
  t9997 = t3063*t9991;
  t9998 = t9997 + t6028;
  t10001 = t2889*t9991;
  t10004 = -1.*t3063*t5997;
  t10006 = t10001 + t10004;
  t10011 = -1.*t3535*t9998;
  t10023 = t3431*t10006;
  t10024 = t10011 + t10023;
  t10026 = t3431*t9998;
  t10028 = t3535*t10006;
  t10030 = t10026 + t10028;
  t9971 = 0.049*t2107;
  t9975 = t9971 + t2216;
  t9982 = -0.09*t2107;
  t9983 = -0.049*t2177;
  t9985 = t9982 + t9983;
  t10052 = t1615*t1221*t343;
  t10054 = t9787*t1436;
  t10055 = t10052 + t10054;
  t10057 = -1.*t2107*t10055;
  t10058 = -1.*t9577*t2177;
  t10062 = t10057 + t10058;
  t10065 = t2107*t9577;
  t10066 = -1.*t10055*t2177;
  t10068 = t10065 + t10066;
  t10073 = t3063*t10062;
  t10075 = t2889*t10068;
  t10083 = t10073 + t10075;
  t10085 = t2889*t10062;
  t10087 = -1.*t3063*t10068;
  t10088 = t10085 + t10087;
  t10092 = -1.*t3535*t10083;
  t10096 = t3431*t10088;
  t10098 = t10092 + t10096;
  t10103 = t3431*t10083;
  t10106 = t3535*t10088;
  t10107 = t10103 + t10106;
  t10129 = -1.*t1221*t376;
  t10130 = t9873*t1436;
  t10133 = t10129 + t10130;
  t10138 = -1.*t2107*t10133;
  t10139 = -1.*t9200*t2177;
  t10142 = t10138 + t10139;
  t10146 = t2107*t9200;
  t10147 = -1.*t10133*t2177;
  t10150 = t10146 + t10147;
  t10153 = t3063*t10142;
  t10154 = t2889*t10150;
  t10158 = t10153 + t10154;
  t10160 = t2889*t10142;
  t10161 = -1.*t3063*t10150;
  t10163 = t10160 + t10161;
  t10165 = -1.*t3535*t10158;
  t10167 = t3431*t10163;
  t10168 = t10165 + t10167;
  t10171 = t3431*t10158;
  t10173 = t3535*t10163;
  t10174 = t10171 + t10173;
  t10202 = -1.*t2889*t5964;
  t10203 = t10202 + t10004;
  t10205 = -1.*t3535*t6111;
  t10207 = t3431*t10203;
  t10209 = t10205 + t10207;
  t10216 = t3535*t10203;
  t10217 = t6609 + t10216;
  t10192 = -0.21*t2889;
  t10193 = -0.049*t3063;
  t10194 = t10192 + t10193;
  t10197 = 0.049*t2889;
  t10199 = t10197 + t3066;
  t10232 = t2107*t10055;
  t10233 = t9577*t2177;
  t10234 = t10232 + t10233;
  t10238 = -1.*t3063*t10234;
  t10240 = t10238 + t10075;
  t10246 = -1.*t2889*t10234;
  t10249 = t10246 + t10087;
  t10252 = -1.*t3535*t10240;
  t10254 = t3431*t10249;
  t10257 = t10252 + t10254;
  t10260 = t3431*t10240;
  t10261 = t3535*t10249;
  t10262 = t10260 + t10261;
  t10274 = t2107*t10133;
  t10276 = t9200*t2177;
  t10278 = t10274 + t10276;
  t10282 = -1.*t3063*t10278;
  t10284 = t10282 + t10154;
  t10288 = -1.*t2889*t10278;
  t10289 = t10288 + t10161;
  t10293 = -1.*t3535*t10284;
  t10294 = t3431*t10289;
  t10295 = t10293 + t10294;
  t10297 = t3431*t10284;
  t10298 = t3535*t10289;
  t10300 = t10297 + t10298;
  t10330 = -1.*t3431*t6295;
  t10331 = t10205 + t10330;
  t6812 = t4257*t6783;
  t10319 = 0.0016*t3431;
  t10320 = t10319 + t3964;
  t10322 = -0.2707*t3431;
  t10324 = -0.0016*t3535;
  t10326 = t10322 + t10324;
  t10347 = t2889*t10234;
  t10349 = t3063*t10068;
  t10350 = t10347 + t10349;
  t10352 = -1.*t3431*t10350;
  t10353 = t10252 + t10352;
  t10355 = -1.*t3535*t10350;
  t10357 = t10260 + t10355;
  t10375 = t2889*t10278;
  t10377 = t3063*t10150;
  t10378 = t10375 + t10377;
  t10380 = -1.*t3431*t10378;
  t10381 = t10293 + t10380;
  t10383 = -1.*t3535*t10378;
  t10384 = t10297 + t10383;
  t6798 = -1.*t4295*t6416;
  t6814 = t6798 + t6812;
  t10342 = -1.*t4295*t6783;
  t10396 = -0.7055*t4257;
  t10397 = 0.0184*t4295;
  t10398 = t10396 + t10397;
  t10400 = -0.0184*t4257;
  t10401 = t10400 + t4306;
  t10409 = t3535*t10240;
  t10410 = t3431*t10350;
  t10411 = t10409 + t10410;
  t10363 = t4257*t10357;
  t10368 = -1.*t4295*t10357;
  t10426 = t3535*t10284;
  t10427 = t3431*t10378;
  t10428 = t10426 + t10427;
  t10387 = t4257*t10384;
  t10391 = -1.*t4295*t10384;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1082*t1565 + t2105*t2222 + t2485*t2712 + t3141*t3175 + t3219*t3356 - 1.*t1615*t1714*t343 + 0.1305*(t1082*t1221 + t1436*t1615*t343) + t3551*t3647 + t3967*t4119 + t4462*t4490 + t4510*t4571 - 0.7055*(-1.*t4295*t4490 + t4257*t4571) + 0.0184*(t4257*t4490 + t4295*t4571) + t154*t659 + t756*t906;
  p_output1[10]=t1615*t1714*t241 + t154*t4936 + t1565*t5107 + 0.1305*t5359 + t2222*t5628 + t2712*t5883 + t3141*t5964 + t3219*t5997 + t3551*t6111 + t3967*t6295 + t4462*t6416 + t4510*t6783 + 0.0184*(t4257*t6416 + t4295*t6783) - 0.7055*t6814 + t4990*t906;
  p_output1[11]=0;
  p_output1[12]=-1.*t1714*t241*t376 + t154*t1615*t241*t486 + t1565*t7074 + 0.1305*(t1436*t241*t376 + t1221*t7074) + t2222*t7326 + t2712*t7383 + t3141*t7485 + t3219*t7568 + t3551*t7615 + t3967*t7651 + t4462*t7786 + t4510*t7819 - 0.7055*(-1.*t4295*t7786 + t4257*t7819) + 0.0184*(t4257*t7786 + t4295*t7819) + t1615*t241*t253*t906;
  p_output1[13]=-1.*t1714*t343*t376 + t154*t1615*t343*t486 + t1565*t7998 + 0.1305*(t1436*t343*t376 + t1221*t7998) + t2222*t8090 + t2712*t8142 + t3141*t8179 + t3219*t8199 + t3551*t8290 + t3967*t8337 + t4462*t8355 + t4510*t8383 - 0.7055*(-1.*t4295*t8355 + t4257*t8383) + 0.0184*(t4257*t8355 + t4295*t8383) + t1615*t253*t343*t906;
  p_output1[14]=-1.*t1615*t1714 - 1.*t154*t376*t486 + t1565*t8495 + 0.1305*(t1436*t1615 + t1221*t8495) + t2222*t8595 + t2712*t8626 + t3141*t8640 + t3219*t8678 + t3551*t8709 + t3967*t8718 + t4462*t8734 + t4510*t8748 - 0.7055*(-1.*t4295*t8734 + t4257*t8748) + 0.0184*(t4257*t8734 + t4295*t8748) - 1.*t253*t376*t906;
  p_output1[15]=t154*t4990 + 0.1305*t1221*t8815 + t1565*t8815 + t1436*t2222*t8815 + t2712*t8841 + t3141*t8846 + t3219*t8878 + t3551*t8897 + t3967*t8903 + t4462*t8920 + t4510*t8963 - 0.7055*(-1.*t4295*t8920 + t4257*t8963) + 0.0184*(t4257*t8920 + t4295*t8963) + t8807*t906;
  p_output1[16]=t154*t8996 + 0.1305*t1221*t9006 + t1565*t9006 + t1436*t2222*t9006 + t2712*t9030 + t3141*t9054 + t659*t906 + t3219*t9065 + t3551*t9084 + t3967*t9101 + t4462*t9112 + t4510*t9137 - 0.7055*(-1.*t4295*t9112 + t4257*t9137) + 0.0184*(t4257*t9112 + t4295*t9137);
  p_output1[17]=t154*t1615*t253 - 1.*t1615*t486*t906 + t9203 + t9204 + t9207 + t9238 + t9262 + t9285 + t9303 + t9323 + t9342 + t9356 + t9372 + t9384;
  p_output1[18]=-0.135*t10*t4990 + 0.1305*t1221*t5883 + t1565*t5883 + t1436*t2222*t5883 + 0.135*t4936*t768 + t2712*t9414 + t3141*t9431 + t3219*t9448 + t3551*t9464 + t3967*t9479 + t4462*t9488 + t4510*t9499 - 0.7055*(-1.*t4295*t9488 + t4257*t9499) + 0.0184*(t4257*t9488 + t4295*t9499);
  p_output1[19]=-0.135*t10*t8996 + 0.135*t768*t9569 + 0.1305*t1221*t9577 + t1565*t9577 + t1436*t2222*t9577 + t2712*t9593 + t3141*t9601 + t3219*t9605 + t3551*t9618 + t3967*t9627 + t4462*t9637 + t4510*t9649 - 0.7055*(-1.*t4295*t9637 + t4257*t9649) + 0.0184*(t4257*t9637 + t4295*t9649);
  p_output1[20]=-0.135*t10*t1615*t253 + 0.135*t1615*t486*t768 + t9203 + t9204 + t9207 + t9238 + t9262 + t9285 + t9303 + t9323 + t9342 + t9356 + t9372 + t9384;
  p_output1[21]=0.1305*(-1.*t1221*t1615*t241 - 1.*t1436*t5107) + t2222*t5359 + t2107*t3141*t5359 - 1.*t2177*t3219*t5359 + t1615*t241*t9688 + t5107*t9704 + t3551*t9724 + t3967*t9741 + t4462*t9750 + t4510*t9759 - 0.7055*(-1.*t4295*t9750 + t4257*t9759) + 0.0184*(t4257*t9750 + t4295*t9759);
  p_output1[22]=t1615*t343*t9688 + t9704*t9787 + 0.1305*(t1899 - 1.*t1436*t9787) + t2222*t9794 + t2107*t3141*t9794 - 1.*t2177*t3219*t9794 + t3551*t9810 + t3967*t9821 + t4462*t9834 + t4510*t9839 - 0.7055*(-1.*t4295*t9834 + t4257*t9839) + 0.0184*(t4257*t9834 + t4295*t9839);
  p_output1[23]=-1.*t376*t9688 + t9704*t9873 + 0.1305*(t1221*t376 - 1.*t1436*t9873) + t2222*t9883 + t2107*t3141*t9883 - 1.*t2177*t3219*t9883 + t3551*t9905 + t3967*t9910 + t4462*t9918 + t4510*t9925 - 0.7055*(-1.*t4295*t9918 + t4257*t9925) + 0.0184*(t4257*t9918 + t4295*t9925);
  p_output1[24]=t10006*t3551 + 0.0184*(t10030*t4257 + t10024*t4295) - 0.7055*(t10024*t4257 - 1.*t10030*t4295) + t10030*t4462 + t10024*t4510 + t3141*t5997 + t5883*t9975 + t5628*t9985 + t3219*t9991 + t3967*t9998;
  p_output1[25]=t10068*t3141 + t10062*t3219 + t10088*t3551 + t10083*t3967 + 0.0184*(t10107*t4257 + t10098*t4295) - 0.7055*(t10098*t4257 - 1.*t10107*t4295) + t10107*t4462 + t10098*t4510 + t9577*t9975 + t10055*t9985;
  p_output1[26]=t10150*t3141 + t10142*t3219 + t10163*t3551 + t10158*t3967 + 0.0184*(t10174*t4257 + t10168*t4295) - 0.7055*(t10168*t4257 - 1.*t10174*t4295) + t10174*t4462 + t10168*t4510 + t9200*t9975 + t10133*t9985;
  p_output1[27]=t10203*t3551 + 0.0184*(t10217*t4257 + t10209*t4295) - 0.7055*(t10209*t4257 - 1.*t10217*t4295) + t10217*t4462 + t10209*t4510 + t10194*t5964 + t10199*t5997 + t3967*t6111;
  p_output1[28]=t10068*t10199 + t10194*t10234 + t10249*t3551 + t10240*t3967 + 0.0184*(t10262*t4257 + t10257*t4295) - 0.7055*(t10257*t4257 - 1.*t10262*t4295) + t10262*t4462 + t10257*t4510;
  p_output1[29]=t10150*t10199 + t10194*t10278 + t10289*t3551 + t10284*t3967 + 0.0184*(t10300*t4257 + t10295*t4295) - 0.7055*(t10295*t4257 - 1.*t10300*t4295) + t10300*t4462 + t10295*t4510;
  p_output1[30]=-0.7055*(t10342 + t10331*t4257) + t10331*t4510 + t10320*t6111 + t10326*t6295 + t4462*t6783 + 0.0184*(t10331*t4295 + t6812);
  p_output1[31]=t10240*t10320 + t10326*t10350 - 0.7055*(t10368 + t10353*t4257) + 0.0184*(t10363 + t10353*t4295) + t10357*t4462 + t10353*t4510;
  p_output1[32]=t10284*t10320 + t10326*t10378 - 0.7055*(t10391 + t10381*t4257) + 0.0184*(t10387 + t10381*t4295) + t10384*t4462 + t10381*t4510;
  p_output1[33]=t10398*t6416 - 0.7055*(t10342 - 1.*t4257*t6416) + t10401*t6783 + 0.0184*t6814;
  p_output1[34]=t10357*t10401 + t10398*t10411 - 0.7055*(t10368 - 1.*t10411*t4257) + 0.0184*(t10363 - 1.*t10411*t4295);
  p_output1[35]=t10384*t10401 + t10398*t10428 - 0.7055*(t10391 - 1.*t10428*t4257) + 0.0184*(t10387 - 1.*t10428*t4295);
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



void Jp_ankle_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
