typedef struct Node_829613A8 {
    char pad[0x6c];
    int kind;
} Node_829613A8;

typedef struct Obj_829613A8 Obj_829613A8;
typedef struct ObjVtbl_829613A8 {
    void *slots[28];
    unsigned int (*classify)(Obj_829613A8 *self, int kind);
} ObjVtbl_829613A8;

struct Obj_829613A8 {
    ObjVtbl_829613A8 *vtbl;
    int pad4[4];
    Node_829613A8 **nodes;
};

extern int fn_82954678(Obj_829613A8 *o, int *idx, int a, int b, int *out);

int fn_829613A8(Obj_829613A8 *o, int *idx, int a, int b, int *out)
{
    if (o->vtbl->classify(o, o->nodes[*idx]->kind) == 0x11) {
        *out = 0xe40000;
        return 0;
    }
    return fn_82954678(o, idx, a, b, out);
}
