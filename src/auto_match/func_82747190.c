typedef struct { char pad[0x288]; void *heap; } Ctx_82747190;
typedef struct { char pad[0x78]; Ctx_82747190 *ctx; } Scene_82747190;
typedef struct {
    int f00;
    void *f04;
    char *f08;
    int f0c[3];
    Scene_82747190 *scene;
} Obj_82747190;
typedef struct { unsigned char used; char pad[15]; } Elem_82747190;

extern unsigned char fn_82695468(Obj_82747190 *o, int kind);
extern void fn_826954C0(Obj_82747190 *o, const char *name, int a, int b);
extern void *fn_8267B890(void *heap, unsigned int size, int flags);
extern void *fn_82746C20(void *mem, Scene_82747190 *scene);
extern void fn_827450A8(void *src, Ctx_82747190 **ctx, Elem_82747190 *e);
extern void fn_82745128(void *dst, Ctx_82747190 **ctx, Elem_82747190 *e);
extern void fn_82696BC8(void *list, void *item);
extern void fn_82696330(Elem_82747190 *e);
extern void fn_826824B0(void *p);

void fn_82747190(Obj_82747190 *o)
{
    char *src;
    void *mem;
    void *item;
    Elem_82747190 elems[4];
    Elem_82747190 *e;
    int i;

    if (fn_82695468(o, 0x11) == 0) {
        fn_826954C0(o, "Rectangle", 0, 0);
        return;
    }
    src = o->f08 ? o->f08 - 0x10 : 0;
    mem = fn_8267B890(o->scene->ctx->heap, 0x30, 0);
    item = mem ? fn_82746C20(mem, o->scene) : 0;
    for (i = 0; i < 4; i++) {
        elems[i].used = 0;
    }
    fn_827450A8(src, &o->scene->ctx, elems);
    fn_82745128(item, &o->scene->ctx, elems);
    fn_82696BC8(o->f04, item);
    e = &elems[4];
    for (i = 3; i >= 0; i--) {
        --e;
        fn_82696330(e);
    }
    if (item) {
        fn_826824B0(item);
    }
}
