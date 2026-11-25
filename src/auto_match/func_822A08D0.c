typedef struct Owner_822A08D0 {
    char pad[0x120];
    char handler[0x14];
} Owner_822A08D0;

typedef struct View_822A08D0 {
    const void *vtable;
    char pad4[8];
    Owner_822A08D0 *owner;
    char pad10[0x1c];
    int mode;
    void *data;
    int flags;
    void *first;
    void *second;
    void *third;
    void *overlay;
    int current;
    int pending;
    unsigned short state;
    char pad52[0x7e];
    int count;
    void *selection;
} View_822A08D0;

typedef struct Callback_822A08D0 {
    const void *vtable;
    View_822A08D0 *self;
    char storage[8];
    struct Callback_822A08D0 *target;
} Callback_822A08D0;

extern const char lbl_821ABD7C[];
extern const char lbl_821ABD80[];
extern View_822A08D0 *fn_8229A7B8(View_822A08D0 *self, Owner_822A08D0 *owner, int layer);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_82299948(void *self, int type, void *source);
extern void *fn_822997C8(void *self);
extern void *fn_8229CDE0(void *self, void *settings, int type);
extern void fn_8227CB30(void *dst, Callback_822A08D0 *src);
extern void fn_82359C18(Callback_822A08D0 *callback);
extern void fn_822A0E10(View_822A08D0 *self, int enabled);

View_822A08D0 *fn_822A08D0(View_822A08D0 *self, Owner_822A08D0 *owner, int layer, void *settings, int mode,
                           void *data, int flags)
{
    void *storage;
    Callback_822A08D0 callback;
    fn_8229A7B8(self, owner, layer);
    self->mode = mode;
    self->data = data;
    self->flags = flags;
    self->vtable = lbl_821ABD7C;

    storage = fn_8265C9E0(0x1230);
    self->first = storage ? fn_82299948(storage, 0, 0) : 0;
    storage = fn_8265C9E0(0x1230);
    self->second = storage ? fn_822997C8(storage) : 0;
    storage = fn_8265C9E0(0x1230);
    self->third = storage ? fn_82299948(storage, 4, 0) : 0;
    self->overlay = 0;
    self->current = -1;
    self->pending = -1;
    self->count = 0;
    storage = fn_8265C9E0(0x10);
    self->selection = storage ? fn_8229CDE0(storage, settings, data ? 4 : 3) : 0;

    callback.self = self;
    self->state = 0;
    callback.target = &callback;
    callback.vtable = lbl_821ABD80;
    fn_8227CB30(self->owner->handler, &callback);
    fn_82359C18(&callback);
    fn_822A0E10(self, 1);
    return self;
}
