typedef struct Var_829641F8 {
    int f0;
    unsigned int flags;
} Var_829641F8;

typedef struct Shader_829641F8 {
    char pad0[0x10];
    Var_829641F8 **vars;
} Shader_829641F8;

typedef struct Ref_829641F8 {
    int f0;
    int index;
} Ref_829641F8;

const char *fn_829641F8(Shader_829641F8 *self, Ref_829641F8 *ref)
{
    const char *name = "input";
    if (self->vars[ref->index]->flags & 0x20)
        name = "output";
    return name;
}
