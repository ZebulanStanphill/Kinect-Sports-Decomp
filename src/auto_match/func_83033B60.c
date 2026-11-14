typedef struct Size_83033B60 {
    unsigned short width;
    unsigned short height;
} Size_83033B60;

typedef struct Desc_83033B60 {
    char pad0[8];
    Size_83033B60 size;
} Desc_83033B60;

typedef struct Inner_83033B60 {
    char pad0[4];
    Desc_83033B60 *desc;
} Inner_83033B60;

typedef struct Info_83033B60 {
    char pad0[0x10];
    Inner_83033B60 *inner;
} Info_83033B60;

typedef struct Ctx_83033B60 {
    char pad0[0x78];
    Info_83033B60 *info;
} Ctx_83033B60;

typedef struct Node_83033B60 {
    char pad0[8];
    Size_83033B60 size;
    int owner;
    void *ref;
} Node_83033B60;

typedef struct Holder_83033B60 {
    char pad0[0x10];
    void *ref;
} Holder_83033B60;

extern Node_83033B60 *fn_8302EB70(void *p);
extern void fn_83032D88(void *p);
extern int fn_83033AB8(int owner, void *ref);

int fn_83033B60(int owner, Holder_83033B60 *holder, Ctx_83033B60 *ctx, void **ref)
{
    Node_83033B60 *node;
    void *old;

    node = fn_8302EB70((char *)holder->ref + 4);
    if (node != 0) {
        node->ref = *ref;
        node->owner = owner;
        node->size = ctx->info->inner->desc->size;
        if (node->ref != 0) {
            fn_83033AB8(owner, node->ref);
        }
        return 1;
    }
    old = holder->ref;
    holder->ref = 0;
    if (old != 0) {
        fn_83032D88(old);
    }
    return 0x34;
}
