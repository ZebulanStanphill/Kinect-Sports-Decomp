typedef struct Parser_82737AB0 {
    int a;
    int b;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
} Parser_82737AB0;

extern unsigned char fn_82695468(Parser_82737AB0 *p, int kind);
extern void fn_826954C0(Parser_82737AB0 *p, const char *name, int a, int b);
extern int fn_826957D0(Parser_82737AB0 *p, int index);
extern unsigned int fn_82697700(int arg, int ctx);
extern int fn_82695608(int arg, int ctx);
extern void fn_82757FA8(char *target, unsigned int first, unsigned int last, int value);

void fn_82737AB0(Parser_82737AB0 *param_1)
{
    char *obj;
    unsigned int first;
    unsigned int last;
    int value;

    if (fn_82695468(param_1, 0x29) == 0) {
        fn_826954C0(param_1, "TextSnapshot", 0, 0);
        return;
    }
    obj = param_1->node ? param_1->node - 0x10 : 0;
    if (obj != 0 && param_1->count >= 3) {
        first = fn_82697700(fn_826957D0(param_1, 0), param_1->ctx);
        last = fn_82697700(fn_826957D0(param_1, 1), param_1->ctx);
        value = fn_82695608(fn_826957D0(param_1, 2), param_1->ctx);
        if (last <= first) {
            last = first + 1;
        }
        fn_82757FA8(obj + 0x30, first, last, value);
    }
}
