extern int NtAllocateVirtualMemory(void **base, unsigned long *size, unsigned long type, unsigned long protect, unsigned long zeroBits);
extern void fn_82A2B760(int);

void *fn_82A2A4C8(void *base, unsigned long size, unsigned long type, unsigned long protect)
{
    int status = NtAllocateVirtualMemory(&base, &size, type, protect, 0);
    if (status >= 0)
        return base;
    fn_82A2B760(status);
    return 0;
}
