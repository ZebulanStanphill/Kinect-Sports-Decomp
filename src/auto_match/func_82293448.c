typedef struct Ref_82293448 {
    void *object; /* 0x0 */
    void *rep;    /* 0x4 */
} Ref_82293448;

typedef struct Self_82293448 {
    void *vt; /* 0x0 */
    char pad4[0x182c - 0x4];
    float scale;     /* 0x182c */
    float offset;    /* 0x1830 */
    int state;       /* 0x1834 */
    int active;      /* 0x1838 */
    int target;      /* 0x183c */
    int pending;     /* 0x1840 */
    void *primary;   /* 0x1844 */
    void *secondary; /* 0x1848 */
    void *overlay;   /* 0x184c */
    int count;       /* 0x1850 */
    void *label;     /* 0x1854 */
} Self_82293448;

extern char lbl_821AA7BC[];

extern Self_82293448 *fn_8229A7B8(Self_82293448 *self, void *owner, int layer);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_82299948(void *p, int a, int b);
extern void *fn_822997C8(void *p);
extern void *fn_8229CDE0(void *p, int name, int arg);
extern Ref_82293448 *fn_8229AE10(Ref_82293448 *out, Self_82293448 *self);
extern void fn_8266F6A8(void *texture, int flags);
extern void fn_822315A0(void *rep);

Self_82293448 *fn_82293448(Self_82293448 *self, void *owner, int name, int layer)
{
    void *p;
    Ref_82293448 ref;

    fn_8229A7B8(self, owner, layer);
    self->state = 0;
    self->vt = lbl_821AA7BC;
    self->scale = 0.0f;
    self->active = 0;
    self->offset = 0.0f;
    self->target = 0;
    self->pending = 0;
    p = fn_8265C9E0(0x1230);
    self->primary = p != 0 ? fn_82299948(p, 1, 0) : 0;
    p = fn_8265C9E0(0x1230);
    self->secondary = p != 0 ? fn_82299948(p, 2, 0) : 0;
    p = fn_8265C9E0(0x1230);
    self->overlay = p != 0 ? fn_822997C8(p) : 0;
    self->count = 0;
    p = fn_8265C9E0(0x10);
    self->label = p != 0 ? fn_8229CDE0(p, name, 1) : 0;
    fn_8266F6A8(fn_8229AE10(&ref, self)->object, 3);
    if (ref.rep != 0) {
        fn_822315A0(ref.rep);
    }
    return self;
}
