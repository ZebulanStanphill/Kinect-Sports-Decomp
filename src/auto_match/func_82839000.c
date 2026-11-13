typedef struct Obj_82839000 {
    int unk0;
    void *data;
    void *owner;
} Obj_82839000;

extern void fn_82631450(void *owner, void *data);

void fn_82839000(Obj_82839000 *param_1)
{
    Obj_82839000 *self = param_1;
    if (self->data != 0) {
        fn_82631450(self->owner, self->data);
    }
}
