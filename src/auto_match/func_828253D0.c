extern void fn_82822368(void *p);
extern void fn_828223C8(void *q, void **out);
extern void fn_82F641F8(void *p);

void fn_828253D0(char *param_1)
{
    void *p;
    for (;;) {
        fn_828223C8(param_1 + 0x30c, &p);
        if (p == 0) break;
        fn_82822368(p);
        if (p != 0) {
            fn_82F641F8(p);
        }
    }
}
