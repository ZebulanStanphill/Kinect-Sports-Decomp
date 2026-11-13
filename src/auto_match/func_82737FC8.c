typedef struct Parser_82737FC8 {
    int a;
    void *result;
    char *node;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
} Parser_82737FC8;

extern unsigned char fn_82695468(Parser_82737FC8 *p, int kind);
extern void fn_826954C0(Parser_82737FC8 *p, const char *name, int a, int b);
extern int fn_826957D0(Parser_82737FC8 *p, int index);
extern double fn_826972E0(int arg, int ctx);
extern int fn_827579F0(char *target, float x, float y, float z);
extern void fn_82681898(void *p, double d);

void fn_82737FC8(Parser_82737FC8 *param_1)
{
    char *obj;
    float x;
    float y;
    float z;
    int n;

    if (fn_82695468(param_1, 0x29) == 0) {
        fn_826954C0(param_1, "TextSnapshot", 0, 0);
        return;
    }
    obj = param_1->node ? param_1->node - 0x10 : 0;
    if (obj != 0 && param_1->count >= 2) {
        x = (float)fn_826972E0(fn_826957D0(param_1, 0), param_1->ctx);
        y = (float)fn_826972E0(fn_826957D0(param_1, 1), param_1->ctx);
        if (param_1->count > 2) {
            z = (float)fn_826972E0(fn_826957D0(param_1, 2), param_1->ctx);
        } else {
            z = 0.0f;
        }
        n = fn_827579F0(obj + 0x30, x * 20.0f, y * 20.0f, z * 20.0f);
        fn_82681898(param_1->result, (double)n);
    }
}
