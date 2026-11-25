typedef struct Function_8228C9A0 {
    int space[4];
    void *impl; /* 0x10 */
} Function_8228C9A0;

typedef struct Functor_8228C9A0 {
    void *vt;                      /* 0x00 */
    void *fn;                      /* 0x04 */
    int pad[2];                    /* 0x08 */
    struct Functor_8228C9A0 *impl; /* 0x10 */
} Functor_8228C9A0;

typedef struct Value_8228C9A0 {
    int type;      /* 0x00 */
    int flags;     /* 0x04 */
    double number; /* 0x08 */
} Value_8228C9A0;

typedef struct Ref_8228C9A0 {
    int movie;
    void *ref;
} Ref_8228C9A0;

typedef struct Callback_8228C9A0 {
    void *vt;     /* 0x00 */
    void *owner;  /* 0x04 */
    void *update; /* 0x08 */
    void *enter;  /* 0x0c */
    void *leave;  /* 0x10 */
    int active;   /* 0x14 */
} Callback_8228C9A0;

typedef struct Global_8228C9A0 {
    char pad00[0x60];
    int dirty; /* 0x60 */
} Global_8228C9A0;

typedef struct State_8228C9A0 {
    int field160; /* 0x160 */
    int field164; /* 0x164 */
    int field168; /* 0x168 */
    int field16c; /* 0x16c */
    int width;    /* 0x170 */
    int height;   /* 0x174 */
    int field178; /* 0x178 */
    int field17c; /* 0x17c */
    int player;   /* 0x180 */
    int mode;     /* 0x184 */
    int field188; /* 0x188 */
    int shown;    /* 0x18c */
    int field190; /* 0x190 */
    int field194; /* 0x194 */
    int field198; /* 0x198 */
    int field19c; /* 0x19c */
} State_8228C9A0;

typedef struct Screen_8228C9A0 {
    void *vt; /* 0x000 */
    char pad004[0xa4 - 0x4];
    Callback_8228C9A0 *callback; /* 0x0a4 */
    char pad0a8[0x130 - 0xa8];
    Callback_8228C9A0 callbackStorage; /* 0x130 */
    Function_8228C9A0 onClose;         /* 0x148 */
    int pad15c;
    State_8228C9A0 state; /* 0x160 */
} Screen_8228C9A0;

extern void fn_822315A0(void *p);
extern Global_8228C9A0 *fn_82250A18(void);
extern void fn_82273C88(Value_8228C9A0 *v);
extern void fn_82273CD8(Value_8228C9A0 *v, int type);
extern void *fn_82279768(void *self, int settings, void *owner, int p4, int p5, Functor_8228C9A0 *func,
                         void *config, int p8, int p9, void *listener);
extern int *fn_82279C58(Ref_8228C9A0 *out, Screen_8228C9A0 *self);
extern void fn_82279D28(Screen_8228C9A0 *self, int a, int b);
extern void fn_8228D478(void);
extern Function_8228C9A0 *fn_822C5B18(Function_8228C9A0 *dst, const Function_8228C9A0 *src);
extern void fn_82359C18(Function_8228C9A0 *p);
extern void fn_8248F4B8(void);
extern void fn_82672C20(int movie, const char *name, Value_8228C9A0 *v, int n);
extern void fn_82BA02A8(void);
extern char lbl_821A7FF4[];
extern char lbl_821A8C90[];
extern char lbl_821A998C[];
extern Global_8228C9A0 *lbl_832975B0;

static __forceinline void InitFunctor(Functor_8228C9A0 *f, void *const *pfn)
{
    if (*pfn == 0) {
        f->impl = 0;
    } else {
        f->fn = *pfn;
        f->impl = f;
        f->vt = lbl_821A7FF4;
    }
}

static __forceinline void InitState(State_8228C9A0 *s, int width, int height, int mode, int *player)
{
    s->width = width;
    s->height = height;
    s->field160 = 0;
    s->field164 = 0;
    s->field168 = 1;
    s->field16c = 0;
    s->field178 = 0;
    s->field17c = 0;
    s->mode = mode;
    s->field188 = 0;
    s->shown = 0;
    s->field190 = 0;
    s->field194 = 1;
    s->field198 = 0;
    s->field19c = 0;
    s->player = *player;
}

static __forceinline void InitCallback(Callback_8228C9A0 *c)
{
    c->vt = lbl_821A8C90;
    c->active = 0;
}

static __forceinline void BindCallback(Callback_8228C9A0 *c, void *owner, void *update, void *enter,
                                       void *leave)
{
    c->owner = owner;
    c->update = update;
    c->enter = enter;
    c->leave = leave;
}

Screen_8228C9A0 *fn_8228C9A0(Screen_8228C9A0 *self, int settings, int width, int height, int mode, int show,
                             int *player, Function_8228C9A0 *onClose)
{
    Functor_8228C9A0 f;
    Value_8228C9A0 v;
    Ref_8228C9A0 r;
    int *movie;
    Global_8228C9A0 *g;
    void *fp;

    fp = (void *)fn_8248F4B8;
    InitFunctor(&f, &fp);
    fn_82279768(self, settings, 0, 1, 1, &f, 0, 1, 0, 0);
    self->vt = lbl_821A998C;
    InitCallback(&self->callbackStorage);
    fn_822C5B18(&self->onClose, onClose);
    InitState(&self->state, width, height, mode, player);
    BindCallback(&self->callbackStorage, self, (void *)fn_8228D478, (void *)fn_82BA02A8, (void *)fn_82BA02A8);
    v.type = 0;
    v.flags = 0;
    self->callback = &self->callbackStorage;
    fn_82273CD8(&v, 3);
    v.number = 0.0;
    movie = fn_82279C58(&r, self);
    fn_82672C20(*movie, "_root.setColourQuadAlpha", &v, 1);
    if (r.ref != 0) {
        fn_822315A0(r.ref);
    }
    fn_82273C88(&v);
    g = lbl_832975B0;
    if (lbl_832975B0 == 0) {
        g = fn_82250A18();
    }
    g->dirty = 1;
    if (show != 0 && self->state.shown == 0) {
        fn_82279D28(self, 1, 1);
        self->state.shown = 1;
    }
    fn_82359C18(onClose);
    return self;
}
