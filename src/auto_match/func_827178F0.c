typedef struct MsgType_827178F0 {
    char pad[0xc];
    unsigned int top : 2;
    unsigned int forwardToOuter : 1;
    unsigned int rest : 29;
} MsgType_827178F0;

typedef struct Msg_827178F0 {
    MsgType_827178F0 *type;
} Msg_827178F0;

typedef struct Info_827178F0 {
    char pad[0xfc];
    MsgType_827178F0 *typeFC;
    char pad100[0x134 - 0x100];
    MsgType_827178F0 *type134;
    char pad138[0x2a0 - 0x138];
    void *value2A0;
} Info_827178F0;

typedef struct Ctx_827178F0 {
    char pad[0x78];
    Info_827178F0 *info;
} Ctx_827178F0;

struct Handler_827178F0;

typedef struct HandlerVtbl_827178F0 {
    char pad[0x10];
    unsigned char (*handle)(struct Handler_827178F0 *self, Ctx_827178F0 *ctx, Msg_827178F0 *msg, void *out);
} HandlerVtbl_827178F0;

typedef struct Handler_827178F0 {
    HandlerVtbl_827178F0 *vt;
} Handler_827178F0;

typedef struct Target_827178F0 {
    char pad[0x10];
    Handler_827178F0 handler;
} Target_827178F0;

struct Outer_827178F0;

typedef struct OuterVtbl_827178F0 {
    char pad[0x100];
    unsigned char (*handle)(struct Outer_827178F0 *self, void *msg, void *out, int flag);
} OuterVtbl_827178F0;

typedef struct Outer_827178F0 {
    OuterVtbl_827178F0 *vt;
} Outer_827178F0;

typedef struct Self_827178F0 {
    char pad0[4];
    Target_827178F0 *next;
    char pad8[0x54 - 8];
    int delegate;
} Self_827178F0;

extern void *fn_8269FD90(Outer_827178F0 *outer, Msg_827178F0 *msg);
extern void fn_82696BC8(void *out, void *value);

unsigned char fn_827178F0(Self_827178F0 *self, Ctx_827178F0 *ctx, Msg_827178F0 *msg, void *out)
{
    Target_827178F0 *next;

    if ((unsigned char)msg->type->forwardToOuter) {
        Outer_827178F0 *outer = (Outer_827178F0 *)((char *)self - 0x68);
        if (outer->vt->handle(outer, fn_8269FD90(outer, msg), out, 0))
            return 1;
    }
    if (self->delegate != 0) {
        Target_827178F0 *d = (Target_827178F0 *)self->delegate;
        return d->handler.vt->handle(&d->handler, ctx, msg, out);
    }
    if (ctx != 0 && msg->type == ctx->info->type134) {
        fn_82696BC8(out, self->next);
        return 1;
    }
    next = self->next;
    if (next != 0 && next->handler.vt->handle(&next->handler, ctx, msg, out))
        return 1;
    if (ctx != 0 && msg->type == ctx->info->typeFC) {
        fn_82696BC8(out, ctx->info->value2A0);
        return 1;
    }
    return 0;
}
