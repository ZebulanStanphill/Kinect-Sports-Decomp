typedef struct Obj_822B1F00 {
    char pad0[0x10];
    void *owner;
    char pad14[0x1c];
    char value[4];
} Obj_822B1F00;

extern unsigned char fn_8288B760(void *self);
extern void fn_828AB870(void *dst, int v);

unsigned char fn_822B1F00(Obj_822B1F00 *self, int v)
{
    if (fn_8288B760(self->owner)) {
        fn_828AB870(self->value, v);
        return 1;
    }
    return 0;
}
