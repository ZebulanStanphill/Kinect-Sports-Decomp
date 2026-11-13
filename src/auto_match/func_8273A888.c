typedef struct Parser_8273A888 {
    int a;
    int arg;
    char *node;
} Parser_8273A888;

typedef struct Date_8273A888 {
    char pad0[0x3c];
    int year;
    int yday;
} Date_8273A888;

extern unsigned char fn_82695468(Parser_8273A888 *p, int kind);
extern void fn_826954C0(Parser_8273A888 *p, const char *name, int a, int b);
extern void fn_82681898(int arg, double value);
extern unsigned char fn_82739680(int year);
extern int lbl_82011DF0[];
extern double lbl_8200E890;

static __forceinline double mday_8273A888(Date_8273A888 *d)
{
    int i;
    int leap = fn_82739680(d->year);
    if (d->yday < lbl_82011DF0[leap * 12])
        return (double)(d->yday + 1);
    for (i = 1; i < 12; i++) {
        if (d->yday < lbl_82011DF0[leap * 12 + i])
            return (double)(d->yday - lbl_82011DF0[leap * 12 + i - 1] + 1);
    }
    return lbl_8200E890;
}

void fn_8273A888(Parser_8273A888 *p)
{
    Date_8273A888 *d;

    if (fn_82695468(p, 0x23) == 0) {
        fn_826954C0(p, "Date", 0, 0);
    } else {
        d = p->node ? (Date_8273A888 *)(p->node - 0x10) : 0;
        fn_82681898(p->arg, mday_8273A888(d));
    }
}
