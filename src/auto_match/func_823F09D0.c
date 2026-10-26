extern void fn_822315A0(void *p);
extern void fn_823F2E20(char *a, char *b);
extern unsigned char fn_828E2688(char *p);

void fn_823F09D0(char *p, char *q)
{
    if (!fn_828E2688(p)) {
        fn_823F2E20(p + 0x70, q);
    }
    if (*(void **)(q + 4) != 0) {
        fn_822315A0(*(void **)(q + 4));
    }
}
