typedef struct Parser_8273B2E8 {
    int a;
    int b;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
} Parser_8273B2E8;

typedef struct Date_8273B2E8 {
    char pad00[0x30];
    __int64 time;
    int ms;
} Date_8273B2E8;

extern unsigned char fn_82695468(Parser_8273B2E8 *p, int kind);
extern void fn_826954C0(Parser_8273B2E8 *p, const char *name, int a, int b);
extern int fn_826957D0(Parser_8273B2E8 *p, int index);
extern double fn_826972E0(int arg, int ctx);
extern void fn_827396D0(Date_8273B2E8 *date);

void fn_8273B2E8(Parser_8273B2E8 *p)
{
    Date_8273B2E8 *date;
    int delta;

    if (fn_82695468(p, 0x23) == 0) {
        fn_826954C0(p, "Date", 0, 0);
        return;
    }
    date = p->node ? (Date_8273B2E8 *)(p->node - 0x10) : 0;
    if (p->count >= 1) {
        delta = (int)fn_826972E0(fn_826957D0(p, 0), p->ctx);
        delta = (delta - date->ms % 3600000 / 60000) * 60000;
        date->ms += delta;
        date->time += delta;
        fn_827396D0(date);
    }
}
