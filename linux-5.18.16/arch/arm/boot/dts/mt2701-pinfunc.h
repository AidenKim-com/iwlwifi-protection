/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2015 MediaTek Inc.
 * Author: Biao Huang <biao.huang@mediatek.com>
 */

#ifndef __DTS_MT2701_PINFUNC_H
#define __DTS_MT2701_PINFUNC_H

#include <dt-bindings/pinctrl/mt65xx.h>

#define MT2701_PIN_0_PWRAP_SPI0_MI__FUNC_GPIO0 (MTK_PIN_NO(0) | 0)
#define MT2701_PIN_0_PWRAP_SPI0_MI__FUNC_PWRAP_SPIDO (MTK_PIN_NO(0) | 1)
#define MT2701_PIN_0_PWRAP_SPI0_MI__FUNC_PWRAP_SPIDI (MTK_PIN_NO(0) | 2)

#define MT2701_PIN_1_PWRAP_SPI0_MO__FUNC_GPIO1 (MTK_PIN_NO(1) | 0)
#define MT2701_PIN_1_PWRAP_SPI0_MO__FUNC_PWRAP_SPIDI (MTK_PIN_NO(1) | 1)
#define MT2701_PIN_1_PWRAP_SPI0_MO__FUNC_PWRAP_SPIDO (MTK_PIN_NO(1) | 2)

#define MT2701_PIN_2_PWRAP_INT__FUNC_GPIO2 (MTK_PIN_NO(2) | 0)
#define MT2701_PIN_2_PWRAP_INT__FUNC_PWRAP_INT (MTK_PIN_NO(2) | 1)

#define MT2701_PIN_3_PWRAP_SPI0_CK__FUNC_GPIO3 (MTK_PIN_NO(3) | 0)
#define MT2701_PIN_3_PWRAP_SPI0_CK__FUNC_PWRAP_SPICK_I (MTK_PIN_NO(3) | 1)

#define MT2701_PIN_4_PWRAP_SPI0_CSN__FUNC_GPIO4 (MTK_PIN_NO(4) | 0)
#define MT2701_PIN_4_PWRAP_SPI0_CSN__FUNC_PWRAP_SPICS_B_I (MTK_PIN_NO(4) | 1)

#define MT2701_PIN_5_PWRAP_SPI0_CK2__FUNC_GPIO5 (MTK_PIN_NO(5) | 0)
#define MT2701_PIN_5_PWRAP_SPI0_CK2__FUNC_PWRAP_SPICK2_I (MTK_PIN_NO(5) | 1)
#define MT2701_PIN_5_PWRAP_SPI0_CK2__FUNC_ANT_SEL1 (MTK_PIN_NO(5) | 5)

#define MT2701_PIN_6_PWRAP_SPI0_CSN2__FUNC_GPIO6 (MTK_PIN_NO(6) | 0)
#define MT2701_PIN_6_PWRAP_SPI0_CSN2__FUNC_PWRAP_SPICS2_B_I (MTK_PIN_NO(6) | 1)
#define MT2701_PIN_6_PWRAP_SPI0_CSN2__FUNC_ANT_SEL0 (MTK_PIN_NO(6) | 5)
#define MT2701_PIN_6_PWRAP_SPI0_CSN2__FUNC_DBG_MON_A_0 (MTK_PIN_NO(6) | 7)

#define MT2701_PIN_7_SPI1_CSN__FUNC_GPIO7 (MTK_PIN_NO(7) | 0)
#define MT2701_PIN_7_SPI1_CSN__FUNC_SPI1_CS (MTK_PIN_NO(7) | 1)
#define MT2701_PIN_7_SPI1_CSN__FUNC_KCOL0 (MTK_PIN_NO(7) | 4)
#define MT2701_PIN_7_SPI1_CSN__FUNC_DBG_MON_B_12 (MTK_PIN_NO(7) | 7)

#define MT2701_PIN_8_SPI1_MI__FUNC_GPIO8 (MTK_PIN_NO(8) | 0)
#define MT2701_PIN_8_SPI1_MI__FUNC_SPI1_MI (MTK_PIN_NO(8) | 1)
#define MT2701_PIN_8_SPI1_MI__FUNC_SPI1_MO (MTK_PIN_NO(8) | 2)
#define MT2701_PIN_8_SPI1_MI__FUNC_KCOL1 (MTK_PIN_NO(8) | 4)
#define MT2701_PIN_8_SPI1_MI__FUNC_DBG_MON_B_13 (MTK_PIN_NO(8) | 7)

#define MT2701_PIN_9_SPI1_MO__FUNC_GPIO9 (MTK_PIN_NO(9) | 0)
#define MT2701_PIN_9_SPI1_MO__FUNC_SPI1_MO (MTK_PIN_NO(9) | 1)
#define MT2701_PIN_9_SPI1_MO__FUNC_SPI1_MI (MTK_PIN_NO(9) | 2)
#define MT2701_PIN_9_SPI1_MO__FUNC_EXT_FRAME_SYNC (MTK_PIN_NO(9) | 3)
#define MT2701_PIN_9_SPI1_MO__FUNC_KCOL2 (MTK_PIN_NO(9) | 4)
#define MT2701_PIN_9_SPI1_MO__FUNC_DBG_MON_B_14 (MTK_PIN_NO(9) | 7)

#define MT2701_PIN_10_RTC32K_CK__FUNC_GPIO10 (MTK_PIN_NO(10) | 0)
#define MT2701_PIN_10_RTC32K_CK__FUNC_RTC32K_CK (MTK_PIN_NO(10) | 1)

#define MT2701_PIN_11_WATCHDOG__FUNC_GPIO11 (MTK_PIN_NO(11) | 0)
#define MT2701_PIN_11_WATCHDOG__FUNC_WATCHDOG (MTK_PIN_NO(11) | 1)

#define MT2701_PIN_12_SRCLKENA__FUNC_GPIO12 (MTK_PIN_NO(12) | 0)
#define MT2701_PIN_12_SRCLKENA__FUNC_SRCLKENA (MTK_PIN_NO(12) | 1)

#define MT2701_PIN_13_SRCLKENAI__FUNC_GPIO13 (MTK_PIN_NO(13) | 0)
#define MT2701_PIN_13_SRCLKENAI__FUNC_SRCLKENAI (MTK_PIN_NO(13) | 1)

#define MT2701_PIN_14_URXD2__FUNC_GPIO14 (MTK_PIN_NO(14) | 0)
#define MT2701_PIN_14_URXD2__FUNC_URXD2 (MTK_PIN_NO(14) | 1)
#define MT2701_PIN_14_URXD2__FUNC_UTXD2 (MTK_PIN_NO(14) | 2)
#define MT2701_PIN_14_URXD2__FUNC_SRCCLKENAI2 (MTK_PIN_NO(14) | 5)
#define MT2701_PIN_14_URXD2__FUNC_DBG_MON_B_30 (MTK_PIN_NO(14) | 7)

#define MT2701_PIN_15_UTXD2__FUNC_GPIO15 (MTK_PIN_NO(15) | 0)
#define MT2701_PIN_15_UTXD2__FUNC_UTXD2 (MTK_PIN_NO(15) | 1)
#define MT2701_PIN_15_UTXD2__FUNC_URXD2 (MTK_PIN_NO(15) | 2)
#define MT2701_PIN_15_UTXD2__FUNC_DBG_MON_B_31 (MTK_PIN_NO(15) | 7)

#define MT2701_PIN_18_PCM_CLK__FUNC_GPIO18 (MTK_PIN_NO(18) | 0)
#define MT2701_PIN_18_PCM_CLK__FUNC_PCM_CLK0 (MTK_PIN_NO(18) | 1)
#define MT2701_PIN_18_PCM_CLK__FUNC_MRG_CLK (MTK_PIN_NO(18) | 2)
#define MT2701_PIN_18_PCM_CLK__FUNC_MM_TEST_CK (MTK_PIN_NO(18) | 4)
#define MT2701_PIN_18_PCM_CLK__FUNC_CONN_DSP_JCK (MTK_PIN_NO(18) | 5)
#define MT2701_PIN_18_PCM_CLK__FUNC_WCN_PCM_CLKO (MTK_PIN_NO(18) | 6)
#define MT2701_PIN_18_PCM_CLK__FUNC_DBG_MON_A_3 (MTK_PIN_NO(18) | 7)

#define MT2701_PIN_19_PCM_SYNC__FUNC_GPIO19 (MTK_PIN_NO(19) | 0)
#define MT2701_PIN_19_PCM_SYNC__FUNC_PCM_SYNC (MTK_PIN_NO(19) | 1)
#define MT2701_PIN_19_PCM_SYNC__FUNC_MRG_SYNC (MTK_PIN_NO(19) | 2)
#define MT2701_PIN_19_PCM_SYNC__FUNC_CONN_DSP_JINTP (MTK_PIN_NO(19) | 5)
#define MT2701_PIN_19_PCM_SYNC__FUNC_WCN_PCM_SYNC (MTK_PIN_NO(19) | 6)
#define MT2701_PIN_19_PCM_SYNC__FUNC_DBG_MON_A_5 (MTK_PIN_NO(19) | 7)

