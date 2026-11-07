typedef struct LockVt_82A51648 {
    void *pad0[2];
    void (*lock)(struct Lock_82A51648 *self);       /* 0x08 */
    void *pad1[2];
    void (*unlock)(struct Lock_82A51648 *self);     /* 0x14 */
} LockVt_82A51648;

typedef struct Lock_82A51648 {
    LockVt_82A51648 *vt;
} Lock_82A51648;

typedef struct SvcVt_82A51648 {
    void *pad0[18];
    int (*notify)(struct Svc_82A51648 *self, unsigned int key); /* 0x48 */
} SvcVt_82A51648;

typedef struct Svc_82A51648 {
    SvcVt_82A51648 *vt;
} Svc_82A51648;

typedef struct Owner_82A51648 {
    char pad0[0x2c];
    Lock_82A51648 lock;          /* 0x2c */
    char pad1[0xb0 - 0x30];
    Svc_82A51648 *svc;           /* 0xb0 */
} Owner_82A51648;

typedef struct Node_82A51648 {
    int data;
    struct Node_82A51648 *next;
} Node_82A51648;

typedef struct Obj_82A51648 {
    char pad0[0x30];
    Owner_82A51648 *owner;       /* 0x30 */
    char pad1[0x48 - 0x34];
    float value;                 /* 0x48 */
    char pad2[0x68 - 0x4c];
    Node_82A51648 *head;         /* 0x68 */
} Obj_82A51648;

extern void fn_82A51140(int item, Obj_82A51648 *obj, unsigned int key);

static __forceinline int nextItem_82A51648(Node_82A51648 **it)
{
    Node_82A51648 *n = *it;
    if (n != 0) {
        *it = n->next;
        return n->data;
    }
    return 0;
}

int fn_82A51648(Obj_82A51648 *obj, float value, unsigned int key)
{
    int result;
    unsigned int k;
    Node_82A51648 *it;
    Owner_82A51648 *owner;

    owner = obj->owner;
    owner->lock.vt->lock(&owner->lock);
    result = 0;
    if (value != obj->value) {
        obj->value = value;
        if (key == 0)
            k = 0x1337f001;
        else
            k = key;
        it = obj->head;
        while (it != 0) {
            fn_82A51140(nextItem_82A51648(&it), obj, k);
        }
        if (key == 0) {
            Svc_82A51648 *svc = obj->owner->svc;
            result = svc->vt->notify(svc, k);
        }
    }
    owner = obj->owner;
    owner->lock.vt->unlock(&owner->lock);
    return result;
}
