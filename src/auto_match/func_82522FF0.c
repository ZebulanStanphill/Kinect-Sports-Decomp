typedef struct Timer_832767D8 {
    __int64 start;
    __int64 frequency;
} Timer_832767D8;

extern Timer_832767D8 lbl_832767D8;
extern void fn_82A1E968(unsigned __int64 *now);

float fn_82522FF0(void)
{
    unsigned __int64 now;
    fn_82A1E968(&now);
    return (float)((double)(now - lbl_832767D8.start) / (double)lbl_832767D8.frequency);
}
