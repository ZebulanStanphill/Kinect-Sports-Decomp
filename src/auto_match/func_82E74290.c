typedef struct Unknown_82E74290 Unknown_82E74290;
struct Unknown_82E74290 {
    struct {
        void *QueryInterface;
        void *AddRef;
        unsigned int (*Release)(Unknown_82E74290 *self);
    } *vt;
};

typedef struct Self_82E74290 {
    char pad0[0x10];
    char list[0x10];                /* 0x10 */
    char lock[0x1d8 - 0x20];        /* 0x20 */
    Unknown_82E74290 *object;       /* 0x1d8 */
} Self_82E74290;

extern int fn_82E740C0(void *list, int flags, unsigned __int64 *pos, void **item);
extern void fn_82E73470(void *item);
extern void fn_82E2D9C0(void *lock);

void fn_82E74290(Self_82E74290 *self)
{
    unsigned __int64 pos = 0;
    void *item = 0;

    while (fn_82E740C0(self->list, 0, &pos, &item)) {
        if (item != 0) {
            fn_82E73470(item);
            item = 0;
        }
    }
    if (self->object != 0) {
        self->object->vt->Release(self->object);
        self->object = 0;
    }
    fn_82E2D9C0(self->lock);
}
