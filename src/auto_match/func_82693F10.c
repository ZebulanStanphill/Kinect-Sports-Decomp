typedef struct Self_82693F10 {
    char pad0[0x1c];
    void *ref;
    char name[4];
} Self_82693F10;

extern void fn_8267C4C8(void *p);
extern void fn_8267C4F0(void *p);
extern void fn_8268B8E8(void *dst, const char *s);
extern char lbl_82196582[];

void fn_82693F10(Self_82693F10 *self, void *ref, const char *name)
{
    if (ref != 0) {
        fn_8267C4C8(ref);
    }
    if (self->ref != 0) {
        fn_8267C4F0(self->ref);
    }
    self->ref = ref;
    fn_8268B8E8(self->name, name != 0 ? name : lbl_82196582);
}
