typedef struct { int v[10]; } Tmp;
extern int fn_828D4D68(void);
extern void fn_828D7C30(void *p);
extern void fn_828D87E0(void *p, Tmp *t);
extern void fn_828E2448(Tmp *t);
extern void fn_828E2620(Tmp *t, int a, void *b);

void fn_828D8900(char *p, void *b)
{
    Tmp t;
    fn_828E2620(&t, fn_828D4D68(), b);
    fn_828D87E0(p + 0xc, &t);
    fn_828D7C30(p);
    fn_828E2448(&t);
}
