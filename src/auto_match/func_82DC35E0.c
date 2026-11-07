typedef struct Vt_82DC35E0 Vt_82DC35E0;

typedef struct Sub_82DC35E0 {
    Vt_82DC35E0 *vt;
} Sub_82DC35E0;

struct Vt_82DC35E0 {
    void *f0;
    void (*f1)(Sub_82DC35E0 *self, int value);
};

typedef struct Outer_82DC35E0 {
    char pad[0x40];
    Sub_82DC35E0 sub;
} Outer_82DC35E0;

typedef struct Ctx_82DC35E0 {
    char pad[0x94];
    int field94;
} Ctx_82DC35E0;

typedef struct Arg_82DC35E0 {
    Ctx_82DC35E0 *ctx;
    int value;
} Arg_82DC35E0;

typedef struct Msg_82DC35E0 {
    unsigned char type;
    Outer_82DC35E0 *obj;
    int value;
    unsigned char flag;
    int extra[2];
} Msg_82DC35E0;

extern int fn_82D80C48(Ctx_82DC35E0 *ctx, Msg_82DC35E0 *msg);

void fn_82DC35E0(Sub_82DC35E0 *param_1, Arg_82DC35E0 *param_2)
{
    Ctx_82DC35E0 *ctx = param_2->ctx;
    Msg_82DC35E0 msg;

    if (ctx->field94 != 0) {
        msg.value = param_2->value;
        msg.obj = (Outer_82DC35E0 *)((char *)param_1 - 0x40);
        msg.type = 0x23;
        msg.flag = 0;
        fn_82D80C48(ctx, &msg);
    } else {
        Outer_82DC35E0 *o = (Outer_82DC35E0 *)((char *)param_1 - 0x40);
        o->sub.vt->f1(&o->sub, param_2->value);
    }
}