#define MT2701_PIN_20_PCM_RX__FUNC_GPIO20 (MTK_PIN_NO(20) | 0)
#define MT2701_PIN_20_PCM_RX__FUNC_PCM_RX (MTK_PIN_NO(20) | 1)
#define MT2701_PIN_20_PCM_RX__FUNC_MRG_RX (MTK_PIN_NO(20) | 2)
#define MT2701_PIN_20_PCM_RX__FUNC_MRG_TX (MTK_PIN_NO(20) | 3)
#define MT2701_PIN_20_PCM_RX__FUNC_PCM_TX (MTK_PIN_NO(20) | 4)
#define MT2701_PIN_20_PCM_RX__FUNC_CONN_DSP_JDI (MTK_PIN_NO(20) | 5)
#define MT2701_PIN_20_PCM_RX__FUNC_WCN_PCM_RX (MTK_PIN_NO(20) | 6)
#define MT2701_PIN_20_PCM_RX__FUNC_DBG_MON_A_4 (MTK_PIN_NO(20) | 7)

#define MT2701_PIN_21_PCM_TX__FUNC_GPIO21 (MTK_PIN_NO(21) | 0)
#define MT2701_PIN_21_PCM_TX__FUNC_PCM_TX (MTK_PIN_NO(21) | 1)
#define MT2701_PIN_21_PCM_TX__FUNC_MRG_TX (MTK_PIN_NO(21) | 2)
#define MT2701_PIN_21_PCM_TX__FUNC_MRG_RX (MTK_PIN_NO(21) | 3)
#define MT2701_PIN_21_PCM_TX__FUNC_PCM_RX (MTK_PIN_NO(21) | 4)
#define MT2701_PIN_21_PCM_TX__FUNC_CONN_DSP_JMS (MTK_PIN_NO(21) | 5)
#define MT2701_PIN_21_PCM_TX__FUNC_WCN_PCM_TX (MTK_PIN_NO(21) | 6)
#define MT2701_PIN_21_PCM_TX__FUNC_DBG_MON_A_2 (MTK_PIN_NO(21) | 7)

#define MT2701_PIN_22_EINT0__FUNC_GPIO22 (MTK_PIN_NO(22) | 0)
#define MT2701_PIN_22_EINT0__FUNC_UCTS0 (MTK_PIN_NO(22) | 1)
#define MT2701_PIN_22_EINT0__FUNC_KCOL3 (MTK_PIN_NO(22) | 3)
#define MT2701_PIN_22_EINT0__FUNC_CONN_DSP_JDO (MTK_PIN_NO(22) | 4)
#define MT2701_PIN_22_EINT0__FUNC_EXT_FRAME_SYNC (MTK_PIN_NO(22) | 5)
#define MT2701_PIN_22_EINT0__FUNC_DBG_MON_A_30 (MTK_PIN_NO(22) | 7)
#define MT2701_PIN_22_EINT0__FUNC_PCIE0_PERST_N (MTK_PIN_NO(22) | 10)

#define MT2701_PIN_23_EINT1__FUNC_GPIO23 (MTK_PIN_NO(23) | 0)
#define MT2701_PIN_23_EINT1__FUNC_URTS0 (MTK_PIN_NO(23) | 1)
#define MT2701_PIN_23_EINT1__FUNC_KCOL2 (MTK_PIN_NO(23) | 3)
#define MT2701_PIN_23_EINT1__FUNC_CONN_MCU_TDO (MTK_PIN_NO(23) | 4)
#define MT2701_PIN_23_EINT1__FUNC_EXT_FRAME_SYNC (MTK_PIN_NO(23) | 5)
#define MT2701_PIN_23_EINT1__FUNC_DBG_MON_A_29 (MTK_PIN_NO(23) | 7)
#define MT2701_PIN_23_EINT1__FUNC_PCIE1_PERST_N (MTK_PIN_NO(23) | 10)

#define MT2701_PIN_24_EINT2__FUNC_GPIO24 (MTK_PIN_NO(24) | 0)
#define MT2701_PIN_24_EINT2__FUNC_UCTS1 (MTK_PIN_NO(24) | 1)
#define MT2701_PIN_24_EINT2__FUNC_KCOL1 (MTK_PIN_NO(24) | 3)
#define MT2701_PIN_24_EINT2__FUNC_CONN_MCU_DBGACK_N (MTK_PIN_NO(24) | 4)
#define MT2701_PIN_24_EINT2__FUNC_DBG_MON_A_28 (MTK_PIN_NO(24) | 7)
#define MT2701_PIN_24_EINT2__FUNC_PCIE2_PERST_N (MTK_PIN_NO(24) | 10)

#define MT2701_PIN_25_EINT3__FUNC_GPIO25 (MTK_PIN_NO(25) | 0)
#define MT2701_PIN_25_EINT3__FUNC_URTS1 (MTK_PIN_NO(25) | 1)
#define MT2701_PIN_25_EINT3__FUNC_KCOL0 (MTK_PIN_NO(25) | 3)
#define MT2701_PIN_25_EINT3__FUNC_CONN_MCU_DBGI_N (MTK_PIN_NO(25) | 4)
#define MT2701_PIN_25_EINT3__FUNC_DBG_MON_A_27 (MTK_PIN_NO(25) | 7)

#define MT2701_PIN_26_EINT4__FUNC_GPIO26 (MTK_PIN_NO(26) | 0)
#define MT2701_PIN_26_EINT4__FUNC_UCTS3 (MTK_PIN_NO(26) | 1)
#define MT2701_PIN_26_EINT4__FUNC_DRV_VBUS_P1 (MTK_PIN_NO(26) | 2)
#define MT2701_PIN_26_EINT4__FUNC_KROW3 (MTK_PIN_NO(26) | 3)
#define MT2701_PIN_26_EINT4__FUNC_CONN_MCU_TCK0 (MTK_PIN_NO(26) | 4)
#define MT2701_PIN_26_EINT4__FUNC_CONN_MCU_AICE_JCKC (MTK_PIN_NO(26) | 5)
#define MT2701_PIN_26_EINT4__FUNC_PCIE2_WAKE_N (MTK_PIN_NO(26) | 6)
#define MT2701_PIN_26_EINT4__FUNC_DBG_MON_A_26 (MTK_PIN_NO(26) | 7)

#define MT2701_PIN_27_EINT5__FUNC_GPIO27 (MTK_PIN_NO(27) | 0)
#define MT2701_PIN_27_EINT5__FUNC_URTS3 (MTK_PIN_NO(27) | 1)
#define MT2701_PIN_27_EINT5__FUNC_IDDIG_P1 (MTK_PIN_NO(27) | 2)
#define MT2701_PIN_27_EINT5__FUNC_KROW2 (MTK_PIN_NO(27) | 3)
#define MT2701_PIN_27_EINT5__FUNC_CONN_MCU_TDI (MTK_PIN_NO(27) | 4)
#define MT2701_PIN_27_EINT5__FUNC_PCIE1_WAKE_N (MTK_PIN_NO(27) | 6)
#define MT2701_PIN_27_EINT5__FUNC_DBG_MON_A_25 (MTK_PIN_NO(27) | 7)

#define MT2701_PIN_28_EINT6__FUNC_GPIO28 (MTK_PIN_NO(28) | 0)
#define MT2701_PIN_28_EINT6__FUNC_DRV_VBUS (MTK_PIN_NO(28) | 1)
#define MT2701_PIN_28_EINT6__FUNC_KROW1 (MTK_PIN_NO(28) | 3)
#define MT2701_PIN_28_EINT6__FUNC_CONN_MCU_TRST_B (MTK_PIN_NO(28) | 4)
#define MT2701_PIN_28_EINT6__FUNC_PCIE0_WAKE_N (MTK_PIN_NO(28) | 6)
#define MT2701_PIN_28_EINT6__FUNC_DBG_MON_A_24 (MTK_PIN_NO(28) | 7)

#define MT2701_PIN_29_EINT7__FUNC_GPIO29 (MTK_PIN_NO(29) | 0)
#define MT2701_PIN_29_EINT7__FUNC_IDDIG (MTK_PIN_NO(29) | 1)
#define MT2701_PIN_29_EINT7__FUNC_MSDC1_WP (MTK_PIN_NO(29) | 2)
#define MT2701_PIN_29_EINT7__FUNC_KROW0 (MTK_PIN_NO(29) | 3)
#define MT2701_PIN_29_EINT7__FUNC_CONN_MCU_TMS (MTK_PIN_NO(29) | 4)
#define MT2701_PIN_29_EINT7__FUNC_CONN_MCU_AICE_JMSC (MTK_PIN_NO(29) | 5)
#define MT2701_PIN_29_EINT7__FUNC_DBG_MON_A_23 (MTK_PIN_NO(29) | 7)
#define MT2701_PIN_29_EINT7__FUNC_PCIE2_PERST_N (MTK_PIN_NO(29) | 14)

#define MT2701_PIN_33_I2S1_DATA__FUNC_GPIO33 (MTK_PIN_NO(33) | 0)
#define MT2701_PIN_33_I2S1_DATA__FUNC_I2S1_DATA (MTK_PIN_NO(33) | 1)
#define MT2701_PIN_33_I2S1_DATA__FUNC_I2S1_DATA_BYPS (MTK_PIN_NO(33) | 2)
#define MT2701_PIN_33_I2S1_DATA__FUNC_PCM_TX (MTK_PIN_NO(33) | 3)
#define MT2701_PIN_33_I2S1_DATA__FUNC_IMG_TEST_CK (MTK_PIN_NO(33) | 4)
#define MT2701_PIN_33_I2S1_DATA__FUNC_G1_RXD0 (MTK_PIN_NO(33) | 5)
#define MT2701_PIN_33_I2S1_DATA__FUNC_WCN_PCM_TX (MTK_PIN_NO(33) | 6)
#define MT2701_PIN_33_I2S1_DATA__FUNC_DBG_MON_B_8 (MTK_PIN_NO(33) | 7)

