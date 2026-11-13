// Spawns the effect of a trigger: creates the effect object from the trigger's handle (at the
// item's position when the item has one, else at the owner's position), releases the reference,
// or forwards the handle to fn_82563230 when the trigger is not active; then looks up the trigger's
// key in the owner's table, marks the found entry (flag 8) and returns its id through *out.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Float3_825C32D0 {
    float x, y, z;
} Float3_825C32D0;

typedef struct Item_825C32D0 {
    unsigned int flags;          /* 0x00 */
} Item_825C32D0;

typedef struct Entry_825C32D0 {
    char pad0[0x20];
    unsigned int flags;          /* 0x20 */
} Entry_825C32D0;

typedef struct Bucket_825C32D0 {
    int pad0;
    Entry_825C32D0 **entries;    /* 0x04 */
} Bucket_825C32D0;

typedef struct Context_825C32D0 {
    char pad0[0x7fc];
    Bucket_825C32D0 *buckets[20]; /* 0x7fc */
    int factory;                 /* 0x84c */
} Context_825C32D0;

typedef struct Owner_825C32D0 {
    char pad0[0x4c];
    Context_825C32D0 *ctx;       /* 0x4c */
    __vector4 position;          /* 0x50 */
} Owner_825C32D0;

typedef struct Trigger_825C32D0 {
    char pad0[0x48];
    int handle;                  /* 0x48 */
    int target;                  /* 0x4c */
    int active;                  /* 0x50 */
    unsigned int key;            /* 0x54 */
} Trigger_825C32D0;

extern char lbl_83296BC0[];
extern char lbl_83296BD0[];

const Float3_825C32D0 *fn_825934E8(const Item_825C32D0 *item);
int fn_82535298(int *handle, int factory, void *a, void *b);
int fn_825354B8(int *handle, const __vector4 *position, int c, int factory, void *a, void *b);
void fn_82536288(int *ref);
void fn_82563230(Owner_825C32D0 *owner, int target, int *handle, int d, int e);
Item_825C32D0 *fn_82612600(Owner_825C32D0 *owner);
int fn_82599B18(Bucket_825C32D0 **table, unsigned int *key, Item_825C32D0 *item);

static __forceinline __vector4 LoadFloat3(const Float3_825C32D0 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 12);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

static __forceinline int IsSet(const int *h)
{
    return h != 0 ? *h != 0 : 0;
}

static __forceinline void Forward(Owner_825C32D0 *owner, int target, int *handle)
{
    if (IsSet(handle)) {
        fn_82563230(owner, target, handle, 0, 0);
    }
}

void fn_825C32D0(Trigger_825C32D0 *self, Item_825C32D0 *item, Owner_825C32D0 *owner, int *out)
{
    int ref;
    int id;
    Item_825C32D0 *source;
    Bucket_825C32D0 **table;

    if (self->active != 0) {
        if (self->target == 0) {
            ref = self->handle;
            ref = fn_82535298(&ref, owner->ctx->factory, lbl_83296BC0, lbl_83296BD0);
        } else {
            __vector4 position;
            if (item != 0 && (item->flags & 1)) {
                __vector4 v, zero, mask;
                v = LoadFloat3(fn_825934E8(item));
                mask = __VMXGetReg(67);
                zero = __VMXGetReg(77);
                position = __vsel(v, zero, mask);
            } else {
                position = owner->position;
            }
            ref = self->handle;
            ref = fn_825354B8(&ref, &position, 0, owner->ctx->factory, lbl_83296BC0, lbl_83296BD0);
        }
        fn_82536288(&ref);
    } else {
        Forward(owner, self->target, &self->handle);
    }
    if (self->key == 0) {
        id = -1;
    } else {
        table = owner->ctx->buckets;
        source = item;
        if (item == 0) {
            source = fn_82612600(owner);
        }
        id = fn_82599B18(table, &self->key, source);
        if (id != -1) {
            table[(id >> 8) & 0xff]->entries[id & 0xff]->flags |= 8;
        }
    }
    if (out != 0) {
        *out = id;
    }
}
