typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Owner_825D9FB0 {
    char pad00[0x4c];
    int id; /* 0x4c */
    char pad50[0x50];
    __vector4 position; /* 0xa0 */
    char padb0[0x80c];
    float radius; /* 0x8bc */
} Owner_825D9FB0;

typedef struct ObjectDesc_825D9FB0 {
    unsigned short size; /* 0x00 */
    char pad02[0x40];
    char name[0x40]; /* 0x42 */
    char pad82[0x2];
    int ownerId; /* 0x84 */
    char pad88[0x2c];
    float radius; /* 0xb4 */
    char padb8[0x508];
    __vector4 position;    /* 0x5c0 */
    Owner_825D9FB0 *owner; /* 0x5d0 */
    float scale;           /* 0x5d4 */
    unsigned char alpha;   /* 0x5d8 */
    char pad5d9[0x3];
    int flags; /* 0x5dc */
} ObjectDesc_825D9FB0;

extern void fn_82529508(ObjectDesc_825D9FB0 *desc);
extern void fn_82558210(ObjectDesc_825D9FB0 *desc, int kind);
extern const char **fn_82587B68(int id);
extern int fn_82526C70(char *buf, int size, const char *fmt, ...);

void fn_825D9FB0(ObjectDesc_825D9FB0 *desc, Owner_825D9FB0 *owner, float scale)
{
    fn_82529508(desc);
    desc->size = 0x5e0;
    fn_82558210(desc, 7);
    fn_82526C70(desc->name, 0x40, "objDefId_%s", *fn_82587B68(10));
    desc->radius = owner->radius;
    desc->ownerId = owner->id;
    desc->scale = scale;
    desc->owner = owner;
    desc->alpha = 0x80;
    desc->flags = 0;
    desc->position = owner->position;
}
