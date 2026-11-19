typedef struct Settings_824815F0 {
    unsigned char bytes[0x428];
} Settings_824815F0;

typedef struct Ref_824815F0 {
    int px;    /* 0x00 */
    void *rep; /* 0x04 */
} Ref_824815F0;

typedef struct Obj_824815F0 {
    char pad0[0x54];
    int value;                      /* 0x54 */
    int pad58;                      /* 0x58 */
    struct Settings_824815F0 *data; /* 0x5c */
    unsigned __int64 stamp;         /* 0x60 */
    Ref_824815F0 ref;               /* 0x68 */
} Obj_824815F0;

typedef struct Ctx_824815F0 {
    char pad0[0xa4];
    Obj_824815F0 *obj; /* 0xa4 */
    char pada8[0xb4 - 0xa8];
    int handle; /* 0xb4 */
    char padb8[0x53c - 0xb8];
    Settings_824815F0 settings; /* 0x53c */
} Ctx_824815F0;

typedef struct State_824815F0 {
    char pad0[0x38];
    int mode; /* 0x38 */
} State_824815F0;

extern void *fn_8265C9E0(int size);
extern void fn_8265CA20(void *p);
extern void fn_822315A0(void *rep);
extern void fn_8229E090(int handle, int a, int b);
extern State_824815F0 *fn_8225F160(void);
extern void fn_828B2BF8(void);
extern void fn_828B25C8(void);
extern int fn_823AB478(int value);
extern void fn_824C04E0(void *o, int flags);
extern int lbl_83265988;

static __forceinline unsigned char SetMode(State_824815F0 *state, int mode)
{
    unsigned char changed = state->mode != mode;

    state->mode = mode;
    return changed;
}

static __forceinline void Reset(Ref_824815F0 *ref)
{
    void *rep = ref->rep;

    ref->rep = 0;
    ref->px = 0;
    if (rep != 0) {
        fn_822315A0(rep);
    }
}

void fn_824815F0(int mode, Ctx_824815F0 *ctx)
{
    Obj_824815F0 *o;
    Settings_824815F0 *p;

    if (mode != 2) {
        fn_8229E090(ctx->handle, 0, 1);
        ctx->handle = 0;
        if (mode != 0) {
            if (SetMode(fn_8225F160(), 1)) {
                fn_828B2BF8();
                fn_828B25C8();
            }
        }
    } else {
        ctx->handle = 0;
    }
    o = ctx->obj;
    o->value = fn_823AB478(lbl_83265988);
    p = fn_8265C9E0(sizeof(Settings_824815F0));
    if (p != 0) {
        *p = ctx->settings;
    } else {
        p = 0;
    }
    if (p != o->data) {
        if (o->data != 0) {
            fn_8265CA20(o->data);
        }
        o->data = p;
    }
    o->stamp = 0;
    Reset(&o->ref);
    fn_824C04E0(o, 1);
}
