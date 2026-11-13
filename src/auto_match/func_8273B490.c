typedef struct Parser_8273B490 {
    int a;
    int b;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
} Parser_8273B490;

typedef struct Date_8273B490 {
    char pad0[0x30];
    __int64 time;
    int ms;
} Date_8273B490;

extern unsigned char fn_82695468(Parser_8273B490 *p, int kind);
extern void fn_826954C0(Parser_8273B490 *p, const char *name, int a, int b);
extern int fn_826957D0(Parser_8273B490 *p, int index);
extern double fn_826972E0(int arg, int ctx);
extern void fn_827396D0(Date_8273B490 *d);

void fn_8273B490(Parser_8273B490 *p)
{
    Date_8273B490 *d;

    if (fn_82695468(p, 0x23) == 0) {
        fn_826954C0(p, "Date", 0, 0);
        return;
    }
    d = p->node ? (Date_8273B490 *)(p->node - 0x10) : 0;
    if (p->count >= 1) {
        int ms = (int)fn_826972E0(fn_826957D0(p, 0), p->ctx);
        int delta = ms - d->ms % 1000;
        d->ms += delta;
        d->time += delta;
        fn_827396D0(d);
    }
}
