struct Obj_823C5598;
typedef struct ObjVtbl_823C5598 {
    void (*Destroy)(struct Obj_823C5598 *self, int flags);
} ObjVtbl_823C5598;
typedef struct Obj_823C5598 {
    ObjVtbl_823C5598 *vt;
} Obj_823C5598;

typedef struct Node_823C5598 {
    Obj_823C5598 *obj;
    struct Node_823C5598 *next;
} Node_823C5598;

typedef struct Cache_823C5598 {
    char pad0[0x24];
    Node_823C5598 *owned;
} Cache_823C5598;

typedef struct Slot_823C5598 {
    char pad0[0x18];
    Obj_823C5598 *obj;
} Slot_823C5598;

typedef struct Data_823C5598 {
    char pad0[0x20];
    Slot_823C5598 slot;
} Data_823C5598;

typedef struct Game_823C5598 {
    char pad0[0x81c];
    char sub81c[0x120];
    Cache_823C5598 *cache;
    char pad940[0x414];
    Data_823C5598 *data;
} Game_823C5598;

typedef struct Self_823C5598 {
    char pad0[0x2b4];
    void *sub;
    char pad2b8[0xa8];
    Obj_823C5598 *obj;
} Self_823C5598;

extern void *fn_8265C9E0(unsigned int size);
extern Obj_823C5598 *fn_824F5A20(void *mem, Cache_823C5598 *cache);
extern Node_823C5598 *fn_82522D98(unsigned int size);

static __forceinline Obj_823C5598 *GetObj_823C5598(Slot_823C5598 *slot, Game_823C5598 *game)
{
    if (slot->obj == 0) {
        Cache_823C5598 *cache = game->cache;
        void *mem = fn_8265C9E0(0x24);
        Obj_823C5598 *obj;
        slot->obj = mem != 0 ? fn_824F5A20(mem, cache) : 0;
        obj = slot->obj;
        if (obj != 0) {
            Node_823C5598 *node = fn_82522D98(sizeof(Node_823C5598));
            if (node != 0) {
                node->obj = obj;
                node->next = cache->owned;
                cache->owned = node;
            } else {
                obj->vt->Destroy(obj, 1);
            }
        }
    }
    return slot->obj;
}

void fn_823C5598(Self_823C5598 *self, Game_823C5598 *game)
{
    if (game != 0) {
        self->sub = game->sub81c;
        self->obj = GetObj_823C5598(&game->data->slot, game);
    } else {
        self->sub = 0;
        self->obj = 0;
    }
}
