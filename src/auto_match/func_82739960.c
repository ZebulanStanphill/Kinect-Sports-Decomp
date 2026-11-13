typedef struct Parser_82739960 {
    int a;
    int arg;
    char *node;
} Parser_82739960;

typedef struct Date_82739960 {
    char pad0[0x54];
    int year;
    int yday;
} Date_82739960;

extern unsigned char fn_82695468(Parser_82739960 *p, int kind);
extern void fn_826954C0(Parser_82739960 *p, const char *name, int a, int b);
extern void fn_82681898(int arg, double value);
extern unsigned char fn_82739680(int year);
extern int lbl_82011DF0[];
extern double lbl_8200E890;

static __forceinline double month_82739960(Date_82739960 *d)
{
    int i = 0;
    int leap = fn_82739680(d->year);
    for (; i < 12; i++) {
        if (d->yday < lbl_82011DF0[leap * 12 + i])
            return (double)i;
    }
    return lbl_8200E890;
}

void fn_82739960(Parser_82739960 *p)
{
    Date_82739960 *d;

    if (fn_82695468(p, 0x23) == 0) {
        fn_826954C0(p, "Date", 0, 0);
    } else {
        d = p->node ? (Date_82739960 *)(p->node - 0x10) : 0;
        fn_82681898(p->arg, month_82739960(d));
    }
}
