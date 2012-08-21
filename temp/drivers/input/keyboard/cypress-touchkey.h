#include <mach/irqs.h>
#include <linux/mfd/pmic8058.h>

#if 1 //defined (CONFIG_MACH_STEALTH)

//#define PM8058_GPIO_BASE			NR_MSM_GPIOS
//#define PM8058_GPIO_PM_TO_SYS(pm_gpio)		(pm_gpio + PM8058_GPIO_BASE)

#define PMIC8058_IRQ_BASE				(NR_MSM_IRQS + NR_GPIO_IRQS)
#define IRQ_TOUCHKEY_INT PM8058_GPIO_IRQ(PMIC8058_IRQ_BASE, (PM8058_GPIO(13)))  
#define GPIO_TOUCHKEY PM8058_GPIO_PM_TO_SYS(PM8058_GPIO(13))
#endif
#define GPIO_TOUCHKEY_SCL     157
#define GPIO_TOUCHKEY_SDA     156
#define TOUCHKEY_PBA_REV_NA 0
#define TOUCHKEY_PBA_REV_00 1
#define TOUCHKEY_PBA_REV_02 2
#define TOUCHKEY_PBA_REV_03 3//JSJEONG
#define TOUCHKEY_PBA_REV_04 4
#define TOUCHKEY_PBA_REV_05 5
#define TOUCHKEY_PBA_REV_06 6


