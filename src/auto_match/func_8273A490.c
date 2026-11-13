typedef struct Parser_8273A490 {
    int a;
    int b;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
} Parser_8273A490;

typedef struct Date_8273A490 {
    char pad00[0x48];
    __int64 time;
    int ms;
} Date_8273A490;

extern unsigned char fn_82695468(Parser_8273A490 *p, int kind);
extern void fn_826954C0(Parser_8273A490 *p, const char *name, int a, int b);
extern int fn_826957D0(Parser_8273A490 *p, int index);
extern double fn_826972E0(int arg, int ctx);
extern void fn_827397D8(Date_8273A490 *date);

void fn_8273A490(Parser_8273A490 *p)
{
    Date_8273A490 *date;
    int delta;

    if (fn_82695468(p, 0x23) == 0) {
        fn_826954C0(p, "Date", 0, 0);
        return;
    }
    date = p->node ? (Date_8273A490 *)(p->node - 0x10) : 0;
    if (p->count >= 1) {
        delta = (int)fn_826972E0(fn_826957D0(p, 0), p->ctx);
        delta = (delta - date->ms / 3600000) * 3600000;
        date->ms += delta;
        date->time += delta;
        fn_827397D8(date);
    }
}