#define MT2701_PIN_34_I2S1_DATA_IN__FUNC_GPIO34 (MTK_PIN_NO(34) | 0)
#define MT2701_PIN_34_I2S1_DATA_IN__FUNC_I2S1_DATA_IN (MTK_PIN_NO(34) | 1)
#define MT2701_PIN_34_I2S1_DATA_IN__FUNC_PCM_RX (MTK_PIN_NO(34) | 3)
#define MT2701_PIN_34_I2S1_DATA_IN__FUNC_VDEC_TEST_CK (MTK_PIN_NO(34) | 4)
#define MT2701_PIN_34_I2S1_DATA_IN__FUNC_G1_RXD1 (MTK_PIN_NO(34) | 5)
#define MT2701_PIN_34_I2S1_DATA_IN__FUNC_WCN_PCM_RX (MTK_PIN_NO(34) | 6)
#define MT2701_PIN_34_I2S1_DATA_IN__FUNC_DBG_MON_B_7 (MTK_PIN_NO(34) | 7)

#define MT2701_PIN_35_I2S1_BCK__FUNC_GPIO35 (MTK_PIN_NO(35) | 0)
#define MT2701_PIN_35_I2S1_BCK__FUNC_I2S1_BCK (MTK_PIN_NO(35) | 1)
#define MT2701_PIN_35_I2S1_BCK__FUNC_PCM_CLK0 (MTK_PIN_NO(35) | 3)
#define MT2701_PIN_35_I2S1_BCK__FUNC_G1_RXD2 (MTK_PIN_NO(35) | 5)
#define MT2701_PIN_35_I2S1_BCK__FUNC_WCN_PCM_CLKO (MTK_PIN_NO(35) | 6)
#define MT2701_PIN_35_I2S1_BCK__FUNC_DBG_MON_B_9 (MTK_PIN_NO(35) | 7)

#define MT2701_PIN_36_I2S1_LRCK__FUNC_GPIO36 (MTK_PIN_NO(36) | 0)
#define MT2701_PIN_36_I2S1_LRCK__FUNC_I2S1_LRCK (MTK_PIN_NO(36) | 1)
#define MT2701_PIN_36_I2S1_LRCK__FUNC_PCM_SYNC (MTK_PIN_NO(36) | 3)
#define MT2701_PIN_36_I2S1_LRCK__FUNC_G1_RXD3 (MTK_PIN_NO(36) | 5)
#define MT2701_PIN_36_I2S1_LRCK__FUNC_WCN_PCM_SYNC (MTK_PIN_NO(36) | 6)
#define MT2701_PIN_36_I2S1_LRCK__FUNC_DBG_MON_B_10 (MTK_PIN_NO(36) | 7)

#define MT2701_PIN_37_I2S1_MCLK__FUNC_GPIO37 (MTK_PIN_NO(37) | 0)
#define MT2701_PIN_37_I2S1_MCLK__FUNC_I2S1_MCLK (MTK_PIN_NO(37) | 1)
#define MT2701_PIN_37_I2S1_MCLK__FUNC_G1_RXDV (MTK_PIN_NO(37) | 5)
#define MT2701_PIN_37_I2S1_MCLK__FUNC_DBG_MON_B_11 (MTK_PIN_NO(37) | 7)

#define MT2701_PIN_39_JTMS__FUNC_GPIO39 (MTK_PIN_NO(39) | 0)
#define MT2701_PIN_39_JTMS__FUNC_JTMS (MTK_PIN_NO(39) | 1)
#define MT2701_PIN_39_JTMS__FUNC_CONN_MCU_TMS (MTK_PIN_NO(39) | 2)
#define MT2701_PIN_39_JTMS__FUNC_CONN_MCU_AICE_JMSC (MTK_PIN_NO(39) | 3)
#define MT2701_PIN_39_JTMS__FUNC_DFD_TMS_XI (MTK_PIN_NO(39) | 4)

#define MT2701_PIN_40_JTCK__FUNC_GPIO40 (MTK_PIN_NO(40) | 0)
#define MT2701_PIN_40_JTCK__FUNC_JTCK (MTK_PIN_NO(40) | 1)
#define MT2701_PIN_40_JTCK__FUNC_CONN_MCU_TCK1 (MTK_PIN_NO(40) | 2)
#define MT2701_PIN_40_JTCK__FUNC_CONN_MCU_AICE_JCKC (MTK_PIN_NO(40) | 3)
#define MT2701_PIN_40_JTCK__FUNC_DFD_TCK_XI (MTK_PIN_NO(40) | 4)

#define MT2701_PIN_41_JTDI__FUNC_GPIO41 (MTK_PIN_NO(41) | 0)
#define MT2701_PIN_41_JTDI__FUNC_JTDI (MTK_PIN_NO(41) | 1)
#define MT2701_PIN_41_JTDI__FUNC_CONN_MCU_TDI (MTK_PIN_NO(41) | 2)
#define MT2701_PIN_41_JTDI__FUNC_DFD_TDI_XI (MTK_PIN_NO(41) | 4)

#define MT2701_PIN_42_JTDO__FUNC_GPIO42 (MTK_PIN_NO(42) | 0)
#define MT2701_PIN_42_JTDO__FUNC_JTDO (MTK_PIN_NO(42) | 1)
#define MT2701_PIN_42_JTDO__FUNC_CONN_MCU_TDO (MTK_PIN_NO(42) | 2)
#define MT2701_PIN_42_JTDO__FUNC_DFD_TDO (MTK_PIN_NO(42) | 4)

#define MT2701_PIN_43_NCLE__FUNC_GPIO43 (MTK_PIN_NO(43) | 0)
#define MT2701_PIN_43_NCLE__FUNC_NCLE (MTK_PIN_NO(43) | 1)
#define MT2701_PIN_43_NCLE__FUNC_EXT_XCS2 (MTK_PIN_NO(43) | 2)

#define MT2701_PIN_44_NCEB1__FUNC_GPIO44 (MTK_PIN_NO(44) | 0)
#define MT2701_PIN_44_NCEB1__FUNC_NCEB1 (MTK_PIN_NO(44) | 1)
#define MT2701_PIN_44_NCEB1__FUNC_IDDIG (MTK_PIN_NO(44) | 2)

#define MT2701_PIN_45_NCEB0__FUNC_GPIO45 (MTK_PIN_NO(45) | 0)
#define MT2701_PIN_45_NCEB0__FUNC_NCEB0 (MTK_PIN_NO(45) | 1)
#define MT2701_PIN_45_NCEB0__FUNC_DRV_VBUS (MTK_PIN_NO(45) | 2)

#define MT2701_PIN_46_IR__FUNC_GPIO46 (MTK_PIN_NO(46) | 0)
#define MT2701_PIN_46_IR__FUNC_IR (MTK_PIN_NO(46) | 1)

#define MT2701_PIN_47_NREB__FUNC_GPIO47 (MTK_PIN_NO(47) | 0)
#define MT2701_PIN_47_NREB__FUNC_NREB (MTK_PIN_NO(47) | 1)
#define MT2701_PIN_47_NREB__FUNC_IDDIG_P1 (MTK_PIN_NO(47) | 2)

#define MT2701_PIN_48_NRNB__FUNC_GPIO48 (MTK_PIN_NO(48) | 0)
#define MT2701_PIN_48_NRNB__FUNC_NRNB (MTK_PIN_NO(48) | 1)
#define MT2701_PIN_48_NRNB__FUNC_DRV_VBUS_P1 (MTK_PIN_NO(48) | 2)

#define MT2701_PIN_49_I2S0_DATA__FUNC_GPIO49 (MTK_PIN_NO(49) | 0)
#define MT2701_PIN_49_I2S0_DATA__FUNC_I2S0_DATA (MTK_PIN_NO(49) | 1)
#define MT2701_PIN_49_I2S0_DATA__FUNC_I2S0_DATA_BYPS (MTK_PIN_NO(49) | 2)
#define MT2701_PIN_49_I2S0_DATA__FUNC_PCM_TX (MTK_PIN_NO(49) | 3)
#define MT2701_PIN_49_I2S0_DATA__FUNC_WCN_I2S_DO (MTK_PIN_NO(49) | 6)
#define MT2701_PIN_49_I2S0_DATA__FUNC_DBG_MON_B_3 (MTK_PIN_NO(49) | 7)

#define MT2701_PIN_53_SPI0_CSN__FUNC_GPIO53 (MTK_PIN_NO(53) | 0)
#define MT2701_PIN_53_SPI0_CSN__FUNC_SPI0_CS (MTK_PIN_NO(53) | 1)
#define MT2701_PIN_53_SPI0_CSN__FUNC_SPDIF (MTK_PIN_NO(53) | 3)
#define MT2701_PIN_53_SPI0_CSN__FUNC_ADC_CK (MTK_PIN_NO(53) | 4)
#define MT2701_PIN_53_SPI0_CSN__FUNC_PWM1 (MTK_PIN_NO(53) | 5)
#define MT2701_PIN_53_SPI0_CSN__FUNC_DBG_MON_A_7 (MTK_PIN_NO(53) | 7)

