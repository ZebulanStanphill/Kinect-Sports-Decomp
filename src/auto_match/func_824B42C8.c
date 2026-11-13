typedef struct Timer_832767D8 {
    __int64 start;
    __int64 frequency;
} Timer_832767D8;

extern Timer_832767D8 lbl_832767D8;

float fn_824B42C8(unsigned __int64 ticks)
{
    return (float)((double)ticks / (double)lbl_832767D8.frequency);
}
