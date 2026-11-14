typedef struct Range_8272CE00 {
    char pad0[0x1c];
    unsigned int a;
    unsigned int b;
} Range_8272CE00;

typedef struct Node_8272CE00 {
    char pad0[0x8];
    Range_8272CE00 *range;
    char pad0c[0x5c];
    unsigned short pad68 : 14;
    unsigned short enabled : 1;
    unsigned short present : 1;
} Node_8272CE00;

typedef struct Info_8272CE00 {
    char pad0[0x114];
    int node;
} Info_8272CE00;

typedef struct Def_8272CE00 {
    char pad0[0x50];
    unsigned short pad50 : 10;
    unsigned short enabled : 1;
    unsigned short pad50b : 1;
    unsigned short present : 1;
    unsigned short pad50c : 3;
} Def_8272CE00;

typedef struct Obj_8272CE00 {
    char pad0[0x9c];
    Def_8272CE00 *def;
    Info_8272CE00 *info;
} Obj_8272CE00;

static __forceinline unsigned char IsPresent(Obj_8272CE00 *self, int node)
{
    if (node != 0)
        return ((Node_8272CE00 *)node)->present;
    return self->def->present;
}

static __forceinline unsigned char IsEnabled(Obj_8272CE00 *self, int node)
{
    if (node != 0)
        return ((Node_8272CE00 *)node)->enabled;
    return self->def->enabled;
}

unsigned int fn_8272CE00(Obj_8272CE00 *self)
{
    int node = self->info->node;
    if (IsPresent(self, node)) {
        if (!IsEnabled(self, node))
            return 0;
    }
    if (node != 0) {
        Range_8272CE00 *r = ((Node_8272CE00 *)node)->range;
        return r->b < r->a ? r->a : r->b;
    }
    return 0;
}
