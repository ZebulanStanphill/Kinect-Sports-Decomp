typedef struct {
    char pad[0x68];
    unsigned short pad68 : 14;
    unsigned short active : 1;
    unsigned short pad68b : 1;
} Node_8272CAD8;

typedef struct {
    char pad[0x114];
    int node;
} Info_8272CAD8;

typedef struct {
    char pad[0x50];
    unsigned short pad50 : 10;
    unsigned short active : 1;
    unsigned short pad50b : 5;
} Def_8272CAD8;

typedef struct {
    char pad[0x9c];
    Def_8272CAD8 *def;
    Info_8272CAD8 *info;
    char pada4[0xc8 - 0xa4];
    unsigned short flags;
} Obj_8272CAD8;

static __forceinline unsigned char IsActive(Obj_8272CAD8 *self)
{
    if (self->info->node != 0) {
        return ((Node_8272CAD8 *)self->info->node)->active;
    }
    return self->def->active;
}

static __forceinline unsigned char IsLocked(Obj_8272CAD8 *self)
{
    return (self->flags >> 5) & 1;
}

unsigned char fn_8272CAD8(Obj_8272CAD8 *self)
{
    if (IsLocked(self)) {
        return 1;
    }
    return IsActive(self) ? 2 : 0;
}
