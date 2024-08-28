// ae-lpc11u35-mb

#ifndef __IO_CONFIG_H__
#define __IO_CONFIG_H__

#include "LPC11Uxx.h"
#include "daplink.h"

// This GPIO configuration is only valid for the LPC11U35 HIC
COMPILER_ASSERT(DAPLINK_HIC_ID == DAPLINK_HIC_ID_LPC11U35);

// Peripheral register bit masks (used for pin inits)
#define FUNC_0                          0
#define FUNC_1                          1
#define PULL_DOWN_ENABLED               (1 << 3)
#define PULL_UP_ENABLED                 (2 << 3)
#define OPENDRAIN                       (1 << 10)
#define DIGITAL_FUNCTION                (1 << 7)

/* ae-lpc11u35-mb LED PIO0_7 */

// DAP LED                              PIO0_7
#define PIN_DAP_LED_PORT                0
#define PIN_DAP_LED_BIT                 7
#define PIN_DAP_LED                     (1 << PIN_DAP_LED_BIT)
#define PIN_DAP_LED_IOCON               LPC_IOCON->PIO0_7
#define PIN_DAP_LED_IOCON_INIT          (FUNC_0 | PULL_UP_ENABLED)

// MSD LED                              PIO0_20
#define PIN_MSD_LED_PORT                0
#define PIN_MSD_LED_BIT                 20
#define PIN_MSD_LED                     (1 << PIN_MSD_LED_BIT)
#define PIN_MSD_LED_IOCON               LPC_IOCON->PIO0_20
#define PIN_MSD_LED_IOCON_INIT          (FUNC_0 | PULL_UP_ENABLED)

// CDC LED                              PIO0_21
#define PIN_CDC_LED_PORT                0
#define PIN_CDC_LED_BIT                 21
#define PIN_CDC_LED                     (1 << PIN_CDC_LED_BIT)
#define PIN_CDC_LED_IOCON               LPC_IOCON->PIO0_21
#define PIN_CDC_LED_IOCON_INIT          (FUNC_0 | PULL_UP_ENABLED)

/* */

// Non-Forwarded Reset in PIN           PIO1_19
#define PIN_RESET_IN_PORT               1
#define PIN_RESET_IN_BIT                19
#define PIN_RESET_IN                    (1 << PIN_RESET_IN_BIT)
#define PIN_RESET_IN_IOCON              LPC_IOCON->PIO1_19
#define PIN_RESET_IN_IOCON_INIT         (FUNC_0 | OPENDRAIN | PULL_UP_ENABLED)

/* ae-lpc11u35-mb ISP PIO0_1 */

// Forwarded Reset in PIN               PIO0_1
#define PIN_RESET_IN_FWRD_PORT          0
#define PIN_RESET_IN_FWRD_BIT           1
#define PIN_RESET_IN_FWRD               (1 << PIN_RESET_IN_FWRD_BIT)
#define PIN_RESET_IN_FWRD_IOCON         LPC_IOCON->PIO0_1
#define PIN_RESET_IN_FWRD_IOCON_INIT    (FUNC_0 | OPENDRAIN | PULL_UP_ENABLED)

/* ae-lpc11u35-mb */

// nRESET OUT Pin                       PIO0_22
#define PIN_nRESET_PORT                 0
#define PIN_nRESET_BIT                  22
#define PIN_nRESET                      (1 << PIN_nRESET_BIT)
#define PIN_nRESET_IOCON                LPC_IOCON->PIO0_22
#define PIN_nRESET_IOCON_INIT           (FUNC_0 | OPENDRAIN | PULL_UP_ENABLED | DIGITAL_FUNCTION)

// SWCLK/TCK Pin                        PIO0_11
#define PIN_SWCLK_PORT                  0
#define PIN_SWCLK_BIT                   11
#define PIN_SWCLK                       (1 << PIN_SWCLK_BIT)
#define PIN_SWCLK_TCK_IOCON             LPC_IOCON->TDI_PIO0_11
#define PIN_SWCLK_TCK_IOCON_INIT        (FUNC_1 | PULL_UP_ENABLED | DIGITAL_FUNCTION)

// SWDIO/TMS In/Out Pin                 PIO0_12
#define PIN_SWDIO_PORT                  0
#define PIN_SWDIO_BIT                   12
#define PIN_SWDIO                       (1 << PIN_SWDIO_BIT)
#define PIN_SWDIO_TMS_IOCON             LPC_IOCON->TMS_PIO0_12
#define PIN_SWDIO_TMS_IOCON_INIT        (FUNC_1 | PULL_UP_ENABLED | DIGITAL_FUNCTION)

// TDI Pin                              PIO0_13
#define PIN_TDI_PORT                    0
#define PIN_TDI_BIT                     13
#define PIN_TDI                         (1 << PIN_TDI_BIT)
#define PIN_TDI_IOCON                   LPC_IOCON->TDO_PIO0_13
#define PIN_TDI_IOCON_INIT              (FUNC_1 | PULL_UP_ENABLED | DIGITAL_FUNCTION)

// SWO/TDO Pin                          PIO0_14
#define PIN_TDO_PORT                    0
#define PIN_TDO_BIT                     14
#define PIN_TDO                         (1 << PIN_TDO_BIT)
#define PIN_TDO_IOCON                   LPC_IOCON->TRST_PIO0_14
#define PIN_TDO_IOCON_INIT              (FUNC_1 | PULL_UP_ENABLED | DIGITAL_FUNCTION)

/* ae-lpc11u35-mb */

#endif
