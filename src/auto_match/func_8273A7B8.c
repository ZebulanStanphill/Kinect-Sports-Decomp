typedef struct Parser_8273A7B8 {
    int a;
    int arg;
    char *node;
} Parser_8273A7B8;

typedef struct Date_8273A7B8 {
    char pad0[0x3c];
    int year;
    int yday;
} Date_8273A7B8;

extern unsigned char fn_82695468(Parser_8273A7B8 *p, int kind);
extern void fn_826954C0(Parser_8273A7B8 *p, const char *name, int a, int b);
extern void fn_82681898(int arg, double value);
extern unsigned char fn_82739680(int year);
extern int lbl_82011DF0[];
extern double lbl_8200E890;

static __forceinline double month_8273A7B8(Date_8273A7B8 *d)
{
    int i = 0;
    int leap = fn_82739680(d->year);
    for (; i < 12; i++) {
        if (d->yday < lbl_82011DF0[leap * 12 + i])
            return (double)i;
    }
    return lbl_8200E890;
}

void fn_8273A7B8(Parser_8273A7B8 *p)
{
    Date_8273A7B8 *d;

    if (fn_82695468(p, 0x23) == 0) {
        fn_826954C0(p, "Date", 0, 0);
    } else {
        d = p->node ? (Date_8273A7B8 *)(p->node - 0x10) : 0;
        fn_82681898(p->arg, month_8273A7B8(d));
    }
}
