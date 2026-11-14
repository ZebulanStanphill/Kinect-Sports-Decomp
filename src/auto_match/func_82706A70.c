typedef struct Obj_82706A70 {
    char pad[0xb00];
    unsigned int flags;
} Obj_82706A70;

void fn_82706A70(Obj_82706A70 *self, unsigned char enable)
{
    if (enable)
        self->flags |= 0x40;
    else
        self->flags &= ~0x40;
}
