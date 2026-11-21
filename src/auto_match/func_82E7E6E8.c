typedef struct Owner_82E7E6E8 {
    char pad0[0xc];
    unsigned short id; /* 0xc */
    char padE[2];
    char *target; /* 0x10 */
} Owner_82E7E6E8;

extern int fn_82E7BD90(void *target, unsigned short id, void *arg);

int fn_82E7E6E8(Owner_82E7E6E8 *self, void *arg)
{
    if (self->target == 0) {
        return 0x80004003;
    }
    return fn_82E7BD90(self->target + 0x10, self->id, arg);
}
