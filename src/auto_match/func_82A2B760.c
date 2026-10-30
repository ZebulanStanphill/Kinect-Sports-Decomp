unsigned long __gregister_get(unsigned int reg);
extern unsigned long RtlNtStatusToDosError(long status);

void fn_82A2B760(long status)
{
    unsigned long err = RtlNtStatusToDosError(status);
    if (*(unsigned int *)(__gregister_get(13) + 0x150) == 0) {
        *(unsigned long *)(*(int *)(__gregister_get(13) + 0x100) + 0x160) = err;
    }
}
