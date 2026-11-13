typedef struct Arg_82BC3530 {
    int type;
    int value;
} Arg_82BC3530;

typedef struct Args_82BC3530 {
    Arg_82BC3530 v[4];
} Args_82BC3530;

extern void fn_82BC29D0(void *self, int a, int b, Args_82BC3530 args);

void fn_82BC3530(void *self, int a, int b, int x, int y, int z, int w)
{
    Args_82BC3530 args;
    args.v[0].type = 1;
    args.v[0].value = x;
    args.v[1].type = 1;
    args.v[1].value = y;
    args.v[2].type = 1;
    args.v[2].value = z;
    args.v[3].type = 1;
    args.v[3].value = w;
    fn_82BC29D0(self, a, b, args);
}
