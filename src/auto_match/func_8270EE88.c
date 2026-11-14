typedef struct Timer_8270EE88 {
    char pad[0x24];
    unsigned int interval;
    unsigned __int64 origin;
} Timer_8270EE88;

unsigned __int64 fn_8270EE88(Timer_8270EE88 *self, unsigned __int64 time, unsigned __int64 duration)
{
    unsigned int interval = self->interval;
    if ((unsigned __int64)interval < duration / 10)
        interval = (unsigned int)(duration / 10);
    if ((int)interval == 0)
        return 0;
    {
        unsigned __int64 step = (int)interval;
        return (step - self->origin + time) / step * step;
    }
}
