typedef struct Audio_82BF4878 {
    void *vt;                   /* 0x00 */
    char pad4[0x58];
    float value;               /* 0x5c */
} Audio_82BF4878;

typedef struct Owner_82BF4878 {
    char pad0[0x10];
    int state;                  /* 0x10 */
    const char *name;           /* 0x14 */
    void *ctx;                  /* 0x18 */
    char pad1c[0xc];
    float value;               /* 0x28 */
} Owner_82BF4878;

extern char lbl_820EB83C[];
extern void *fn_82BE56B0(unsigned int size);
extern void fn_82BEECD0(Audio_82BF4878 *self, const char *name, void *ctx, int kind, void *ie);
extern int fn_82BE5240();

static __forceinline Audio_82BF4878 *Audio_Construct(Audio_82BF4878 *m, const char *name, void *ctx,
                                                      void *ie, float value)
{
    fn_82BEECD0(m, name, ctx, 0x10, ie);
    m->value = value;
    m->vt = lbl_820EB83C;
    return m;
}

Audio_82BF4878 *fn_82BF4878(Owner_82BF4878 *self, void *ie)
{
    Audio_82BF4878 *mem = (Audio_82BF4878 *)fn_82BE56B0(0x60);
    Audio_82BF4878 *audio = mem ? Audio_Construct(mem, self->name, self->ctx, ie, self->value) : 0;

    if (audio == 0) {
        fn_82BE5240(self, 0x65, "Dynamic CMassiveAdObjectAudio creation failed for IE: \"%s\"", self->name);
        self->state = 0;
        return 0;
    }
    return audio;
}
