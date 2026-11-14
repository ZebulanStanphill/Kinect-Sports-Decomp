extern int fn_82A1E508(void *thread, unsigned int cpu);

long fn_82E665B0(void *thread, unsigned int mask)
{
    long hr = 0;
    unsigned int cpu = 0xffffffff;
    unsigned int i;

    if (thread == (void *)-1) {
        hr = 0x80070057;
        goto done;
    }
    if (mask == 0) {
        hr = 0x80070057;
        goto done;
    }
    for (i = 0; i < 6; i++) {
        if (mask == 0)
            break;
        if (mask & 1) {
            if (cpu != 0xffffffff) {
                hr = 0x80070057;
                goto done;
            }
            cpu = i;
        }
        mask >>= 1;
    }
    if (fn_82A1E508(thread, cpu) == -1)
        hr = 0x80004005;
done:
    return hr;
}
