// Script value logical right shift: a = a >> b, both converted with the interpreter context ctx.
// fn_82697610 passes ctx on in r4 to fn_826972E0, which reads it.
typedef struct Value_82697610 Value_82697610;

extern int fn_82697610(Value_82697610 *v, void *ctx);
extern unsigned int fn_82697700(Value_82697610 *v, void *ctx);
extern void fn_8269A1F0(Value_82697610 *v, int n);

void fn_826A6898(Value_82697610 *a, void *ctx, Value_82697610 *b)
{
    int n = fn_82697610(b, ctx);

    fn_8269A1F0(a, fn_82697700(a, ctx) >> n);
}
