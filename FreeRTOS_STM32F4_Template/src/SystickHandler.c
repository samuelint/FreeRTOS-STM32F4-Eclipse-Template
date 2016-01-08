// ----- SysTick_Handler() ----------------------------------------------------


#include "cortexm/ExceptionHandlers.h"
// ----------------------------------------------------------------------------

#if defined(USE_HAL_DRIVER)
void HAL_IncTick(void);
#endif

// ----------------------------------------------------------------------------

void SysTick_Handler(void)
{
#if defined(USE_HAL_DRIVER)
  HAL_IncTick();
#endif
  osSystickHandler();
}

// ----------------------------------------------------------------------------
