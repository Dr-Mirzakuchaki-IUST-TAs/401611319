/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/direct/project_vhdl/AD9255SPI.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_3846356215_3665547200_p_0(char *t0)
{
    char t26[16];
    char t27[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    unsigned char t24;
    char *t25;
    unsigned int t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    int t32;
    int t33;
    unsigned char t34;
    char *t35;
    char *t36;
    int t37;
    unsigned char t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    static char *nl0[] = {&&LAB11, &&LAB12};

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6712);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 6792);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(50, ng0);
    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)3, 1U);
    t5 = (t0 + 6856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 1U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 6920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(52, ng0);
    t1 = xsi_get_transient_memory(24U);
    memset(t1, 0, 24U);
    t2 = t1;
    memset(t2, (unsigned char)2, 24U);
    t5 = (t0 + 6984);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 24U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 7048);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3432U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t12);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(59, ng0);
    t7 = (t0 + 6792);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(60, ng0);
    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)3, 1U);
    t5 = (t0 + 6856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 1U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 6920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 7048);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB10;

LAB12:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 6792);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t16 = (t15 - 0);
    t17 = (t16 * -1);
    t18 = (1 * t17);
    t19 = (0U + t18);
    t1 = (t0 + 6856);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, t19, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = (t0 + 3752U);
    t5 = *((char **)t1);
    t16 = *((int *)t5);
    t3 = (t15 == t16);
    if (t3 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t16 = (t15 + 1);
    t1 = (t0 + 7240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t16;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(140, ng0);
    t1 = (t0 + 7048);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB10;

LAB13:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 6792);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 < 1);
    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 7112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);

LAB17:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 == 0);
    if (t3 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = (t0 + 7176);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = (t0 + 7240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t15;
    xsi_driver_first_trans_fast(t1);

LAB20:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 7368);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t15 = (16 - 1);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 7432);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 7496);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 7560);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 24U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 7624);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(84, ng0);
    t15 = (16 + 24);
    t16 = (t15 * 2);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t20 = ieee_std_logic_arith_conv_integer_ulogic(IEEE_P_3499444699, t3);
    t21 = (t16 + t20);
    t22 = (t21 - 1);
    t1 = (t0 + 7688);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t22;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 7048);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1992U);
    t5 = *((char **)t1);
    t16 = *((int *)t5);
    t1 = (t0 + 7112);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t16;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 7176);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 7240);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 1;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 7240);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 7368);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t16 = (t15 + 1);
    t1 = (t0 + 7624);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t16;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t16 = (16 + 24);
    t20 = (t16 * 2);
    t21 = (t20 + 1);
    t4 = (t15 < t21);
    if (t4 == 1)
        goto LAB28;

LAB29:    t3 = (unsigned char)0;

LAB30:    if (t3 != 0)
        goto LAB25;

LAB27:
LAB26:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)3);
    if (t10 == 1)
        goto LAB34;

LAB35:    t3 = (unsigned char)0;

LAB36:    if (t3 != 0)
        goto LAB31;

LAB33:
LAB32:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB45;

LAB46:    t4 = (unsigned char)0;

LAB47:    if (t4 == 1)
        goto LAB42;

LAB43:    t3 = (unsigned char)0;

LAB44:    if (t3 != 0)
        goto LAB39;

LAB41:
LAB40:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB56;

LAB57:    t4 = (unsigned char)0;

LAB58:    if (t4 == 1)
        goto LAB53;

LAB54:    t3 = (unsigned char)0;

LAB55:    if (t3 != 0)
        goto LAB50;

LAB52:
LAB51:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)2);
    if (t10 == 1)
        goto LAB62;

LAB63:    t3 = (unsigned char)0;

LAB64:    if (t3 != 0)
        goto LAB59;

LAB61:
LAB60:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t16 = (16 + 24);
    t20 = (t16 * 2);
    t21 = (t20 + 1);
    t3 = (t15 == t21);
    if (t3 != 0)
        goto LAB73;

LAB75:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 7048);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB74:    goto LAB23;

