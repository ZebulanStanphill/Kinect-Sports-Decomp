extern void fn_82CE4040(void *obj);
extern void fn_82CE4118(void *obj);

typedef struct {
    char pad[0x60];
    void *ref;
} Owner;

void fn_82CEFC00(Owner *self, void *obj)
{
    if (obj != 0) {
        fn_82CE4040(obj);
    }
    if (self->ref != 0) {
        fn_82CE4118(self->ref);
    }
    self->ref = obj;
}
