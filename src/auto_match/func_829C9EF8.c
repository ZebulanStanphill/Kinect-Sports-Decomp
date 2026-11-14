extern int lbl_83215000[];
extern int (*lbl_8315C3E8)(void *);
extern long _InterlockedIncrement(long *);
extern long _InterlockedDecrement(long *);
extern void KeSetEvent(void *, int, int);

int fn_829C9EF8(unsigned int *request)
{
    int hr;
    if (!lbl_83215000[6]) {
        *request = 1;
        _InterlockedIncrement((long *)&lbl_83215000[0x280 / 4]);
        hr = lbl_8315C3E8(request + 2);
        if (hr == 0x103)
            return 0;
        if (hr) {
            *request = 0;
            if (_InterlockedDecrement((long *)&lbl_83215000[0x280 / 4]) == 0) {
                __emit(0x7C0004AC);
                KeSetEvent(&lbl_83215000[0x618 / 4], 1, 0);
            }
        }
        return hr;
    }
    return 0xc000004b;
}
