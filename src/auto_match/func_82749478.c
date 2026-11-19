typedef struct Object_82749478 Object_82749478;

typedef struct ObjectVtbl_82749478 {
    void *slots[2];
    int (*GetType)(Object_82749478 *self); /* 0x08 */
} ObjectVtbl_82749478;

struct Object_82749478 {
    ObjectVtbl_82749478 *vt;
};

typedef struct Channel_82749478 {
    float multiply; /* 0x00 */
    float add;      /* 0x04 */
} Channel_82749478;

typedef struct Transform_82749478 {
    char pad00[8];
    unsigned int refCount; /* 0x08 */
    char pad0c[4];
    Object_82749478 base; /* 0x10 */
    char pad14[0x30 - 0x14];
    Channel_82749478 channels[4]; /* 0x30 */
} Transform_82749478;

typedef struct Args_82749478 {
    int pad00;
    int result;              /* 0x04 */
    Object_82749478 *target; /* 0x08 */
    int pad0c[3];
    int env;   /* 0x18 */
    int count; /* 0x1c */
} Args_82749478;

extern void fn_826824B0(void *object);
extern int fn_826957D0(Args_82749478 *args, int index);
extern double fn_826972E0(int value, int env);
extern void fn_82696BC8(int result, void *object);

void fn_82749478(Args_82749478 *args)
{
    Transform_82749478 *transform;

    if (args->target == 0 || args->target->vt->GetType(args->target) != 0x12) {
        return;
    }
    transform = args->target != 0 ? (Transform_82749478 *)((char *)args->target - 0x10) : 0;
    if (transform != 0) {
        transform->refCount = (transform->refCount + 1) & 0x8fffffff;
    }
    fn_82696BC8(args->result, transform);
    if (args->count > 7) {
        transform->channels[0].multiply = (float)fn_826972E0(fn_826957D0(args, 0), args->env);
        transform->channels[1].multiply = (float)fn_826972E0(fn_826957D0(args, 1), args->env);
        transform->channels[2].multiply = (float)fn_826972E0(fn_826957D0(args, 2), args->env);
        transform->channels[3].multiply = (float)fn_826972E0(fn_826957D0(args, 3), args->env);
        transform->channels[0].add = (float)fn_826972E0(fn_826957D0(args, 4), args->env);
        transform->channels[1].add = (float)fn_826972E0(fn_826957D0(args, 5), args->env);
        transform->channels[2].add = (float)fn_826972E0(fn_826957D0(args, 6), args->env);
        transform->channels[3].add = (float)fn_826972E0(fn_826957D0(args, 7), args->env);
    }
    if (transform != 0) {
        fn_826824B0(transform);
    }
}
