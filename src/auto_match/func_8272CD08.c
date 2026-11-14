typedef struct Node_8272CD08 {
    char pad0[0x68];
    unsigned short pad68 : 14;
    unsigned short enabled : 1;
    unsigned short present : 1;
} Node_8272CD08;

typedef struct Info_8272CD08 {
    char pad0[0x114];
    int node;
} Info_8272CD08;

typedef struct Def_8272CD08 {
    char pad0[0x50];
    unsigned short pad50 : 10;
    unsigned short enabled : 1;
    unsigned short pad50b : 1;
    unsigned short present : 1;
    unsigned short pad50c : 3;
} Def_8272CD08;

typedef struct Obj_8272CD08 {
    char pad0[0x9c];
    Def_8272CD08 *def;
    Info_8272CD08 *info;
} Obj_8272CD08;

extern int fn_8268F7C0(Node_8272CD08 *node);

static __forceinline unsigned char IsPresent(Obj_8272CD08 *self, int node)
{
    if (node != 0)
        return ((Node_8272CD08 *)node)->present;
    return self->def->present;
}

static __forceinline unsigned char IsEnabled(Obj_8272CD08 *self, int node)
{
    if (node != 0)
        return ((Node_8272CD08 *)node)->enabled;
    return self->def->enabled;
}

int fn_8272CD08(Obj_8272CD08 *self)
{
    int node = self->info->node;
    if (IsPresent(self, node)) {
        if (!IsEnabled(self, node))
            return -1;
    }
    if (node != 0)
        return fn_8268F7C0((Node_8272CD08 *)node);
    return -1;
}
