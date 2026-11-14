typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Collidable_82DF5758 {
    void *shape;
    unsigned int shapeKey;
    void *motion;
    void *parent;
    signed char ownerOffset; /* 0x10 */
    char pad11[3];
    int broadPhaseId;        /* 0x14 */
    unsigned char type;      /* 0x18 */
} Collidable_82DF5758;

typedef struct Entity_82DF5758 {
    char pad0[0x10];
    Collidable_82DF5758 collidable; /* 0x10 */
} Entity_82DF5758;

typedef struct Chain_82DF5758 {
    char pad0[0xc];
    void *data;                 /* 0xc */
    char pad10[0x28];
    Entity_82DF5758 **entities; /* 0x38 */
    int count;                  /* 0x3c */
} Chain_82DF5758;

void fn_82CE5088(__vector4 *out, const void *transform, const __vector4 *p);
void fn_82D9AFC0(void *data, const __vector4 *a, const __vector4 *b);
void fn_82D9CDC0(Chain_82DF5758 *self, Entity_82DF5758 *entity);

static __forceinline char *GetOwner(Collidable_82DF5758 *c)
{
    if (c->type == 1)
        return (char *)c + c->ownerOffset;
    return 0;
}

void fn_82DF5758(Chain_82DF5758 *self, Entity_82DF5758 *entity, const __vector4 *pivot)
{
    void *data = self->data;
    char *a = GetOwner(&self->entities[self->count - 1]->collidable);
    char *b = GetOwner(&entity->collidable);
    __vector4 pivots[2];

    fn_82CE5088(&pivots[0], a + 0xf0, pivot);
    fn_82CE5088(&pivots[1], b + 0xf0, pivot);
    fn_82D9AFC0(data, &pivots[0], &pivots[1]);
    fn_82D9CDC0(self, entity);
}
