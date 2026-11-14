typedef struct Obj_8235D1D8 {
    char pad0[0x194];
    void *target;               /* 0x194 */
    char pad198[0x2b20 - 0x198];
    void *player;               /* 0x2b20 */
} Obj_8235D1D8;

extern void *fn_82417F58(void *player);
extern void fn_82412D20(void *target, void *player, void *item);

void fn_8235D1D8(Obj_8235D1D8 *self)
{
    void *player = self->player;

    if (player != 0 && fn_82417F58(player) != 0) {
        fn_82412D20(self->target, player, fn_82417F58(player));
    }
}