#define MT2701_PIN_54_SPI0_CK__FUNC_GPIO54 (MTK_PIN_NO(54) | 0)
#define MT2701_PIN_54_SPI0_CK__FUNC_SPI0_CK (MTK_PIN_NO(54) | 1)
#define MT2701_PIN_54_SPI0_CK__FUNC_SPDIF_IN1 (MTK_PIN_NO(54) | 3)
#define MT2701_PIN_54_SPI0_CK__FUNC_ADC_DAT_IN (MTK_PIN_NO(54) | 4)
#define MT2701_PIN_54_SPI0_CK__FUNC_DBG_MON_A_10 (MTK_PIN_NO(54) | 7)

#define MT2701_PIN_55_SPI0_MI__FUNC_GPIO55 (MTK_PIN_NO(55) | 0)
#define MT2701_PIN_55_SPI0_MI__FUNC_SPI0_MI (MTK_PIN_NO(55) | 1)
#define MT2701_PIN_55_SPI0_MI__FUNC_SPI0_MO (MTK_PIN_NO(55) | 2)
#define MT2701_PIN_55_SPI0_MI__FUNC_MSDC1_WP (MTK_PIN_NO(55) | 3)
#define MT2701_PIN_55_SPI0_MI__FUNC_ADC_WS (MTK_PIN_NO(55) | 4)
#define MT2701_PIN_55_SPI0_MI__FUNC_PWM2 (MTK_PIN_NO(55) | 5)
#define MT2701_PIN_55_SPI0_MI__FUNC_DBG_MON_A_8 (MTK_PIN_NO(55) | 7)

#define MT2701_PIN_56_SPI0_MO__FUNC_GPIO56 (MTK_PIN_NO(56) | 0)
#define MT2701_PIN_56_SPI0_MO__FUNC_SPI0_MO (MTK_PIN_NO(56) | 1)
#define MT2701_PIN_56_SPI0_MO__FUNC_SPI0_MI (MTK_PIN_NO(56) | 2)
#define MT2701_PIN_56_SPI0_MO__FUNC_SPDIF_IN0 (MTK_PIN_NO(56) | 3)
#define MT2701_PIN_56_SPI0_MO__FUNC_DBG_MON_A_9 (MTK_PIN_NO(56) | 7)

#define MT2701_PIN_57_SDA1__FUNC_GPIO57 (MTK_PIN_NO(57) | 0)
#define MT2701_PIN_57_SDA1__FUNC_SDA1 (MTK_PIN_NO(57) | 1)

#define MT2701_PIN_58_SCL1__FUNC_GPIO58 (MTK_PIN_NO(58) | 0)
#define MT2701_PIN_58_SCL1__FUNC_SCL1 (MTK_PIN_NO(58) | 1)

#define MT2701_PIN_72_I2S0_DATA_IN__FUNC_GPIO72 (MTK_PIN_NO(72) | 0)
#define MT2701_PIN_72_I2S0_DATA_IN__FUNC_I2S0_DATA_IN (MTK_PIN_NO(72) | 1)
#define MT2701_PIN_72_I2S0_DATA_IN__FUNC_PCM_RX (MTK_PIN_NO(72) | 3)
#define MT2701_PIN_72_I2S0_DATA_IN__FUNC_PWM0 (MTK_PIN_NO(72) | 4)
#define MT2701_PIN_72_I2S0_DATA_IN__FUNC_DISP_PWM (MTK_PIN_NO(72) | 5)
#define MT2701_PIN_72_I2S0_DATA_IN__FUNC_WCN_I2S_DI (MTK_PIN_NO(72) | 6)
#define MT2701_PIN_72_I2S0_DATA_IN__FUNC_DBG_MON_B_2 (MTK_PIN_NO(72) | 7)

#define MT2701_PIN_73_I2S0_LRCK__FUNC_GPIO73 (MTK_PIN_NO(73) | 0)
#define MT2701_PIN_73_I2S0_LRCK__FUNC_I2S0_LRCK (MTK_PIN_NO(73) | 1)
#define MT2701_PIN_73_I2S0_LRCK__FUNC_PCM_SYNC (MTK_PIN_NO(73) | 3)
#define MT2701_PIN_73_I2S0_LRCK__FUNC_WCN_I2S_LRCK (MTK_PIN_NO(73) | 6)
#define MT2701_PIN_73_I2S0_LRCK__FUNC_DBG_MON_B_5 (MTK_PIN_NO(73) | 7)

#define MT2701_PIN_74_I2S0_BCK__FUNC_GPIO74 (MTK_PIN_NO(74) | 0)
#define MT2701_PIN_74_I2S0_BCK__FUNC_I2S0_BCK (MTK_PIN_NO(74) | 1)
#define MT2701_PIN_74_I2S0_BCK__FUNC_PCM_CLK0 (MTK_PIN_NO(74) | 3)
#define MT2701_PIN_74_I2S0_BCK__FUNC_WCN_I2S_BCK (MTK_PIN_NO(74) | 6)
#define MT2701_PIN_74_I2S0_BCK__FUNC_DBG_MON_B_4 (MTK_PIN_NO(74) | 7)

#define MT2701_PIN_75_SDA0__FUNC_GPIO75 (MTK_PIN_NO(75) | 0)
#define MT2701_PIN_75_SDA0__FUNC_SDA0 (MTK_PIN_NO(75) | 1)

#define MT2701_PIN_76_SCL0__FUNC_GPIO76 (MTK_PIN_NO(76) | 0)
#define MT2701_PIN_76_SCL0__FUNC_SCL0 (MTK_PIN_NO(76) | 1)

#define MT2701_PIN_77_SDA2__FUNC_GPIO77 (MTK_PIN_NO(77) | 0)
#define MT2701_PIN_77_SDA2__FUNC_SDA2 (MTK_PIN_NO(77) | 1)

#define MT2701_PIN_78_SCL2__FUNC_GPIO78 (MTK_PIN_NO(78) | 0)
#define MT2701_PIN_78_SCL2__FUNC_SCL2 (MTK_PIN_NO(78) | 1)

#define MT2701_PIN_79_URXD0__FUNC_GPIO79 (MTK_PIN_NO(79) | 0)
#define MT2701_PIN_79_URXD0__FUNC_URXD0 (MTK_PIN_NO(79) | 1)
#define MT2701_PIN_79_URXD0__FUNC_UTXD0 (MTK_PIN_NO(79) | 2)
#define MT2701_PIN_79_URXD0__FUNC_ (MTK_PIN_NO(79) | 5)

#define MT2701_PIN_80_UTXD0__FUNC_GPIO80 (MTK_PIN_NO(80) | 0)
#define MT2701_PIN_80_UTXD0__FUNC_UTXD0 (MTK_PIN_NO(80) | 1)
#define MT2701_PIN_80_UTXD0__FUNC_URXD0 (MTK_PIN_NO(80) | 2)

#define MT2701_PIN_81_URXD1__FUNC_GPIO81 (MTK_PIN_NO(81) | 0)
#define MT2701_PIN_81_URXD1__FUNC_URXD1 (MTK_PIN_NO(81) | 1)
#define MT2701_PIN_81_URXD1__FUNC_UTXD1 (MTK_PIN_NO(81) | 2)

#define MT2701_PIN_82_UTXD1__FUNC_GPIO82 (MTK_PIN_NO(82) | 0)
#define MT2701_PIN_82_UTXD1__FUNC_UTXD1 (MTK_PIN_NO(82) | 1)
#define MT2701_PIN_82_UTXD1__FUNC_URXD1 (MTK_PIN_NO(82) | 2)

#define MT2701_PIN_83_LCM_RST__FUNC_GPIO83 (MTK_PIN_NO(83) | 0)
#define MT2701_PIN_83_LCM_RST__FUNC_LCM_RST (MTK_PIN_NO(83) | 1)
#define MT2701_PIN_83_LCM_RST__FUNC_VDAC_CK_XI (MTK_PIN_NO(83) | 2)
#define MT2701_PIN_83_LCM_RST__FUNC_DBG_MON_B_1 (MTK_PIN_NO(83) | 7)

#define MT2701_PIN_84_DSI_TE__FUNC_GPIO84 (MTK_PIN_NO(84) | 0)
#define MT2701_PIN_84_DSI_TE__FUNC_DSI_TE (MTK_PIN_NO(84) | 1)
#define MT2701_PIN_84_DSI_TE__FUNC_DBG_MON_B_0 (MTK_PIN_NO(84) | 7)

#define MT2701_PIN_91_TDN3__FUNC_GPI91 (MTK_PIN_NO(91) | 0)
#define MT2701_PIN_91_TDN3__FUNC_TDN3 (MTK_PIN_NO(91) | 1)

#define MT2701_PIN_92_TDP3__FUNC_GPI92 (MTK_PIN_NO(92) | 0)
#define MT2701_PIN_92_TDP3__FUNC_TDP3 (MTK_PIN_NO(92) | 1)

