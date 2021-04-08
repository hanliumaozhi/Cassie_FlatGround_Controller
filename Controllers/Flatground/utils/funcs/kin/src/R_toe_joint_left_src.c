/*
 * Automatically Generated from Mathematica.
 * Thu 8 Apr 2021 07:49:54 GMT+08:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_left_src.h"

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
  double t1557;
  double t2499;
  double t2703;
  double t2622;
  double t2745;
  double t2479;
  double t2956;
  double t3115;
  double t3217;
  double t2634;
  double t2769;
  double t2907;
  double t3349;
  double t1240;
  double t3777;
  double t3817;
  double t3820;
  double t1640;
  double t1686;
  double t2261;
  double t2950;
  double t3375;
  double t3409;
  double t3411;
  double t3620;
  double t3731;
  double t3823;
  double t3908;
  double t3738;
  double t3898;
  double t3900;
  double t1210;
  double t3909;
  double t3912;
  double t3919;
  double t4018;
  double t3903;
  double t3933;
  double t3978;
  double t1131;
  double t4022;
  double t4038;
  double t4058;
  double t4102;
  double t3995;
  double t4079;
  double t4092;
  double t1060;
  double t4113;
  double t4120;
  double t4124;
  double t982;
  double t4271;
  double t4283;
  double t4336;
  double t4238;
  double t4241;
  double t4250;
  double t4433;
  double t4458;
  double t4460;
  double t4217;
  double t4270;
  double t4337;
  double t4340;
  double t4369;
  double t4401;
  double t4403;
  double t4478;
  double t4484;
  double t4507;
  double t4514;
  double t4519;
  double t4501;
  double t4525;
  double t4540;
  double t4554;
  double t4565;
  double t4569;
  double t4158;
  double t4551;
  double t4573;
  double t4583;
  double t4609;
  double t4611;
  double t4613;
  double t4736;
  double t4742;
  double t4751;
  double t4677;
  double t4682;
  double t4697;
  double t4702;
  double t4705;
  double t4721;
  double t4722;
  double t4752;
  double t4753;
  double t4773;
  double t4798;
  double t4801;
  double t4758;
  double t4810;
  double t4849;
  double t4876;
  double t4881;
  double t4889;
  double t4855;
  double t4897;
  double t4906;
  double t4908;
  double t4925;
  double t4927;
  double t4096;
  double t4126;
  double t4132;
  double t4161;
  double t4175;
  double t4187;
  double t4584;
  double t4615;
  double t4618;
  double t4641;
  double t4655;
  double t4662;
  double t4907;
  double t4929;
  double t4968;
  double t4995;
  double t4999;
  double t5010;
  t1557 = Cos(var1[3]);
  t2499 = Cos(var1[5]);
  t2703 = Sin(var1[4]);
  t2622 = Sin(var1[3]);
  t2745 = Sin(var1[5]);
  t2479 = Cos(var1[6]);
  t2956 = t1557*t2499*t2703;
  t3115 = t2622*t2745;
  t3217 = t2956 + t3115;
  t2634 = -1.*t2499*t2622;
  t2769 = t1557*t2703*t2745;
  t2907 = t2634 + t2769;
  t3349 = Sin(var1[6]);
  t1240 = Cos(var1[8]);
  t3777 = t2479*t3217;
  t3817 = -1.*t2907*t3349;
  t3820 = t3777 + t3817;
  t1640 = Cos(var1[4]);
  t1686 = Cos(var1[7]);
  t2261 = t1557*t1640*t1686;
  t2950 = t2479*t2907;
  t3375 = t3217*t3349;
  t3409 = t2950 + t3375;
  t3411 = Sin(var1[7]);
  t3620 = t3409*t3411;
  t3731 = t2261 + t3620;
  t3823 = Sin(var1[8]);
  t3908 = Cos(var1[9]);
  t3738 = t1240*t3731;
  t3898 = t3820*t3823;
  t3900 = t3738 + t3898;
  t1210 = Sin(var1[9]);
  t3909 = t1240*t3820;
  t3912 = -1.*t3731*t3823;
  t3919 = t3909 + t3912;
  t4018 = Cos(var1[10]);
  t3903 = -1.*t1210*t3900;
  t3933 = t3908*t3919;
  t3978 = t3903 + t3933;
  t1131 = Sin(var1[10]);
  t4022 = t3908*t3900;
  t4038 = t1210*t3919;
  t4058 = t4022 + t4038;
  t4102 = Cos(var1[11]);
  t3995 = t1131*t3978;
  t4079 = t4018*t4058;
  t4092 = t3995 + t4079;
  t1060 = Sin(var1[11]);
  t4113 = t4018*t3978;
  t4120 = -1.*t1131*t4058;
  t4124 = t4113 + t4120;
  t982 = Cos(var1[12]);
  t4271 = t2499*t2622*t2703;
  t4283 = -1.*t1557*t2745;
  t4336 = t4271 + t4283;
  t4238 = t1557*t2499;
  t4241 = t2622*t2703*t2745;
  t4250 = t4238 + t4241;
  t4433 = t2479*t4336;
  t4458 = -1.*t4250*t3349;
  t4460 = t4433 + t4458;
  t4217 = t1640*t1686*t2622;
  t4270 = t2479*t4250;
  t4337 = t4336*t3349;
  t4340 = t4270 + t4337;
  t4369 = t4340*t3411;
  t4401 = t4217 + t4369;
  t4403 = t1240*t4401;
  t4478 = t4460*t3823;
  t4484 = t4403 + t4478;
  t4507 = t1240*t4460;
  t4514 = -1.*t4401*t3823;
  t4519 = t4507 + t4514;
  t4501 = -1.*t1210*t4484;
  t4525 = t3908*t4519;
  t4540 = t4501 + t4525;
  t4554 = t3908*t4484;
  t4565 = t1210*t4519;
  t4569 = t4554 + t4565;
  t4158 = Sin(var1[12]);
  t4551 = t1131*t4540;
  t4573 = t4018*t4569;
  t4583 = t4551 + t4573;
  t4609 = t4018*t4540;
  t4611 = -1.*t1131*t4569;
  t4613 = t4609 + t4611;
  t4736 = t1640*t2499*t2479;
  t4742 = -1.*t1640*t2745*t3349;
  t4751 = t4736 + t4742;
  t4677 = -1.*t1686*t2703;
  t4682 = t1640*t2479*t2745;
  t4697 = t1640*t2499*t3349;
  t4702 = t4682 + t4697;
  t4705 = t4702*t3411;
  t4721 = t4677 + t4705;
  t4722 = t1240*t4721;
  t4752 = t4751*t3823;
  t4753 = t4722 + t4752;
  t4773 = t1240*t4751;
  t4798 = -1.*t4721*t3823;
  t4801 = t4773 + t4798;
  t4758 = -1.*t1210*t4753;
  t4810 = t3908*t4801;
  t4849 = t4758 + t4810;
  t4876 = t3908*t4753;
  t4881 = t1210*t4801;
  t4889 = t4876 + t4881;
  t4855 = t1131*t4849;
  t4897 = t4018*t4889;
  t4906 = t4855 + t4897;
  t4908 = t4018*t4849;
  t4925 = -1.*t1131*t4889;
  t4927 = t4908 + t4925;
  t4096 = -1.*t1060*t4092;
  t4126 = t4102*t4124;
  t4132 = t4096 + t4126;
  t4161 = t4102*t4092;
  t4175 = t1060*t4124;
  t4187 = t4161 + t4175;
  t4584 = -1.*t1060*t4583;
  t4615 = t4102*t4613;
  t4618 = t4584 + t4615;
  t4641 = t4102*t4583;
  t4655 = t1060*t4613;
  t4662 = t4641 + t4655;
  t4907 = -1.*t1060*t4906;
  t4929 = t4102*t4927;
  t4968 = t4907 + t4929;
  t4995 = t4102*t4906;
  t4999 = t1060*t4927;
  t5010 = t4995 + t4999;
  p_output1[0]=t4158*t4187 - 1.*t4132*t982;
  p_output1[1]=t4158*t4662 - 1.*t4618*t982;
  p_output1[2]=t4158*t5010 - 1.*t4968*t982;
  p_output1[3]=t4132*t4158 + t4187*t982;
  p_output1[4]=t4158*t4618 + t4662*t982;
  p_output1[5]=t4158*t4968 + t5010*t982;
  p_output1[6]=-1.*t1686*t3409 + t1557*t1640*t3411;
  p_output1[7]=t1640*t2622*t3411 - 1.*t1686*t4340;
  p_output1[8]=-1.*t2703*t3411 - 1.*t1686*t4702;
}



void R_toe_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
