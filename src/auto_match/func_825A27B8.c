typedef struct Inner_825A27B8 { char pad[0x14]; void *value; } Inner_825A27B8;
typedef struct Item_825A27B8 { char pad[0x10]; Inner_825A27B8 *inner; } Item_825A27B8;
typedef struct Src_825A27B8 Src_825A27B8;
typedef struct SrcVT_825A27B8 {
    void *pad[7];
    Item_825A27B8 *(*get)(Src_825A27B8 *);
} SrcVT_825A27B8;
struct Src_825A27B8 { SrcVT_825A27B8 *vt; };
typedef struct Obj_825A27B8 { char pad[0x8c0]; Src_825A27B8 *src; } Obj_825A27B8;

void *fn_825A27B8(Obj_825A27B8 *o)
{
    Src_825A27B8 *src = o->src;
    Item_825A27B8 *item = src ? src->vt->get(src) : 0;
    return item ? item->inner->value : 0;
}
