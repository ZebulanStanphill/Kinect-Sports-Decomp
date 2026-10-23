typedef struct Target {
    char pad0[0x24];
    int active;
} Target;

typedef struct Self {
    char pad0[0xc];
    Target *target;
    void *owner;
} Self;

extern void fn_822E5640(Target *t);
extern void fn_822E5710(Target *t);
extern void fn_822E57D8(Target *t);
extern void fn_822F25B0(void);
extern int fn_82397F88(void *owner);

void fn_822F3258(Self *self)
{
    fn_822F25B0();
    if (self->target->active == 0 || fn_82397F88(self->owner) != 0) {
        fn_822E5640(self->target);
    }
    if (self->target->active == 0) {
        fn_822E57D8(self->target);
    } else if (fn_82397F88(self->owner) != 0) {
        fn_822E5710(self->target);
    }
}
