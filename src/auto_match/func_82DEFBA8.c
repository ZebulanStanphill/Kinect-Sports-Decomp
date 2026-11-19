typedef struct Collidable_82DEFBA8 {
    char pad0[0x10];
    signed char ownerOffset; /* 0x10 */
    char pad11[0x18 - 0x11];
    unsigned char type; /* 0x18: broad-phase handle type, 1 for an entity */
} Collidable_82DEFBA8;

typedef struct Entity_82DEFBA8 Entity_82DEFBA8;

typedef struct ConstraintDataVtbl_82DEFBA8 {
    void *slots[8];
    int (*getType)(void *self); /* 0x20 */
} ConstraintDataVtbl_82DEFBA8;

typedef struct ConstraintData_82DEFBA8 {
    ConstraintDataVtbl_82DEFBA8 *vtbl;
} ConstraintData_82DEFBA8;

typedef struct Constraint_82DEFBA8 {
    char pad0[0xc];
    ConstraintData_82DEFBA8 *data; /* 0xc */
    char pad10[0x14 - 0x10];
    Entity_82DEFBA8 *entities[2]; /* 0x14 */
} Constraint_82DEFBA8;

typedef struct PairFilterVtbl_82DEFBA8 PairFilterVtbl_82DEFBA8;

typedef struct PairFilter_82DEFBA8 {
    PairFilterVtbl_82DEFBA8 *vtbl;
} PairFilter_82DEFBA8;

struct PairFilterVtbl_82DEFBA8 {
    void *destructor;
    unsigned char *(*isCollisionEnabled)(unsigned char *result, PairFilter_82DEFBA8 *self,
                                         Collidable_82DEFBA8 *a, Collidable_82DEFBA8 *b); /* 0x4 */
};

typedef struct Filter_82DEFBA8 {
    char pad0[0x8];
    PairFilter_82DEFBA8 pairFilter; /* 0x8 */
} Filter_82DEFBA8;

/* The function is the filter's hkpCollidableCollidableFilter entry: self is that interface (+8). */
typedef struct Self_82DEFBA8 {
    char pad0[0x2c];
    Filter_82DEFBA8 *childFilter; /* 0x2c */
} Self_82DEFBA8;

extern int fn_82D89E30(Entity_82DEFBA8 *entity);
extern Constraint_82DEFBA8 *fn_82D89E78(Entity_82DEFBA8 *entity, int index);

static __forceinline Entity_82DEFBA8 *GetEntity(Collidable_82DEFBA8 *collidable)
{
    if (collidable->type == 1) {
        return (Entity_82DEFBA8 *)((char *)collidable + collidable->ownerOffset);
    }
    return 0;
}

/* Havok's constraint collision filter test: disabled when the child filter disables the pair, or
   when the two entities are linked by a constraint other than a contact constraint (type 11). The
   entity with fewer constraints is searched. */
unsigned char *fn_82DEFBA8(unsigned char *result, Self_82DEFBA8 *self, Collidable_82DEFBA8 *a,
                           Collidable_82DEFBA8 *b)
{
    Entity_82DEFBA8 *entityA = GetEntity(a);
    Entity_82DEFBA8 *entityB = GetEntity(b);
    Entity_82DEFBA8 *entity;
    Entity_82DEFBA8 *other;
    Constraint_82DEFBA8 *constraint;
    unsigned char enabled;
    char fewerOnB;
    int count;
    int i;

    if (self->childFilter != 0 && *self->childFilter->pairFilter.vtbl->isCollisionEnabled(
                                      &enabled, &self->childFilter->pairFilter, a, b) == 0) {
        *result = 0;
        return result;
    }
    if (entityA != 0 && entityB != 0) {
        fewerOnB = fn_82D89E30(entityB) < fn_82D89E30(entityA);
        entity = fewerOnB ? entityB : entityA;
        other = fewerOnB ? entityA : entityB;
        count = fn_82D89E30(entity);
        for (i = 0; i < count; i++) {
            constraint = fn_82D89E78(entity, i);
            if (constraint != 0 && constraint->data->vtbl->getType(constraint->data) != 11 &&
                (constraint->entities[0] == other || constraint->entities[1] == other)) {
                *result = 0;
                return result;
            }
        }
    }
    *result = 1;
    return result;
}
