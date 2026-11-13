struct B_82727B48;
typedef struct {
    int pad0;
    int pad4;
    int (*kind)(struct B_82727B48 *self);
} Vt_82727B48;
typedef struct B_82727B48 {
    Vt_82727B48 *vt;
} B_82727B48;

typedef struct {
    char pad0[0xa0];
    void *character;   /* 0xa0 */
} Base_82727B48;

typedef struct {
    char pad[0x78];
    struct {
        char pad[0x288];
        int heap;
    } *sub;
} Env_82727B48;

typedef struct {
    int pad0;
    unsigned char *out;     /* 0x04 */
    B_82727B48 *b;          /* 0x08 */
    char pad0c[0x18 - 0xc];
    Env_82727B48 *env;      /* 0x18 */
    int argc;               /* 0x1c */
} Obj_82727B48;

typedef struct {
    float x0, y0, x1, y1;
} Rect_82727B48;

typedef struct {
    double x0, y0, x1, y1;
} RectD_82727B48;

extern void *fn_8267B890(int heap, int size, int flags);
extern void fn_826824B0(void *p);
extern void *fn_826957D0(Obj_82727B48 *self, int index);
extern double fn_826972E0(void *value, Env_82727B48 *env);
extern void fn_826959C8(unsigned char *p);
extern void fn_82696BC8(unsigned char *out, void *obj);
extern unsigned char fn_827A1930(void *character, Rect_82727B48 *rect, unsigned int index);
extern void *fn_82746C20(void *mem, Env_82727B48 *env);
extern void fn_827451A8(void *obj, Env_82727B48 *env, RectD_82727B48 *rect);

void fn_82727B48(Obj_82727B48 *self)
{
    Base_82727B48 *base;
    Env_82727B48 *env;
    unsigned int index;
    Rect_82727B48 rect;
    RectD_82727B48 r;
    void *mem;
    void *obj;

    if (self->b == 0 || self->b->vt->kind(self->b) != 4)
        return;
    if (self->b != 0)
        base = (Base_82727B48 *)((char *)self->b - 0x68);
    else
        base = 0;
    if (self->argc < 1)
        return;
    env = self->env;
    index = (unsigned int)fn_826972E0(fn_826957D0(self, 0), env);
    rect.x0 = 0.0f;
    rect.y0 = 0.0f;
    rect.x1 = 0.0f;
    rect.y1 = 0.0f;
    if (fn_827A1930(base->character, &rect, index)) {
        mem = fn_8267B890(self->env->sub->heap, 0x30, 0);
        if (mem != 0)
            obj = fn_82746C20(mem, self->env);
        else
            obj = 0;
        r.x0 = rect.x0 * 0.05;
        r.y0 = rect.y0 * 0.05;
        r.x1 = rect.x1 * 0.05;
        r.y1 = rect.y1 * 0.05;
        fn_827451A8(obj, self->env, &r);
        fn_82696BC8(self->out, obj);
        if (obj != 0)
            fn_826824B0(obj);
    } else {
        unsigned char *out = self->out;
        fn_826959C8(out);
        *out = 1;
    }
}
