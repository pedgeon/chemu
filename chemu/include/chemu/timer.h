#ifndef _TIMER_H
#define _TIMER_H

#include "ChipTimer.h"
#include "ChipTimerCallback.h"
#include <stdbool.h>
#include "internal/export.h"

// timer interval in microseconds (60Hz ~ 16,666 microseconds)
#define CHIP_TIMER_INTERVAL_US 16666

// timer interval in milleseconds (60Hz ~ 17 ms)
#define CHIP_TIMER_INTERVAL_MS 17

#define CHIP_TIMER_INTERVAL_NS 16666000

//CHEMU_API ChipTimer chiptimer_create(int initialValue);

//CHEMU_API void chiptimer_init(ChipTimer *timer);

//CHEMU_API void chiptimer_destroy(ChipTimer timer);

//CHEMU_API int chiptimer_get(ChipTimer timer);

//CHEMU_API void chiptimer_set(ChipTimer timer, int value);

CHEMU_API ChipTimer chiptimer_start(ChipTimerCallback callback, void *callbackArg);

CHEMU_API void chiptimer_stop(ChipTimer timer);


#endif
