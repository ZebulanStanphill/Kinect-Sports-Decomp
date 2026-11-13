struct B_82727CA8;
typedef struct {
    int pad0;
    int pad4;
    int (*kind)(struct B_82727CA8 *self);
} Vt_82727CA8;
typedef struct B_82727CA8 {
    Vt_82727CA8 *vt;
} B_82727CA8;

typedef struct {
    char pad0[0xa0];
    void *view;            /* 0xa0 */
} Base_82727CA8;

typedef struct {
    char pad[0x78];
    struct {
        char pad[0x288];
        int heap;
    } *sub;
} Scene_82727CA8;

typedef struct {
    int pad0;
    char *out;                 /* 0x04 */
    B_82727CA8 *b;             /* 0x08 */
    char pad0c[0x18 - 0xc];
    Scene_82727CA8 *scene;     /* 0x18 */
    int argc;                  /* 0x1c */
} Obj_82727CA8;

typedef struct {
    float left;
    float top;
    float right;
    float bottom;
} RectF_82727CA8;

typedef struct {
    double left;
    double top;
    double right;
    double bottom;
} RectD_82727CA8;

extern void *fn_826957D0(Obj_82727CA8 *self, int index);
extern void *fn_82697700(void *value, Scene_82727CA8 *scene);
extern unsigned char fn_827A1B60(void *view, RectF_82727CA8 *rect, void *item);
extern void *fn_8267B890(int heap, int size, int flags);
extern void *fn_82746C20(void *mem, Scene_82727CA8 *scene);
extern void fn_827451A8(void *node, Scene_82727CA8 *scene, RectD_82727CA8 *rect);
extern void fn_82696BC8(char *out, void *node);
extern void fn_826824B0(void *node);
extern void fn_826959C8(char *out);

void fn_82727CA8(Obj_82727CA8 *self)
{
    if (self->b != 0 && self->b->vt->kind(self->b) == 4) {
        Base_82727CA8 *base;
        Scene_82727CA8 *scene;
        void *item;
        RectF_82727CA8 rect;

        if (self->b != 0)
            base = (Base_82727CA8 *)((char *)self->b - 0x68);
        else
            base = 0;
        if (self->argc >= 1) {
            scene = self->scene;
            item = fn_82697700(fn_826957D0(self, 0), scene);
            rect.left = 0.0f;
            rect.top = 0.0f;
            rect.right = 0.0f;
            rect.bottom = 0.0f;
            if (fn_827A1B60(base->view, &rect, item)) {
                void *mem;
                void *node;
                RectD_82727CA8 scaled;

                mem = fn_8267B890(self->scene->sub->heap, 0x30, 0);
                if (mem != 0)
                    node = fn_82746C20(mem, self->scene);
                else
                    node = 0;
                scaled.left = rect.left * 0.05;
                scaled.top = rect.top * 0.05;
                scaled.right = rect.right * 0.05;
                scaled.bottom = rect.bottom * 0.05;
                fn_827451A8(node, self->scene, &scaled);
                fn_82696BC8(self->out, node);
                if (node != 0)
                    fn_826824B0(node);
            } else {
                char *out = self->out;
                fn_826959C8(out);
                *out = 1;
            }
        }
    }
}
