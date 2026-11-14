typedef struct Obj_823C06A0 {
    char pad0[0x4c0];
    void *mode;            /* +0x4c0 */
    char pad4c4[0xe10 - 0x4c4];
    void *current;         /* +0xe10 */
    void *others[3];       /* +0xe14 */
} Obj_823C06A0;

extern void fn_823C2230(Obj_823C06A0 *self, void *item);
extern void fn_8236CE28(Obj_823C06A0 *self, float dt);

void fn_823C06A0(Obj_823C06A0 *self, float dt, int enable)
{
    int i;

    if (enable != 0) {
        fn_823C2230(self, self->current);
        if (self->mode != 0) {
            for (i = 0; i < 3; i++) {
                if (self->others[i] != self->current)
                    fn_823C2230(self, self->others[i]);
            }
        } else {
            fn_8236CE28(self, dt);
        }
    }
}