#define MT2701_PIN_93_TDN2__FUNC_GPI93 (MTK_PIN_NO(93) | 0)
#define MT2701_PIN_93_TDN2__FUNC_TDN2 (MTK_PIN_NO(93) | 1)

#define MT2701_PIN_94_TDP2__FUNC_GPI94 (MTK_PIN_NO(94) | 0)
#define MT2701_PIN_94_TDP2__FUNC_TDP2 (MTK_PIN_NO(94) | 1)

#define MT2701_PIN_95_TCN__FUNC_GPI95 (MTK_PIN_NO(95) | 0)
#define MT2701_PIN_95_TCN__FUNC_TCN (MTK_PIN_NO(95) | 1)

#define MT2701_PIN_96_TCP__FUNC_GPI96 (MTK_PIN_NO(96) | 0)
#define MT2701_PIN_96_TCP__FUNC_TCP (MTK_PIN_NO(96) | 1)

#define MT2701_PIN_97_TDN1__FUNC_GPI97 (MTK_PIN_NO(97) | 0)
#define MT2701_PIN_97_TDN1__FUNC_TDN1 (MTK_PIN_NO(97) | 1)

#define MT2701_PIN_98_TDP1__FUNC_GPI98 (MTK_PIN_NO(98) | 0)
#define MT2701_PIN_98_TDP1__FUNC_TDP1 (MTK_PIN_NO(98) | 1)

#define MT2701_PIN_99_TDN0__FUNC_GPI99 (MTK_PIN_NO(99) | 0)
#define MT2701_PIN_99_TDN0__FUNC_TDN0 (MTK_PIN_NO(99) | 1)

#define MT2701_PIN_100_TDP0__FUNC_GPI100 (MTK_PIN_NO(100) | 0)
#define MT2701_PIN_100_TDP0__FUNC_TDP0 (MTK_PIN_NO(100) | 1)

#define MT2701_PIN_101_SPI2_CSN__FUNC_GPIO101 (MTK_PIN_NO(101) | 0)
#define MT2701_PIN_101_SPI2_CSN__FUNC_SPI2_CS (MTK_PIN_NO(101) | 1)
#define MT2701_PIN_101_SPI2_CSN__FUNC_SCL3 (MTK_PIN_NO(101) | 3)
#define MT2701_PIN_101_SPI2_CSN__FUNC_KROW0 (MTK_PIN_NO(101) | 4)

#define MT2701_PIN_102_SPI2_MI__FUNC_GPIO102 (MTK_PIN_NO(102) | 0)
#define MT2701_PIN_102_SPI2_MI__FUNC_SPI2_MI (MTK_PIN_NO(102) | 1)
#define MT2701_PIN_102_SPI2_MI__FUNC_SPI2_MO (MTK_PIN_NO(102) | 2)
#define MT2701_PIN_102_SPI2_MI__FUNC_SDA3 (MTK_PIN_NO(102) | 3)
#define MT2701_PIN_102_SPI2_MI__FUNC_KROW1 (MTK_PIN_NO(102) | 4)

#define MT2701_PIN_103_SPI2_MO__FUNC_GPIO103 (MTK_PIN_NO(103) | 0)
#define MT2701_PIN_103_SPI2_MO__FUNC_SPI2_MO (MTK_PIN_NO(103) | 1)
#define MT2701_PIN_103_SPI2_MO__FUNC_SPI2_MI (MTK_PIN_NO(103) | 2)
#define MT2701_PIN_103_SPI2_MO__FUNC_SCL3 (MTK_PIN_NO(103) | 3)
#define MT2701_PIN_103_SPI2_MO__FUNC_KROW2 (MTK_PIN_NO(103) | 4)

#define MT2701_PIN_104_SPI2_CLK__FUNC_GPIO104 (MTK_PIN_NO(104) | 0)
#define MT2701_PIN_104_SPI2_CLK__FUNC_SPI2_CK (MTK_PIN_NO(104) | 1)
#define MT2701_PIN_104_SPI2_CLK__FUNC_SDA3 (MTK_PIN_NO(104) | 3)
#define MT2701_PIN_104_SPI2_CLK__FUNC_KROW3 (MTK_PIN_NO(104) | 4)

#define MT2701_PIN_105_MSDC1_CMD__FUNC_GPIO105 (MTK_PIN_NO(105) | 0)
#define MT2701_PIN_105_MSDC1_CMD__FUNC_MSDC1_CMD (MTK_PIN_NO(105) | 1)
#define MT2701_PIN_105_MSDC1_CMD__FUNC_ANT_SEL0 (MTK_PIN_NO(105) | 2)
#define MT2701_PIN_105_MSDC1_CMD__FUNC_SDA1 (MTK_PIN_NO(105) | 3)
#define MT2701_PIN_105_MSDC1_CMD__FUNC_I2SOUT_BCK (MTK_PIN_NO(105) | 6)
#define MT2701_PIN_105_MSDC1_CMD__FUNC_DBG_MON_B_27 (MTK_PIN_NO(105) | 7)

#define MT2701_PIN_106_MSDC1_CLK__FUNC_GPIO106 (MTK_PIN_NO(106) | 0)
#define MT2701_PIN_106_MSDC1_CLK__FUNC_MSDC1_CLK (MTK_PIN_NO(106) | 1)
#define MT2701_PIN_106_MSDC1_CLK__FUNC_ANT_SEL1 (MTK_PIN_NO(106) | 2)
#define MT2701_PIN_106_MSDC1_CLK__FUNC_SCL1 (MTK_PIN_NO(106) | 3)
#define MT2701_PIN_106_MSDC1_CLK__FUNC_I2SOUT_LRCK (MTK_PIN_NO(106) | 6)
#define MT2701_PIN_106_MSDC1_CLK__FUNC_DBG_MON_B_28 (MTK_PIN_NO(106) | 7)

#define MT2701_PIN_107_MSDC1_DAT0__FUNC_GPIO107 (MTK_PIN_NO(107) | 0)
#define MT2701_PIN_107_MSDC1_DAT0__FUNC_MSDC1_DAT0 (MTK_PIN_NO(107) | 1)
#define MT2701_PIN_107_MSDC1_DAT0__FUNC_ANT_SEL2 (MTK_PIN_NO(107) | 2)
#define MT2701_PIN_107_MSDC1_DAT0__FUNC_UTXD0 (MTK_PIN_NO(107) | 5)
#define MT2701_PIN_107_MSDC1_DAT0__FUNC_I2SOUT_DATA_OUT (MTK_PIN_NO(107) | 6)
#define MT2701_PIN_107_MSDC1_DAT0__FUNC_DBG_MON_B_26 (MTK_PIN_NO(107) | 7)

#define MT2701_PIN_108_MSDC1_DAT1__FUNC_GPIO108 (MTK_PIN_NO(108) | 0)
#define MT2701_PIN_108_MSDC1_DAT1__FUNC_MSDC1_DAT1 (MTK_PIN_NO(108) | 1)
#define MT2701_PIN_108_MSDC1_DAT1__FUNC_ANT_SEL3 (MTK_PIN_NO(108) | 2)
#define MT2701_PIN_108_MSDC1_DAT1__FUNC_PWM0 (MTK_PIN_NO(108) | 3)
#define MT2701_PIN_108_MSDC1_DAT1__FUNC_URXD0 (MTK_PIN_NO(108) | 5)
#define MT2701_PIN_108_MSDC1_DAT1__FUNC_PWM1 (MTK_PIN_NO(108) | 6)
#define MT2701_PIN_108_MSDC1_DAT1__FUNC_DBG_MON_B_25 (MTK_PIN_NO(108) | 7)

#define MT2701_PIN_109_MSDC1_DAT2__FUNC_GPIO109 (MTK_PIN_NO(109) | 0)
#define MT2701_PIN_109_MSDC1_DAT2__FUNC_MSDC1_DAT2 (MTK_PIN_NO(109) | 1)
#define MT2701_PIN_109_MSDC1_DAT2__FUNC_ANT_SEL4 (MTK_PIN_NO(109) | 2)
#define MT2701_PIN_109_MSDC1_DAT2__FUNC_SDA2 (MTK_PIN_NO(109) | 3)
#define MT2701_PIN_109_MSDC1_DAT2__FUNC_UTXD1 (MTK_PIN_NO(109) | 5)
#define MT2701_PIN_109_MSDC1_DAT2__FUNC_PWM2 (MTK_PIN_NO(109) | 6)
#define MT2701_PIN_109_MSDC1_DAT2__FUNC_DBG_MON_B_24 (MTK_PIN_NO(109) | 7)

#define MT2701_PIN_110_MSDC1_DAT3__FUNC_GPIO110 (MTK_PIN_NO(110) | 0)
#define MT2701_PIN_110_MSDC1_DAT3__FUNC_MSDC1_DAT3 (MTK_PIN_NO(110) | 1)
#define MT2701_PIN_110_MSDC1_DAT3__FUNC_ANT_SEL5 (MTK_PIN_NO(110) | 2)
#define MT2701_PIN_110_MSDC1_DAT3__FUNC_SCL2 (MTK_PIN_NO(110) | 3)
#define MT2701_PIN_110_MSDC1_DAT3__FUNC_EXT_FRAME_SYNC (MTK_PIN_NO(110) | 4)
#define MT2701_PIN_110_MSDC1_DAT3__FUNC_URXD1 (MTK_PIN_NO(110) | 5)
#define MT2701_PIN_110_MSDC1_DAT3__FUNC_PWM3 (MTK_PIN_NO(110) | 6)
#define MT2701_PIN_110_MSDC1_DAT3__FUNC_DBG_MON_B_23 (MTK_PIN_NO(110) | 7)

