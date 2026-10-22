typedef struct Entry {
    int type;
    unsigned int *data;
} Entry;

typedef struct Obj {
    Entry *entries;
    unsigned int count;
    int f8;
    int fc;
    int f10;
    int sub14;
} Obj;

extern int *fn_825A2410(int *p);
extern void fn_82CE4040(int v);
extern unsigned char *fn_82CEBB58(void *a, void *b);
extern void fn_82CEBB90(void *a, unsigned int b, unsigned int c, int d);
extern void fn_82CEBC18(void *a);
extern int fn_82E0A1C0(void *a);
extern void fn_82E0B980(void *a);
extern void fn_82E0C7A0(void *a);
extern int fn_82E0C868(void *a);
extern int fn_82E0D7E8(void *a, void *b);
extern void fn_82E10A30(void *a, unsigned int b);
extern int fn_82E12AC8(void *a, int b);
extern unsigned int lbl_8323FDE4;

static unsigned int *find(Obj *o, int type)
{
    unsigned int i;
    for (i = 0; i < o->count; i++) {
        if (o->entries[i].type == type)
            return o->entries[i].data;
    }
    return 0;
}

void fn_825A54A8(Obj *o)
{
    unsigned int *d;
    int v;
    char b[4];
    char s[32];
    char x[136];

    d = find(o, 4);
    if (d != 0) {
        fn_82E0B980(x);
        o->fc = 4;
        fn_82CEBB90(s, d[0], d[1], 2);
        if (*fn_82CEBB58(b, s) != 0 && fn_82E0D7E8(x, s) == 0) {
            fn_82E10A30(x, lbl_8323FDE4);
            o->f8 = fn_82E12AC8(x, fn_82E0A1C0(x));
            v = fn_82E0C868(x);
            fn_82CE4040(v);
            fn_82CE4040(v);
            *fn_825A2410(&o->sub14) = v;
        }
        fn_82CEBC18(s);
        fn_82E0C7A0(x);
    }
}
