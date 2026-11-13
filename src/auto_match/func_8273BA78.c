typedef struct Parser_8273BA78 {
    int a;
    int b;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
} Parser_8273BA78;

extern unsigned char fn_82695468(Parser_8273BA78 *p, int kind);
extern void fn_826954C0(Parser_8273BA78 *p, const char *name, int a, int b);
extern int fn_826957D0(Parser_8273BA78 *p, int index);
extern double fn_826972E0(int arg, int ctx);
extern void fn_8273B930(char *obj, __int64 value);

void fn_8273BA78(Parser_8273BA78 *p)
{
    char *obj;

    if (fn_82695468(p, 0x23) == 0) {
        fn_826954C0(p, "Date", 0, 0);
        return;
    }
    obj = p->node ? p->node - 0x10 : 0;
    if (p->count >= 1) {
        fn_8273B930(obj, (__int64)fn_826972E0(fn_826957D0(p, 0), p->ctx));
    }
}