#define MT2701_PIN_111_MSDC0_DAT7__FUNC_GPIO111 (MTK_PIN_NO(111) | 0)
#define MT2701_PIN_111_MSDC0_DAT7__FUNC_MSDC0_DAT7 (MTK_PIN_NO(111) | 1)
#define MT2701_PIN_111_MSDC0_DAT7__FUNC_NLD7 (MTK_PIN_NO(111) | 4)

#define MT2701_PIN_112_MSDC0_DAT6__FUNC_GPIO112 (MTK_PIN_NO(112) | 0)
#define MT2701_PIN_112_MSDC0_DAT6__FUNC_MSDC0_DAT6 (MTK_PIN_NO(112) | 1)
#define MT2701_PIN_112_MSDC0_DAT6__FUNC_NLD6 (MTK_PIN_NO(112) | 4)

#define MT2701_PIN_113_MSDC0_DAT5__FUNC_GPIO113 (MTK_PIN_NO(113) | 0)
#define MT2701_PIN_113_MSDC0_DAT5__FUNC_MSDC0_DAT5 (MTK_PIN_NO(113) | 1)
#define MT2701_PIN_113_MSDC0_DAT5__FUNC_NLD5 (MTK_PIN_NO(113) | 4)

#define MT2701_PIN_114_MSDC0_DAT4__FUNC_GPIO114 (MTK_PIN_NO(114) | 0)
#define MT2701_PIN_114_MSDC0_DAT4__FUNC_MSDC0_DAT4 (MTK_PIN_NO(114) | 1)
#define MT2701_PIN_114_MSDC0_DAT4__FUNC_NLD4 (MTK_PIN_NO(114) | 4)

#define MT2701_PIN_115_MSDC0_RSTB__FUNC_GPIO115 (MTK_PIN_NO(115) | 0)
#define MT2701_PIN_115_MSDC0_RSTB__FUNC_MSDC0_RSTB (MTK_PIN_NO(115) | 1)
#define MT2701_PIN_115_MSDC0_RSTB__FUNC_NLD8 (MTK_PIN_NO(115) | 4)

#define MT2701_PIN_116_MSDC0_CMD__FUNC_GPIO116 (MTK_PIN_NO(116) | 0)
#define MT2701_PIN_116_MSDC0_CMD__FUNC_MSDC0_CMD (MTK_PIN_NO(116) | 1)
#define MT2701_PIN_116_MSDC0_CMD__FUNC_NALE (MTK_PIN_NO(116) | 4)

#define MT2701_PIN_117_MSDC0_CLK__FUNC_GPIO117 (MTK_PIN_NO(117) | 0)
#define MT2701_PIN_117_MSDC0_CLK__FUNC_MSDC0_CLK (MTK_PIN_NO(117) | 1)
#define MT2701_PIN_117_MSDC0_CLK__FUNC_NWEB (MTK_PIN_NO(117) | 4)

#define MT2701_PIN_118_MSDC0_DAT3__FUNC_GPIO118 (MTK_PIN_NO(118) | 0)
#define MT2701_PIN_118_MSDC0_DAT3__FUNC_MSDC0_DAT3 (MTK_PIN_NO(118) | 1)
#define MT2701_PIN_118_MSDC0_DAT3__FUNC_NLD3 (MTK_PIN_NO(118) | 4)

#define MT2701_PIN_119_MSDC0_DAT2__FUNC_GPIO119 (MTK_PIN_NO(119) | 0)
#define MT2701_PIN_119_MSDC0_DAT2__FUNC_MSDC0_DAT2 (MTK_PIN_NO(119) | 1)
#define MT2701_PIN_119_MSDC0_DAT2__FUNC_NLD2 (MTK_PIN_NO(119) | 4)

#define MT2701_PIN_120_MSDC0_DAT1__FUNC_GPIO120 (MTK_PIN_NO(120) | 0)
#define MT2701_PIN_120_MSDC0_DAT1__FUNC_MSDC0_DAT1 (MTK_PIN_NO(120) | 1)
#define MT2701_PIN_120_MSDC0_DAT1__FUNC_NLD1 (MTK_PIN_NO(120) | 4)

#define MT2701_PIN_121_MSDC0_DAT0__FUNC_GPIO121 (MTK_PIN_NO(121) | 0)
#define MT2701_PIN_121_MSDC0_DAT0__FUNC_MSDC0_DAT0 (MTK_PIN_NO(121) | 1)
#define MT2701_PIN_121_MSDC0_DAT0__FUNC_NLD0 (MTK_PIN_NO(121) | 4)
#define MT2701_PIN_121_MSDC0_DAT0__FUNC_WATCHDOG (MTK_PIN_NO(121) | 5)

#define MT2701_PIN_122_CEC__FUNC_GPIO122 (MTK_PIN_NO(122) | 0)
#define MT2701_PIN_122_CEC__FUNC_CEC (MTK_PIN_NO(122) | 1)
#define MT2701_PIN_122_CEC__FUNC_SDA2 (MTK_PIN_NO(122) | 4)
#define MT2701_PIN_122_CEC__FUNC_URXD0 (MTK_PIN_NO(122) | 5)

#define MT2701_PIN_123_HTPLG__FUNC_GPIO123 (MTK_PIN_NO(123) | 0)
#define MT2701_PIN_123_HTPLG__FUNC_HTPLG (MTK_PIN_NO(123) | 1)
#define MT2701_PIN_123_HTPLG__FUNC_SCL2 (MTK_PIN_NO(123) | 4)
#define MT2701_PIN_123_HTPLG__FUNC_UTXD0 (MTK_PIN_NO(123) | 5)

#define MT2701_PIN_124_HDMISCK__FUNC_GPIO124 (MTK_PIN_NO(124) | 0)
#define MT2701_PIN_124_HDMISCK__FUNC_HDMISCK (MTK_PIN_NO(124) | 1)
#define MT2701_PIN_124_HDMISCK__FUNC_SDA1 (MTK_PIN_NO(124) | 4)
#define MT2701_PIN_124_HDMISCK__FUNC_PWM3 (MTK_PIN_NO(124) | 5)

#define MT2701_PIN_125_HDMISD__FUNC_GPIO125 (MTK_PIN_NO(125) | 0)
#define MT2701_PIN_125_HDMISD__FUNC_HDMISD (MTK_PIN_NO(125) | 1)
#define MT2701_PIN_125_HDMISD__FUNC_SCL1 (MTK_PIN_NO(125) | 4)
#define MT2701_PIN_125_HDMISD__FUNC_PWM4 (MTK_PIN_NO(125) | 5)

#define MT2701_PIN_126_I2S0_MCLK__FUNC_GPIO126 (MTK_PIN_NO(126) | 0)
#define MT2701_PIN_126_I2S0_MCLK__FUNC_I2S0_MCLK (MTK_PIN_NO(126) | 1)
#define MT2701_PIN_126_I2S0_MCLK__FUNC_WCN_I2S_MCLK (MTK_PIN_NO(126) | 6)
#define MT2701_PIN_126_I2S0_MCLK__FUNC_DBG_MON_B_6 (MTK_PIN_NO(126) | 7)

#define MT2701_PIN_199_SPI1_CLK__FUNC_GPIO199 (MTK_PIN_NO(199) | 0)
#define MT2701_PIN_199_SPI1_CLK__FUNC_SPI1_CK (MTK_PIN_NO(199) | 1)
#define MT2701_PIN_199_SPI1_CLK__FUNC_EXT_FRAME_SYNC (MTK_PIN_NO(199) | 3)
#define MT2701_PIN_199_SPI1_CLK__FUNC_KCOL3 (MTK_PIN_NO(199) | 4)
#define MT2701_PIN_199_SPI1_CLK__FUNC_DBG_MON_B_15 (MTK_PIN_NO(199) | 7)

#define MT2701_PIN_200_SPDIF_OUT__FUNC_GPIO200 (MTK_PIN_NO(200) | 0)
#define MT2701_PIN_200_SPDIF_OUT__FUNC_SPDIF_OUT (MTK_PIN_NO(200) | 1)
#define MT2701_PIN_200_SPDIF_OUT__FUNC_G1_TXD3 (MTK_PIN_NO(200) | 5)
#define MT2701_PIN_200_SPDIF_OUT__FUNC_URXD2 (MTK_PIN_NO(200) | 6)
#define MT2701_PIN_200_SPDIF_OUT__FUNC_DBG_MON_B_16 (MTK_PIN_NO(200) | 7)

#define MT2701_PIN_201_SPDIF_IN0__FUNC_GPIO201 (MTK_PIN_NO(201) | 0)
#define MT2701_PIN_201_SPDIF_IN0__FUNC_SPDIF_IN0 (MTK_PIN_NO(201) | 1)
#define MT2701_PIN_201_SPDIF_IN0__FUNC_G1_TXEN (MTK_PIN_NO(201) | 5)
#define MT2701_PIN_201_SPDIF_IN0__FUNC_UTXD2 (MTK_PIN_NO(201) | 6)
#define MT2701_PIN_201_SPDIF_IN0__FUNC_DBG_MON_B_17 (MTK_PIN_NO(201) | 7)

