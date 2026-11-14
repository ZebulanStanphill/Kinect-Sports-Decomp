typedef struct SP_822764B8 { void *p; void *rc; } SP_822764B8;

typedef struct Credits_822764B8 {
    void *vt;               /* 0x000 */
    char pad4[0x12c];
    void *texture;          /* 0x130 */
    int alternate;          /* 0x134 */
} Credits_822764B8;

extern char lbl_821A8118[];
extern char lbl_821A89BC[];
extern SP_822764B8 *fn_82279C58(SP_822764B8 *out, Credits_822764B8 *self);
extern void *fn_8266F6B8(void);
extern void fn_826728E8(void *scene, const char *name, void *context);
extern void fn_822315A0(void *rc);
extern void fn_8251FA58(void *texture);
extern void fn_82279AF0(Credits_822764B8 *self);
extern void fn_8265CA20(void *p);

Credits_822764B8 *fn_822764B8(Credits_822764B8 *self, unsigned int flags)
{
    SP_822764B8 a;
    SP_822764B8 b;
    void *scene;

    self->vt = lbl_821A8118;
    if (self->alternate != 0) {
        scene = fn_82279C58(&a, self)->p;
        fn_826728E8(scene, "credits_texture", fn_8266F6B8());
        if (a.rc != 0)
            fn_822315A0(a.rc);
    } else {
        scene = fn_82279C58(&b, self)->p;
        fn_826728E8(scene, "credits_texture2", fn_8266F6B8());
        if (b.rc != 0)
            fn_822315A0(b.rc);
    }
    if (self->texture != 0) {
        fn_8251FA58(self->texture);
        self->texture = 0;
    }
    self->vt = lbl_821A89BC;
    fn_82279AF0(self);
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
