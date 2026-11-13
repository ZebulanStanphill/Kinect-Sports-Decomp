/* Per-state update dispatch on the state at +0x1c (state 3 and unknown states do nothing). */
typedef struct Self_8284D400 {
    char pad0[0x1c];
    unsigned int state;             /* 0x1c */
} Self_8284D400;

extern void fn_8284C8A8(Self_8284D400 *self);
extern void fn_8284CB20(Self_8284D400 *self);
extern void fn_8284CE28(Self_8284D400 *self);
extern void fn_8284D120(Self_8284D400 *self);

void fn_8284D400(Self_8284D400 *self)
{
    switch (self->state) {
    case 0:
        fn_8284C8A8(self);
        return;
    case 2:
        fn_8284CB20(self);
        return;
    case 3:
        return;
    case 4:
        fn_8284CE28(self);
        return;
    case 5:
        fn_8284D120(self);
        return;
    }
}
