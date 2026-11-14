typedef struct Obj_82862308 {
    char pad[0x54];
    char *base;
} Obj_82862308;

typedef struct Ref_82862308 {
    int f0;
    int f4;
    int offset;
} Ref_82862308;

extern void fn_82810360(void *out, char *src);

void fn_82862308(Obj_82862308 *self, Ref_82862308 *ref, void *out)
{
    fn_82810360(out, self->base + ref->offset);
}
