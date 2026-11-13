typedef struct Outer_82DB12E8 Outer_82DB12E8;

typedef struct Iface_82DB12E8 {
    char pad0[4];
    unsigned char enabled;
    char pad5[0x48 - 5];
    unsigned char f48;
    unsigned char f49;
} Iface_82DB12E8;

typedef struct Arg_82DB12E8 {
    char pad0[0x10];
    char key[4];
} Arg_82DB12E8;

extern void fn_82DB1098(Outer_82DB12E8 *o, void *key);

void fn_82DB12E8(Iface_82DB12E8 *self, Arg_82DB12E8 *a)
{
    if (self->enabled != 0) {
        self->f49 = 1;
        self->f48 = 0;
        fn_82DB1098((Outer_82DB12E8 *)((char *)self - 0x20), a->key);
    }
}
