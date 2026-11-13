typedef struct Parser_8273B000 {
    int a;
    int b;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
} Parser_8273B000;

typedef struct Date_8273B000 {
    char pad0[0x30];
    __int64 time;
    int ms;
    int year;
    int yday;
} Date_8273B000;

extern unsigned char fn_82695468(Parser_8273B000 *p, int kind);
extern void fn_826954C0(Parser_8273B000 *p, const char *name, int a, int b);
extern int fn_826957D0(Parser_8273B000 *p, int index);
extern double fn_826972E0(int arg, int ctx);
extern unsigned char fn_82739680(int year);
extern void fn_827396D0(Date_8273B000 *d);
extern int lbl_82011DF0[];

void fn_8273B000(Parser_8273B000 *p)
{
    Date_8273B000 *d;

    if (fn_82695468(p, 0x23) == 0) {
        fn_826954C0(p, "Date", 0, 0);
        return;
    }
    d = p->node ? (Date_8273B000 *)(p->node - 0x10) : 0;
    if (p->count >= 1) {
        int month = (int)fn_826972E0(fn_826957D0(p, 0), p->ctx);
        int i = 0;
        int leap = fn_82739680(d->year);
        for (; i < 12; i++) {
            if (d->yday < lbl_82011DF0[leap * 12 + i]) {
                int delta = lbl_82011DF0[leap * 12 + month] - lbl_82011DF0[leap * 12 + i];
                d->yday += delta;
                d->time += (__int64)delta * 86400000;
                fn_827396D0(d);
                return;
            }
        }
    }
}
