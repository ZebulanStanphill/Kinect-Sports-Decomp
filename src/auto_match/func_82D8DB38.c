typedef struct Allocator_82D8DB38 Allocator_82D8DB38;

typedef struct {
    void *slot0;
    void (*free)(Allocator_82D8DB38 *self, void *p);
} AllocatorVt_82D8DB38;

struct Allocator_82D8DB38 {
    AllocatorVt_82D8DB38 *vt;
};

typedef struct {
    void *vt;
    int refs;
    Allocator_82D8DB38 allocator;
    int listener;
    int pad10;
    void *buffer;
    void *items[6];
} Obj_82D8DB38;

extern void fn_82D86660(void *buffer, void **items, int count);
extern void fn_82D9A420(void *item, int *listener);
extern void fn_82CE4118(void *obj);

void fn_82D8DB38(Obj_82D8DB38 *self)
{
    int i;
    if (self->buffer != 0) {
        fn_82D86660(self->buffer, self->items, 6);
        for (i = 0; i < 6; i++) {
            fn_82D9A420(self->items[i], &self->listener);
            fn_82CE4118(self->items[i]);
            self->items[i] = 0;
        }
        self->allocator.vt->free(&self->allocator, self->buffer);
        self->buffer = 0;
    }
}