#define MT2701_PIN_202_SPDIF_IN1__FUNC_GPIO202 (MTK_PIN_NO(202) | 0)
#define MT2701_PIN_202_SPDIF_IN1__FUNC_SPDIF_IN1 (MTK_PIN_NO(202) | 1)

#define MT2701_PIN_203_PWM0__FUNC_GPIO203 (MTK_PIN_NO(203) | 0)
#define MT2701_PIN_203_PWM0__FUNC_PWM0 (MTK_PIN_NO(203) | 1)
#define MT2701_PIN_203_PWM0__FUNC_DISP_PWM (MTK_PIN_NO(203) | 2)
#define MT2701_PIN_203_PWM0__FUNC_G1_TXD2 (MTK_PIN_NO(203) | 5)
#define MT2701_PIN_203_PWM0__FUNC_DBG_MON_B_18 (MTK_PIN_NO(203) | 7)
#define MT2701_PIN_203_PWM0__FUNC_I2S2_DATA (MTK_PIN_NO(203) | 9)

#define MT2701_PIN_204_PWM1__FUNC_GPIO204 (MTK_PIN_NO(204) | 0)
#define MT2701_PIN_204_PWM1__FUNC_PWM1 (MTK_PIN_NO(204) | 1)
#define MT2701_PIN_204_PWM1__FUNC_CLKM3 (MTK_PIN_NO(204) | 2)
#define MT2701_PIN_204_PWM1__FUNC_G1_TXD1 (MTK_PIN_NO(204) | 5)
#define MT2701_PIN_204_PWM1__FUNC_DBG_MON_B_19 (MTK_PIN_NO(204) | 7)
#define MT2701_PIN_204_PWM1__FUNC_I2S3_DATA (MTK_PIN_NO(204) | 9)

#define MT2701_PIN_205_PWM2__FUNC_GPIO205 (MTK_PIN_NO(205) | 0)
#define MT2701_PIN_205_PWM2__FUNC_PWM2 (MTK_PIN_NO(205) | 1)
#define MT2701_PIN_205_PWM2__FUNC_CLKM2 (MTK_PIN_NO(205) | 2)
#define MT2701_PIN_205_PWM2__FUNC_G1_TXD0 (MTK_PIN_NO(205) | 5)
#define MT2701_PIN_205_PWM2__FUNC_DBG_MON_B_20 (MTK_PIN_NO(205) | 7)

#define MT2701_PIN_206_PWM3__FUNC_GPIO206 (MTK_PIN_NO(206) | 0)
#define MT2701_PIN_206_PWM3__FUNC_PWM3 (MTK_PIN_NO(206) | 1)
#define MT2701_PIN_206_PWM3__FUNC_CLKM1 (MTK_PIN_NO(206) | 2)
#define MT2701_PIN_206_PWM3__FUNC_EXT_FRAME_SYNC (MTK_PIN_NO(206) | 3)
#define MT2701_PIN_206_PWM3__FUNC_G1_TXC (MTK_PIN_NO(206) | 5)
#define MT2701_PIN_206_PWM3__FUNC_DBG_MON_B_21 (MTK_PIN_NO(206) | 7)

#define MT2701_PIN_207_PWM4__FUNC_GPIO207 (MTK_PIN_NO(207) | 0)
#define MT2701_PIN_207_PWM4__FUNC_PWM4 (MTK_PIN_NO(207) | 1)
#define MT2701_PIN_207_PWM4__FUNC_CLKM0 (MTK_PIN_NO(207) | 2)
#define MT2701_PIN_207_PWM4__FUNC_EXT_FRAME_SYNC (MTK_PIN_NO(207) | 3)
#define MT2701_PIN_207_PWM4__FUNC_G1_RXC (MTK_PIN_NO(207) | 5)
#define MT2701_PIN_207_PWM4__FUNC_DBG_MON_B_22 (MTK_PIN_NO(207) | 7)

#define MT2701_PIN_208_AUD_EXT_CK1__FUNC_GPIO208 (MTK_PIN_NO(208) | 0)
#define MT2701_PIN_208_AUD_EXT_CK1__FUNC_AUD_EXT_CK1 (MTK_PIN_NO(208) | 1)
#define MT2701_PIN_208_AUD_EXT_CK1__FUNC_PWM0 (MTK_PIN_NO(208) | 2)
#define MT2701_PIN_208_AUD_EXT_CK1__FUNC_ANT_SEL5 (MTK_PIN_NO(208) | 4)
#define MT2701_PIN_208_AUD_EXT_CK1__FUNC_DISP_PWM (MTK_PIN_NO(208) | 5)
#define MT2701_PIN_208_AUD_EXT_CK1__FUNC_DBG_MON_A_31 (MTK_PIN_NO(208) | 7)
#define MT2701_PIN_208_AUD_EXT_CK1__FUNC_PCIE0_PERST_N (MTK_PIN_NO(208) | 11)

#define MT2701_PIN_209_AUD_EXT_CK2__FUNC_GPIO209 (MTK_PIN_NO(209) | 0)
#define MT2701_PIN_209_AUD_EXT_CK2__FUNC_AUD_EXT_CK2 (MTK_PIN_NO(209) | 1)
#define MT2701_PIN_209_AUD_EXT_CK2__FUNC_MSDC1_WP (MTK_PIN_NO(209) | 2)
#define MT2701_PIN_209_AUD_EXT_CK2__FUNC_PWM1 (MTK_PIN_NO(209) | 5)
#define MT2701_PIN_209_AUD_EXT_CK2__FUNC_DBG_MON_A_32 (MTK_PIN_NO(209) | 7)
#define MT2701_PIN_209_AUD_EXT_CK2__FUNC_PCIE1_PERST_N (MTK_PIN_NO(209) | 11)

#define MT2701_PIN_236_EXT_SDIO3__FUNC_GPIO236 (MTK_PIN_NO(236) | 0)
#define MT2701_PIN_236_EXT_SDIO3__FUNC_EXT_SDIO3 (MTK_PIN_NO(236) | 1)
#define MT2701_PIN_236_EXT_SDIO3__FUNC_IDDIG (MTK_PIN_NO(236) | 2)
#define MT2701_PIN_236_EXT_SDIO3__FUNC_DBG_MON_A_1 (MTK_PIN_NO(236) | 7)

#define MT2701_PIN_237_EXT_SDIO2__FUNC_GPIO237 (MTK_PIN_NO(237) | 0)
#define MT2701_PIN_237_EXT_SDIO2__FUNC_EXT_SDIO2 (MTK_PIN_NO(237) | 1)
#define MT2701_PIN_237_EXT_SDIO2__FUNC_DRV_VBUS (MTK_PIN_NO(237) | 2)

#define MT2701_PIN_238_EXT_SDIO1__FUNC_GPIO238 (MTK_PIN_NO(238) | 0)
#define MT2701_PIN_238_EXT_SDIO1__FUNC_EXT_SDIO1 (MTK_PIN_NO(238) | 1)
#define MT2701_PIN_238_EXT_SDIO1__FUNC_IDDIG_P1 (MTK_PIN_NO(238) | 2)

#define MT2701_PIN_239_EXT_SDIO0__FUNC_GPIO239 (MTK_PIN_NO(239) | 0)
#define MT2701_PIN_239_EXT_SDIO0__FUNC_EXT_SDIO0 (MTK_PIN_NO(239) | 1)
#define MT2701_PIN_239_EXT_SDIO0__FUNC_DRV_VBUS_P1 (MTK_PIN_NO(239) | 2)

#define MT2701_PIN_240_EXT_XCS__FUNC_GPIO240 (MTK_PIN_NO(240) | 0)
#define MT2701_PIN_240_EXT_XCS__FUNC_EXT_XCS (MTK_PIN_NO(240) | 1)

#define MT2701_PIN_241_EXT_SCK__FUNC_GPIO241 (MTK_PIN_NO(241) | 0)
#define MT2701_PIN_241_EXT_SCK__FUNC_EXT_SCK (MTK_PIN_NO(241) | 1)

#define MT2701_PIN_242_URTS2__FUNC_GPIO242 (MTK_PIN_NO(242) | 0)
#define MT2701_PIN_242_URTS2__FUNC_URTS2 (MTK_PIN_NO(242) | 1)
#define MT2701_PIN_242_URTS2__FUNC_UTXD3 (MTK_PIN_NO(242) | 2)
#define MT2701_PIN_242_URTS2__FUNC_URXD3 (MTK_PIN_NO(242) | 3)
#define MT2701_PIN_242_URTS2__FUNC_SCL1 (MTK_PIN_NO(242) | 4)
#define MT2701_PIN_242_URTS2__FUNC_DBG_MON_B_32 (MTK_PIN_NO(242) | 7)

#define MT2701_PIN_243_UCTS2__FUNC_GPIO243 (MTK_PIN_NO(243) | 0)
#define MT2701_PIN_243_UCTS2__FUNC_UCTS2 (MTK_PIN_NO(243) | 1)
#define MT2701_PIN_243_UCTS2__FUNC_URXD3 (MTK_PIN_NO(243) | 2)
#define MT2701_PIN_243_UCTS2__FUNC_UTXD3 (MTK_PIN_NO(243) | 3)
#define MT2701_PIN_243_UCTS2__FUNC_SDA1 (MTK_PIN_NO(243) | 4)
#define MT2701_PIN_243_UCTS2__FUNC_DBG_MON_A_6 (MTK_PIN_NO(243) | 7)

