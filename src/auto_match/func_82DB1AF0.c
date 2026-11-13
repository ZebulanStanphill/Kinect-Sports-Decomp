typedef struct Outer_82DB1630 Outer_82DB1630;

typedef struct Iface_82DB1AF0 {
    char pad0[0x54];
    unsigned char f54;
    unsigned char f55;
} Iface_82DB1AF0;

typedef struct Arg_82DB1AF0 {
    char pad0[0x10];
    char key[4];
} Arg_82DB1AF0;

extern void fn_82DB1630(Outer_82DB1630 *o, void *key);

void fn_82DB1AF0(Iface_82DB1AF0 *self, Arg_82DB1AF0 *a)
{
    self->f55 = 1;
    self->f54 = 0;
    fn_82DB1630((Outer_82DB1630 *)((char *)self - 0x14), a->key);
}
