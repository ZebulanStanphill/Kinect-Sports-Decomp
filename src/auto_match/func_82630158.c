typedef struct Obj_82630158 { char pad[0x18]; unsigned int bits; } Obj_82630158;
extern void fn_8262FBD8(Obj_82630158 *self, unsigned int p, int flag);

void fn_82630158(Obj_82630158 *self)
{
    fn_8262FBD8(self, self->bits & ~3u, 0);
}
