typedef struct Parser_8273AEE0 {
    int a;
    int b;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
} Parser_8273AEE0;

typedef struct Date_8273AEE0 {
    char pad0[0x30];
    __int64 time;
    int ms;
    int year;
    int yday;
} Date_8273AEE0;

extern unsigned char fn_82695468(Parser_8273AEE0 *p, int kind);
extern void fn_826954C0(Parser_8273AEE0 *p, const char *name, int a, int b);
extern int fn_826957D0(Parser_8273AEE0 *p, int index);
extern double fn_826972E0(int arg, int ctx);
extern unsigned char fn_82739680(int year);
extern void fn_827396D0(Date_8273AEE0 *d);

void fn_8273AEE0(Parser_8273AEE0 *p)
{
    Date_8273AEE0 *d;
    int year;
    int y;

    if (fn_82695468(p, 0x23) == 0) {
        fn_826954C0(p, "Date", 0, 0);
        return;
    }
    d = p->node ? (Date_8273AEE0 *)(p->node - 0x10) : 0;
    if (p->count >= 1) {
        year = (int)fn_826972E0(fn_826957D0(p, 0), p->ctx);
        if (d->yday >= 60) {
            d->yday = d->yday - fn_82739680(d->year) + fn_82739680(year);
        }
        d->year = year;
        y = year - 1970;
        d->time = (__int64)((y + 369) / 400 - (y + 69) / 100 + (y + 1) / 4 + y * 365 + d->yday) * 86400000 + d->ms;
        fn_827396D0(d);
    }
}
