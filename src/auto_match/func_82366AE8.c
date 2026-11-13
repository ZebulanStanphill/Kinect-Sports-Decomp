typedef struct Obj_82366AE8 {
    char pad0[0x10];
    void *owner;            /* 0x10 */
    char pad14[0xc];
    char handle[0x20c];     /* 0x20 */
    int state;              /* 0x22c */
} Obj_82366AE8;

extern void *fn_824CCD80(void *owner);
extern void fn_825603C8(void *context, void *handle, int flag);
extern void fn_825604A0(void *handle);

void fn_82366AE8(Obj_82366AE8 *self, int state)
{
    if (state != self->state) {
        if (state != 0) {
            fn_825603C8(fn_824CCD80(self->owner), self->handle, 1);
        } else {
            fn_825604A0(self->handle);
        }
        self->state = state;
    }
}
