typedef struct Vt_82DC3558 Vt_82DC3558;

typedef struct Sub_82DC3558 {
    Vt_82DC3558 *vt;
} Sub_82DC3558;

struct Vt_82DC3558 {
    char pad_0[0x8];
    void (*f1)(Sub_82DC3558 *self, int value);
};

typedef struct Outer_82DC3558 {
    char pad[0x40];
    Sub_82DC3558 sub;
} Outer_82DC3558;

typedef struct Ctx_82DC3558 {
    char pad[0x94];
    int field94;
} Ctx_82DC3558;

typedef struct Arg_82DC3558 {
    Ctx_82DC3558 *ctx;
    int value;
} Arg_82DC3558;

typedef struct Msg_82DC3558 {
    unsigned char type;
    Outer_82DC3558 *obj;
    int value;
    unsigned char flag;
    int extra[2];
} Msg_82DC3558;

extern int fn_82D80C48(Ctx_82DC3558 *ctx, Msg_82DC3558 *msg);

void fn_82DC3558(Sub_82DC3558 *param_1, Arg_82DC3558 *param_2)
{
    Ctx_82DC3558 *ctx = param_2->ctx;
    Msg_82DC3558 msg;

    if (ctx->field94 != 0) {
        msg.value = param_2->value;
        msg.obj = (Outer_82DC3558 *)((char *)param_1 - 0x40);
        msg.type = 0x23;
        msg.flag = 1;
        fn_82D80C48(ctx, &msg);
    } else {
        Outer_82DC3558 *o = (Outer_82DC3558 *)((char *)param_1 - 0x40);
        o->sub.vt->f1(&o->sub, param_2->value);
    }
}
