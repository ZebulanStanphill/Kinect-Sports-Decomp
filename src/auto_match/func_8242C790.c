typedef struct Vec_8242C790 {
    int *begin;
    int *end;
    int *cap;
} Vec_8242C790;
typedef struct Data_8242C790 {
    char pad0[0x1c4];
    Vec_8242C790 items;
} Data_8242C790;
typedef struct Mgr_8242C790 {
    char pad0[0x5c];
    Data_8242C790 *data;
} Mgr_8242C790;
typedef struct Obj_8242C790 {
    char pad0[0x174];
    Mgr_8242C790 *mgr;
} Obj_8242C790;
static __forceinline unsigned int Size(Vec_8242C790 *v) { return v->end - v->begin; }
int fn_8242C790(Obj_8242C790 *self)
{
    int total = 0;
    unsigned int i;
    for (i = 0; i < Size(&self->mgr->data->items); i++) {
        total += 100000;
    }
    return total;
}
