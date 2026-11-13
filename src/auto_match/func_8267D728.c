typedef struct Obj_8267D728 {
    char pad[0x18];
    unsigned int flags;     /* 0x18 */
} Obj_8267D728;

void fn_8267D5B0(unsigned int *flags, unsigned int mask);
void fn_8267D560(unsigned int *flags, unsigned int mask);

void fn_8267D728(Obj_8267D728 *self, unsigned char enable)
{
    if (enable) {
        fn_8267D5B0(&self->flags, 0x10);
    } else {
        fn_8267D560(&self->flags, ~0x10);
    }
}
