typedef struct Inner_82308DF0 {
    char pad[0x114];
    void *anim;
} Inner_82308DF0;

typedef struct Obj_82308DF0 {
    char pad[0xc];
    Inner_82308DF0 *inner;
} Obj_82308DF0;

extern void fn_822C8C08(void *anim, const char *name);

void fn_82308DF0(Obj_82308DF0 *self)
{
    fn_822C8C08(self->inner->anim, "throwinidle");
}