#define MT2701_PIN_244_HDMI_SDA_RX__FUNC_GPIO244 (MTK_PIN_NO(244) | 0)
#define MT2701_PIN_244_HDMI_SDA_RX__FUNC_HDMI_SDA_RX (MTK_PIN_NO(244) | 1)

#define MT2701_PIN_245_HDMI_SCL_RX__FUNC_GPIO245 (MTK_PIN_NO(245) | 0)
#define MT2701_PIN_245_HDMI_SCL_RX__FUNC_HDMI_SCL_RX (MTK_PIN_NO(245) | 1)

#define MT2701_PIN_246_MHL_SENCE__FUNC_GPIO246 (MTK_PIN_NO(246) | 0)

#define MT2701_PIN_247_HDMI_HPD_CBUS_RX__FUNC_GPIO247 (MTK_PIN_NO(247) | 0)
#define MT2701_PIN_247_HDMI_HPD_CBUS_RX__FUNC_HDMI_HPD_RX (MTK_PIN_NO(247) | 1)

#define MT2701_PIN_248_HDMI_TESTOUTP_RX__FUNC_GPIO248 (MTK_PIN_NO(248) | 0)
#define MT2701_PIN_248_HDMI_TESTOUTP_RX__FUNC_HDMI_TESTOUTP_RX (MTK_PIN_NO(248) | 1)

#define MT2701_PIN_249_MSDC0E_RSTB__FUNC_MSDC0E_RSTB (MTK_PIN_NO(249) | 9)

#define MT2701_PIN_250_MSDC0E_DAT7__FUNC_MSDC3_DAT7 (MTK_PIN_NO(250) | 9)
#define MT2701_PIN_250_MSDC0E_DAT7__FUNC_PCIE0_CLKREQ_N (MTK_PIN_NO(250) | 14)

#define MT2701_PIN_251_MSDC0E_DAT6__FUNC_MSDC3_DAT6 (MTK_PIN_NO(251) | 9)
#define MT2701_PIN_251_MSDC0E_DAT6__FUNC_PCIE0_WAKE_N (MTK_PIN_NO(251) | 14)

#define MT2701_PIN_252_MSDC0E_DAT5__FUNC_MSDC3_DAT5 (MTK_PIN_NO(252) | 9)
#define MT2701_PIN_252_MSDC0E_DAT5__FUNC_PCIE1_CLKREQ_N (MTK_PIN_NO(252) | 14)

#define MT2701_PIN_253_MSDC0E_DAT4__FUNC_MSDC3_DAT4 (MTK_PIN_NO(253) | 9)
#define MT2701_PIN_253_MSDC0E_DAT4__FUNC_PCIE1_WAKE_N (MTK_PIN_NO(253) | 14)

#define MT2701_PIN_254_MSDC0E_DAT3__FUNC_MSDC3_DAT3 (MTK_PIN_NO(254) | 9)
#define MT2701_PIN_254_MSDC0E_DAT3__FUNC_PCIE2_CLKREQ_N (MTK_PIN_NO(254) | 14)

#define MT2701_PIN_255_MSDC0E_DAT2__FUNC_MSDC3_DAT2 (MTK_PIN_NO(255) | 9)
#define MT2701_PIN_255_MSDC0E_DAT2__FUNC_PCIE2_WAKE_N (MTK_PIN_NO(255) | 14)

#define MT2701_PIN_256_MSDC0E_DAT1__FUNC_MSDC3_DAT1 (MTK_PIN_NO(256) | 9)

#define MT2701_PIN_257_MSDC0E_DAT0__FUNC_MSDC3_DAT0 (MTK_PIN_NO(257) | 9)

#define MT2701_PIN_258_MSDC0E_CMD__FUNC_MSDC3_CMD (MTK_PIN_NO(258) | 9)

#define MT2701_PIN_259_MSDC0E_CLK__FUNC_MSDC3_CLK (MTK_PIN_NO(259) | 9)

#define MT2701_PIN_260_MSDC0E_DSL__FUNC_MSDC3_DSL (MTK_PIN_NO(260) | 9)

#define MT2701_PIN_261_MSDC1_INS__FUNC_GPIO261 (MTK_PIN_NO(261) | 0)
#define MT2701_PIN_261_MSDC1_INS__FUNC_MSDC1_INS (MTK_PIN_NO(261) | 1)
#define MT2701_PIN_261_MSDC1_INS__FUNC_DBG_MON_B_29 (MTK_PIN_NO(261) | 7)

#define MT2701_PIN_262_G2_TXEN__FUNC_GPIO262 (MTK_PIN_NO(262) | 0)
#define MT2701_PIN_262_G2_TXEN__FUNC_G2_TXEN (MTK_PIN_NO(262) | 1)

#define MT2701_PIN_263_G2_TXD3__FUNC_GPIO263 (MTK_PIN_NO(263) | 0)
#define MT2701_PIN_263_G2_TXD3__FUNC_G2_TXD3 (MTK_PIN_NO(263) | 1)
#define MT2701_PIN_263_G2_TXD3__FUNC_ANT_SEL5 (MTK_PIN_NO(263) | 6)

#define MT2701_PIN_264_G2_TXD2__FUNC_GPIO264 (MTK_PIN_NO(264) | 0)
#define MT2701_PIN_264_G2_TXD2__FUNC_G2_TXD2 (MTK_PIN_NO(264) | 1)
#define MT2701_PIN_264_G2_TXD2__FUNC_ANT_SEL4 (MTK_PIN_NO(264) | 6)

#define MT2701_PIN_265_G2_TXD1__FUNC_GPIO265 (MTK_PIN_NO(265) | 0)
#define MT2701_PIN_265_G2_TXD1__FUNC_G2_TXD1 (MTK_PIN_NO(265) | 1)
#define MT2701_PIN_265_G2_TXD1__FUNC_ANT_SEL3 (MTK_PIN_NO(265) | 6)

#define MT2701_PIN_266_G2_TXD0__FUNC_GPIO266 (MTK_PIN_NO(266) | 0)
#define MT2701_PIN_266_G2_TXD0__FUNC_G2_TXD0 (MTK_PIN_NO(266) | 1)
#define MT2701_PIN_266_G2_TXD0__FUNC_ANT_SEL2 (MTK_PIN_NO(266) | 6)

#define MT2701_PIN_267_G2_TXC__FUNC_GPIO267 (MTK_PIN_NO(267) | 0)
#define MT2701_PIN_267_G2_TXC__FUNC_G2_TXC (MTK_PIN_NO(267) | 1)

#define MT2701_PIN_268_G2_RXC__FUNC_GPIO268 (MTK_PIN_NO(268) | 0)
#define MT2701_PIN_268_G2_RXC__FUNC_G2_RXC (MTK_PIN_NO(268) | 1)

#define MT2701_PIN_269_G2_RXD0__FUNC_GPIO269 (MTK_PIN_NO(269) | 0)
#define MT2701_PIN_269_G2_RXD0__FUNC_G2_RXD0 (MTK_PIN_NO(269) | 1)

#define MT2701_PIN_270_G2_RXD1__FUNC_GPIO270 (MTK_PIN_NO(270) | 0)
#define MT2701_PIN_270_G2_RXD1__FUNC_G2_RXD1 (MTK_PIN_NO(270) | 1)

#define MT2701_PIN_271_G2_RXD2__FUNC_GPIO271 (MTK_PIN_NO(271) | 0)
#define MT2701_PIN_271_G2_RXD2__FUNC_G2_RXD2 (MTK_PIN_NO(271) | 1)

#define MT2701_PIN_272_G2_RXD3__FUNC_GPIO272 (MTK_PIN_NO(272) | 0)
#define MT2701_PIN_272_G2_RXD3__FUNC_G2_RXD3 (MTK_PIN_NO(272) | 1)

#define MT2701_PIN_274_G2_RXDV__FUNC_GPIO274 (MTK_PIN_NO(274) | 0)
#define MT2701_PIN_274_G2_RXDV__FUNC_G2_RXDV (MTK_PIN_NO(274) | 1)

#define MT2701_PIN_275_MDC__FUNC_GPIO275 (MTK_PIN_NO(275) | 0)
#define MT2701_PIN_275_MDC__FUNC_MDC (MTK_PIN_NO(275) | 1)
#define MT2701_PIN_275_MDC__FUNC_ANT_SEL0 (MTK_PIN_NO(275) | 6)

#define MT2701_PIN_276_MDIO__FUNC_GPIO276 (MTK_PIN_NO(276) | 0)
#define MT2701_PIN_276_MDIO__FUNC_MDIO (MTK_PIN_NO(276) | 1)
#define MT2701_PIN_276_MDIO__FUNC_ANT_SEL1 (MTK_PIN_NO(276) | 6)

#define MT2701_PIN_278_JTAG_RESET__FUNC_GPIO278 (MTK_PIN_NO(278) | 0)
#define MT2701_PIN_278_JTAG_RESET__FUNC_JTAG_RESET (MTK_PIN_NO(278) | 1)

#endif /* __DTS_MT2701_PINFUNC_H */
