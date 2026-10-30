extern void *fn_82544F40(void *p);
extern void *fn_825597C0(void);
extern void *fn_8266EC60(void);
extern void *fn_8266EFC0(void *a, int b, void *c, void *d);

void fn_824E3248(void *arg)
{
    void *a = fn_825597C0();
    fn_82544F40(fn_8266EFC0(fn_8266EC60(), 1, a, arg));
}
