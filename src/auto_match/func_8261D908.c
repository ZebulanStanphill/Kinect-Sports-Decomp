typedef struct VideoMode_8261D908 {
    int pal;     /* 0x0 */
    int force60; /* 0x4 */
} VideoMode_8261D908;

typedef struct Owner_8261D908 {
    char reserved00[0xb3c];
    float elapsed; /* 0xb3c */
} Owner_8261D908;

typedef struct ObjectDesc_8261D908 {
    char reserved00[0x4b];
    unsigned char name[0x595]; /* 0x4b */
} ObjectDesc_8261D908;

extern VideoMode_8261D908 lbl_8326F968;
extern void fn_825D9FB0(ObjectDesc_8261D908 *desc, Owner_8261D908 *owner, float scale);
extern unsigned int fn_82587AC0(const unsigned char *key);
extern void *fn_82529A38(unsigned int key, ObjectDesc_8261D908 *desc, void *parent);

static __forceinline int Is50Hz(void)
{
    return lbl_8326F968.pal != 0 && lbl_8326F968.force60 == 0;
}

static __forceinline unsigned int Spawn(Owner_8261D908 *owner, float scale)
{
    ObjectDesc_8261D908 desc;

    unsigned int key;

    if (scale <= 0.0f)
        return 0;
    fn_825D9FB0(&desc, owner, scale);
    key = fn_82587AC0(desc.name);
    return fn_82529A38(key, &desc, 0) != 0;
}

int fn_8261D908(Owner_8261D908 *owner, float scale, float *timer)
{
    float step = 1.0f / (float)((Is50Hz() ? 50 : 60) / 2);
    unsigned int spawned = 0;

    *timer += owner->elapsed;
    while (*timer - step > 0.0f) {
        *timer -= step;
        if (!spawned)
            spawned = Spawn(owner, scale);
    }
    return spawned != 0;
}