LAB25:    xsi_set_current_line(102, ng0);
    t7 = (t0 + 2632U);
    t8 = *((char **)t7);
    t12 = *((unsigned char *)t8);
    t24 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t12);
    t7 = (t0 + 7304);
    t9 = (t7 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t25 = *((char **)t14);
    *((unsigned char *)t25) = t24;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB26;

LAB28:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t1 = (t0 + 3592U);
    t6 = *((char **)t1);
    t22 = *((int *)t6);
    t23 = (t22 - 0);
    t17 = (t23 * -1);
    xsi_vhdl_check_range_of_index(0, 0, -1, t22);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t1 = (t5 + t19);
    t10 = *((unsigned char *)t1);
    t11 = (t10 == (unsigned char)2);
    t3 = t11;
    goto LAB30;

LAB31:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 4552U);
    t7 = *((char **)t1);
    t22 = (16 - 1);
    t23 = (t22 - 15);
    t17 = (t23 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t1 = (t7 + t19);
    t12 = *((unsigned char *)t1);
    t8 = (t0 + 6920);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t25 = *((char **)t14);
    *((unsigned char *)t25) = t12;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t15 = (16 - 2);
    t17 = (15 - t15);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t27 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 14;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t16 = (0 - 14);
    t28 = (t16 * -1);
    t28 = (t28 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t28;
    t5 = xsi_base_array_concat(t5, t26, t6, (char)97, t1, t27, (char)99, (unsigned char)2, (char)101);
    t28 = (15U + 1U);
    t3 = (16U != t28);
    if (t3 == 1)
        goto LAB37;

LAB38:    t8 = (t0 + 7496);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t25 = *((char **)t14);
    memcpy(t25, t5, 16U);
    xsi_driver_first_trans_fast(t8);
    goto LAB32;

LAB34:    t1 = (t0 + 4072U);
    t5 = *((char **)t1);
    t15 = *((int *)t5);
    t1 = (t0 + 4872U);
    t6 = *((char **)t1);
    t16 = *((int *)t6);
    t20 = (24 * 2);
    t21 = (t16 - t20);
    t11 = (t15 < t21);
    t3 = t11;
    goto LAB36;

LAB37:    xsi_size_not_matching(16U, t28, 0);
    goto LAB38;

LAB39:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 4712U);
    t8 = *((char **)t1);
    t22 = (24 - 1);
    t23 = (t22 - 23);
    t17 = (t23 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t1 = (t8 + t19);
    t30 = *((unsigned char *)t1);
    t9 = (t0 + 6920);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t25 = (t14 + 56U);
    t31 = *((char **)t25);
    *((unsigned char *)t31) = t30;
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t15 = (24 - 2);
    t17 = (23 - t15);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t27 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 22;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t16 = (0 - 22);
    t28 = (t16 * -1);
    t28 = (t28 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t28;
    t5 = xsi_base_array_concat(t5, t26, t6, (char)97, t1, t27, (char)99, (unsigned char)2, (char)101);
    t28 = (23U + 1U);
    t3 = (24U != t28);
    if (t3 == 1)
        goto LAB48;

LAB49:    t8 = (t0 + 7560);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t25 = *((char **)t14);
    memcpy(t25, t5, 24U);
    xsi_driver_first_trans_fast(t8);
    goto LAB40;

LAB42:    t1 = (t0 + 4072U);
    t6 = *((char **)t1);
    t15 = *((int *)t6);
    t1 = (t0 + 4872U);
    t7 = *((char **)t1);
    t16 = *((int *)t7);
    t20 = (24 * 2);
    t21 = (t16 - t20);
    t29 = (t15 > t21);
    t3 = t29;
    goto LAB44;

LAB45:    t1 = (t0 + 4392U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t24 = (t12 == (unsigned char)2);
    t4 = t24;
    goto LAB47;

LAB48:    xsi_size_not_matching(24U, t28, 0);
    goto LAB49;

LAB50:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 6920);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB51;

LAB53:    t1 = (t0 + 4072U);
    t6 = *((char **)t1);
    t15 = *((int *)t6);
    t1 = (t0 + 4872U);
    t7 = *((char **)t1);
    t16 = *((int *)t7);
    t20 = (24 * 2);
    t21 = (t16 - t20);
    t29 = (t15 > t21);
    t3 = t29;
    goto LAB55;

LAB56:    t1 = (t0 + 4392U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t24 = (t12 == (unsigned char)3);
    t4 = t24;
    goto LAB58;

LAB59:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 4392U);
    t7 = *((char **)t1);
    t24 = *((unsigned char *)t7);
    t29 = (t24 == (unsigned char)3);
    if (t29 == 1)
        goto LAB68;

LAB69:    t12 = (unsigned char)0;

LAB70:    if (t12 != 0)
        goto LAB65;

LAB67:
LAB66:    goto LAB60;

LAB62:    t1 = (t0 + 4072U);
    t5 = *((char **)t1);
    t15 = *((int *)t5);
    t1 = (t0 + 4872U);
    t6 = *((char **)t1);
    t16 = *((int *)t6);
    t20 = (t16 + 1);
    t11 = (t15 < t20);
    t3 = t11;
    goto LAB64;

LAB65:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 4712U);
    t13 = *((char **)t1);
    t33 = (24 - 2);
    t17 = (23 - t33);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t13 + t19);
    t14 = (t0 + 2952U);
    t25 = *((char **)t14);
    t34 = *((unsigned char *)t25);
    t31 = ((IEEE_P_2592010699) + 4024);
    t35 = (t27 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = 22;
    t36 = (t35 + 4U);
    *((int *)t36) = 0;
    t36 = (t35 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - 22);
    t28 = (t37 * -1);
    t28 = (t28 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t28;
    t14 = xsi_base_array_concat(t14, t26, t31, (char)97, t1, t27, (char)99, t34, (char)101);
    t28 = (23U + 1U);
    t38 = (24U != t28);
    if (t38 == 1)
        goto LAB71;

LAB72:    t36 = (t0 + 7560);
    t39 = (t36 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t14, 24U);
    xsi_driver_first_trans_fast(t36);
    goto LAB66;

LAB68:    t1 = (t0 + 4072U);
    t8 = *((char **)t1);
    t21 = *((int *)t8);
    t1 = (t0 + 4872U);
    t9 = *((char **)t1);
    t22 = *((int *)t9);
    t23 = (24 * 2);
    t32 = (t22 - t23);
    t30 = (t21 > t32);
    t12 = t30;
    goto LAB70;

LAB71:    xsi_size_not_matching(24U, t28, 0);
    goto LAB72;

LAB73:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 6792);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(128, ng0);
    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)3, 1U);
    t5 = (t0 + 6856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 1U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 6920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB76;

LAB78:
LAB77:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 7048);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB74;

LAB76:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 4712U);
    t5 = *((char **)t1);
    t1 = (t0 + 6984);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 24U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB77;

}


extern void work_a_3846356215_3665547200_init()
{
	static char *pe[] = {(void *)work_a_3846356215_3665547200_p_0};
	xsi_register_didat("work_a_3846356215_3665547200", "isim/ad9255TB24_isim_beh.exe.sim/work/a_3846356215_3665547200.didat");
	xsi_register_executes(pe);
}
