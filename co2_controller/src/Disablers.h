#ifndef DISABLERS_H
#define DISABLERS_H

#include "FreeRTOS.h"
#include "task.h"

struct DisableScheduler
{
    DisableScheduler()
    {
        vTaskSuspendAll();
    }

    ~DisableScheduler()
    {
        xTaskResumeAll();
    }
};

struct DisableInterrupts
{
    DisableInterrupts()
    {
    }

    ~DisableInterrupts()
    {
    }
};

#endif
