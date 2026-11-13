typedef struct Parser_8270FB08 {
    int a;
    int b;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
} Parser_8270FB08;

extern unsigned char fn_82695468(Parser_8270FB08 *p, int kind);
extern void fn_826954C0(Parser_8270FB08 *p, const char *name, int a, int b);
extern int fn_826957D0(Parser_8270FB08 *p, int index);
extern double fn_826972E0(int arg, int ctx);
extern int fn_82693A98(char *list);
extern unsigned int fn_82693B08(char *list, int index);
extern double fn_826BC950(void);
extern void fn_82681898(int a, double d);
extern char lbl_82005EA4[];

void fn_8270FB08(Parser_8270FB08 *param_1)
{
    char *obj;
    char *list;
    int index;

    if (fn_82695468(param_1, 8) == 0) {
        fn_826954C0(param_1, lbl_82005EA4, 0, 0);
        return;
    }
    obj = param_1->node ? param_1->node - 0x10 : 0;
    list = obj + 0x30;
    if (param_1->count >= 1) {
        index = (int)fn_826972E0(fn_826957D0(param_1, 0), param_1->ctx);
        if (index >= 0 && index < fn_82693A98(list)) {
            fn_82681898(param_1->b, fn_82693B08(list, index));
            return;
        }
    }
    fn_82681898(param_1->b, fn_826BC950());
}
