typedef struct ResourceName_826192B0 {
    unsigned int hash;
    unsigned int type;
} ResourceName_826192B0;

typedef struct Effect_826192B0 {
    void *vtable; /* 0x0 */
    void *owner;  /* 0x4 */
    char pad8[0xfb4 - 0x8];
    int mfb4;          /* 0xfb4 */
    int mfb8;          /* 0xfb8 */
    int mfbc;          /* 0xfbc */
    int mfc0;          /* 0xfc0 */
    int padfc4;        /* 0xfc4 */
    int enabled;       /* 0xfc8 */
    float mfcc;        /* 0xfcc */
    int mfd0;          /* 0xfd0 */
    void *gunTexture;  /* 0xfd4 */
    void *boltTexture; /* 0xfd8 */
} Effect_826192B0;

extern char lbl_821CAD0C[];
extern int fn_82520158(const char *name, ResourceName_826192B0 *out, int flags);
extern void *fn_8251F720(ResourceName_826192B0 *name, int flags);

Effect_826192B0 *fn_826192B0(Effect_826192B0 *self, void *owner, int enabled)
{
    ResourceName_826192B0 name;

    self->owner = owner;
    self->enabled = enabled;
    self->mfb4 = 0;
    self->mfcc = 0.0f;
    self->vtable = lbl_821CAD0C;
    self->mfb8 = 0;
    self->mfbc = 0;
    self->mfc0 = 0;
    self->mfd0 = -1;
    if (enabled != 0) {
        if (fn_82520158("gravityGunTexture", &name, 0) != 0) {
            self->gunTexture = fn_8251F720(&name, 0);
        } else {
            self->gunTexture = 0;
        }
        if (fn_82520158("electricbolt", &name, 0) != 0) {
            self->boltTexture = fn_8251F720(&name, 0);
        } else {
            self->boltTexture = 0;
        }
    } else {
        self->gunTexture = 0;
        self->boltTexture = 0;
    }
    return self;
}
