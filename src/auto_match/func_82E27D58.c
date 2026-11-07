typedef int (*Method_82E27D58)(void *, unsigned, unsigned __int64 *);
void fn_82E27D58(void *obj, unsigned arg, unsigned *high, unsigned *low) {
    unsigned __int64 value;
    int hr = (*(Method_82E27D58 *)(*(int *)obj+0x20))(obj,arg,&value);
    if (hr >= 0) {
        *high = (unsigned)(value >> 32);
        *low = (unsigned)value;
    }
}
