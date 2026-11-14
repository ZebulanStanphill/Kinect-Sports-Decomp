typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct String_822CEB28 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int cap;
} String_822CEB28;

typedef struct SharedPtr_822CEB28 {
    char *px;
    int *rep;
} SharedPtr_822CEB28;

typedef struct Context_822CEB28 {
    char pad[0x20];
    void *lookup;
} Context_822CEB28;

typedef struct Config_822CEB28 {
    char pad[0x84];
    void *target;
} Config_822CEB28;

typedef struct Self_822CEB28 {
    char pad0[0x114];
    Context_822CEB28 *context;
    char pad118[0x168 - 0x118];
    void *listener;
    char pad16c[0x1c0 - 0x16c];
    Config_822CEB28 *config;
    char pad1c4[0x220 - 0x1c4];
    __vector4 colour;
} Self_822CEB28;

extern int fn_822C72E0(void *lookup, const char *name);
extern SharedPtr_822CEB28 *fn_82365BD8(SharedPtr_822CEB28 *dst, SharedPtr_822CEB28 *src);
extern void fn_822CEA78(Self_822CEB28 *self, SharedPtr_822CEB28 *item, String_822CEB28 *name, unsigned int useColour);
extern unsigned char fn_8288B760(void *listener);
extern void fn_822D5D20(void *listener, int arg, String_822CEB28 *name, __vector4 v);
extern void fn_822315A0(int *rep);

static __forceinline const char *c_str_822CEB28(String_822CEB28 *s)
{
    return s->cap >= 16 ? s->u.ptr : s->u.buf;
}

unsigned char fn_822CEB28(Self_822CEB28 *self, SharedPtr_822CEB28 *item, String_822CEB28 *name, unsigned int useColour)
{
    SharedPtr_822CEB28 copy;
    void *listener;
    void *target;

    if (fn_822C72E0(self->context->lookup, c_str_822CEB28(name)) != 0) {
    fn_822CEA78(self, fn_82365BD8(&copy, item), name, useColour);
    listener = self->listener;
    target = self->config->target;
    if (listener != 0 && fn_8288B760(listener) && target != 0)
        fn_822D5D20(listener, *(int *)(item->px + 0x217c), name, useColour ? self->colour : __VMXGetReg(77));
    if (item->rep != 0)
        fn_822315A0(item->rep);
        return 1;
    }
    if (item->rep != 0)
        fn_822315A0(item->rep);
    return 0;
}
