typedef struct Obj_82677DD0 {
    char pad0[0x28];
    void *items[19];
    void *extras[19];
    void *others[5];
    int padD4;
    void *player;
} Obj_82677DD0;

extern void fn_82631920(void *player, int arg);
extern void fn_82631578(void *player, int arg);
extern void fn_82631AF0(void *player, int arg);
extern void fn_8262FEC8(void *p);

static __forceinline void Release_82677DD0(void **slot)
{
    if (*slot != 0) {
        fn_8262FEC8(*slot);
    }
    *slot = 0;
}

void fn_82677DD0(Obj_82677DD0 *self)
{
    int i;

    if (self->player != 0) {
        fn_82631920(self->player, 0);
        fn_82631578(self->player, 0);
        fn_82631AF0(self->player, 0);
    }
    for (i = 0; i < 19; i++) {
        if ((int)self->items[i] != 0) {
            Release_82677DD0(&self->items[i]);
            Release_82677DD0(&self->extras[i]);
        }
    }
    for (i = 0; i < 5; i++) {
        if ((int)self->others[i] != 0) {
            Release_82677DD0(&self->others[i]);
        }
    }
}
