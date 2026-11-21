typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);

typedef struct Object_830158F8 Object_830158F8;

typedef struct ObjectVtbl_830158F8 {
    void *slot0;
    void *slot4;
    void *slot8;
    int (*Init)(Object_830158F8 *self, void *pool, int arg1, int arg2); /* 0x0c */
    void (*Term)(Object_830158F8 *self, void *pool);                    /* 0x10 */
} ObjectVtbl_830158F8;

struct Object_830158F8 {
    ObjectVtbl_830158F8 *vt;
};

typedef struct Volumes_830158F8 {
    float frontLeft;  /* 0x00 */
    float frontRight; /* 0x04 */
    float center;     /* 0x08 */
    float lfe;        /* 0x0c */
    float rearLeft;   /* 0x10 */
    float rearRight;  /* 0x14 */
} Volumes_830158F8;

typedef struct SimdVolumes_830158F8 {
    __vector4 vector[2];
} SimdVolumes_830158F8;

typedef struct Entry_830158F8 {
    unsigned int id;          /* 0x00 */
    Object_830158F8 *object;  /* 0x04 */
    Volumes_830158F8 volumes; /* 0x08 */
    unsigned char pending;    /* 0x20 */
    unsigned char persistent; /* 0x21 */
} Entry_830158F8;

typedef struct Node_830158F8 {
    struct Node_830158F8 *next; /* 0x00 */
    unsigned int key;           /* 0x04 */
    Entry_830158F8 value;       /* 0x08 */
} Node_830158F8;

typedef struct Table_830158F8 {
    int unk0;
    Node_830158F8 *buckets[31];
} Table_830158F8;

typedef struct Iter_830158F8 {
    Node_830158F8 **buckets;
    unsigned int index;
    Node_830158F8 *node;
    Node_830158F8 *prev;
} Iter_830158F8;

typedef struct Manager_830158F8 {
    int unk0;
    Table_830158F8 table; /* 0x04 */
} Manager_830158F8;

extern char lbl_831BC7F4[];
extern void fn_83014FE0(Iter_830158F8 *it, Table_830158F8 *table, unsigned int key);
extern Iter_830158F8 *fn_83015CF8(Iter_830158F8 *out, Table_830158F8 *table, Iter_830158F8 *it);
extern Entry_830158F8 *fn_83015C88(Table_830158F8 *table, unsigned int key);
extern int fn_83013880(const void *pool, unsigned int id, Object_830158F8 **out);
extern int fn_830154F0(Manager_830158F8 *self, unsigned int key);

static __forceinline void SetVolumes(SimdVolumes_830158F8 *volumes, float value)
{
    __vector4 *first = &volumes->vector[0];
    __vector4 *second = &volumes->vector[1];

    *first = *second = __vspltw(__lvlx(&value, 0), 0);
}

int fn_830158F8(Manager_830158F8 *self, unsigned int key, unsigned int id, int arg1, int arg2,
                unsigned char persistent)
{
    Iter_830158F8 it;
    Entry_830158F8 *entry;
    SimdVolumes_830158F8 volumes;
    Object_830158F8 *object;
    int result;

    fn_83014FE0(&it, &self->table, key);
    if (it.node != 0) {
        if (persistent && !it.node->value.persistent) {
            return 1;
        }
        object = it.node->value.object;
        if (object != 0) {
            object->vt->Term(object, lbl_831BC7F4);
        }
        {
            Iter_830158F8 next;

            fn_83015CF8(&next, &self->table, &it);
        }
    }
    entry = fn_83015C88(&self->table, key);
    if (entry == 0) {
        return 2;
    }
    entry->id = id;
    entry->persistent = persistent;
    entry->pending = 0;
    SetVolumes(&volumes, 1.0f);
    entry->volumes = *(Volumes_830158F8 *)&volumes;
    if (fn_83013880(lbl_831BC7F4, id, &entry->object) == 1 && entry->object != 0) {
        result = entry->object->vt->Init(entry->object, lbl_831BC7F4, arg1, arg2);
        if (result != 1) {
            entry->object->vt->Term(entry->object, lbl_831BC7F4);
            fn_830154F0(self, key);
        }
        return result;
    }
    fn_830154F0(self, key);
    return 1;
}
