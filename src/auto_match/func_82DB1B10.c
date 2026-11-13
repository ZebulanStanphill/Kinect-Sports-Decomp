typedef struct Outer_82DB1630 Outer_82DB1630;

typedef struct Iface_82DB1B10 {
    char pad0[0x50];
    unsigned char f50;
    unsigned char f51;
} Iface_82DB1B10;

typedef struct Arg_82DB1B10 {
    char pad0[0x10];
    char key[4];
} Arg_82DB1B10;

extern void fn_82DB1630(Outer_82DB1630 *o, void *key);

void fn_82DB1B10(Iface_82DB1B10 *self, Arg_82DB1B10 *a)
{
    self->f51 = 1;
    self->f50 = 0;
    fn_82DB1630((Outer_82DB1630 *)((char *)self - 0x18), a->key);
}
