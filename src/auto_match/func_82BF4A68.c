typedef struct Model_82BF4A68 {
    void *vt;                   /* 0x00 */
    char pad4[0x58];
    unsigned short id;          /* 0x5c */
    char pad5e[2];
} Model_82BF4A68;

typedef struct Owner_82BF4A68 {
    char pad0[0x10];
    int state;                  /* 0x10 */
    const char *name;           /* 0x14 */
    void *ctx;                  /* 0x18 */
    char pad1c[0xc];
    unsigned short id;          /* 0x28 */
} Owner_82BF4A68;

extern char lbl_820EB884[];
extern void *fn_82BE56B0(unsigned int size);
extern void fn_82BEECD0(Model_82BF4A68 *self, const char *name, void *ctx, int kind, void *ie);
extern int fn_82BE5240();

static __forceinline Model_82BF4A68 *Model_Construct(Model_82BF4A68 *m, const char *name, void *ctx,
                                                      void *ie, unsigned short id)
{
    fn_82BEECD0(m, name, ctx, 0x10, ie);
    m->id = id;
    m->vt = lbl_820EB884;
    return m;
}

Model_82BF4A68 *fn_82BF4A68(Owner_82BF4A68 *self, void *ie)
{
    Model_82BF4A68 *mem = (Model_82BF4A68 *)fn_82BE56B0(0x60);
    Model_82BF4A68 *model = mem ? Model_Construct(mem, self->name, self->ctx, ie, self->id) : 0;

    if (model == 0) {
        fn_82BE5240(self, 0x65, "Dynamic CMassiveAdObjectModel creation failed for IE: \"%s\"", self->name);
        self->state = 0;
        return 0;
    }
    return model;
}
