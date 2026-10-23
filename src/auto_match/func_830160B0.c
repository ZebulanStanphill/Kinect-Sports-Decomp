extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_82FFFA70(void *a, void *b);
extern void *fn_83016050(void *a, void *b);

void fn_830160B0(void *param_1, void *param_2, void *param_3)
{
    char *p;

    RtlEnterCriticalSection(param_1);
    p = fn_83016050(param_1, param_2);
    if (p != 0) {
        RtlEnterCriticalSection(p);
        fn_82FFFA70(p + 0x1c, param_3);
        RtlLeaveCriticalSection(p);
    }
    RtlLeaveCriticalSection(param_1);
}
