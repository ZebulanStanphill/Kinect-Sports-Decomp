typedef struct Def_8272D0E8 {
    char pad0[0x50];
    unsigned short flags;
} Def_8272D0E8;
typedef struct Override_8272D0E8 {
    char pad0[0x68];
    unsigned short flags;
} Override_8272D0E8;
typedef struct Info_8272D0E8 {
    char pad0[0x114];
    int override;
} Info_8272D0E8;
typedef struct Obj_8272D0E8 {
    char pad0[0x9c];
    Def_8272D0E8 *def;
    Info_8272D0E8 *info;
    char padA4[0x24];
    unsigned short flags;
} Obj_8272D0E8;

static __forceinline unsigned char IsHidden(Obj_8272D0E8 *self)
{
    int o = self->info->override;
    if (o != 0)
        return ((Override_8272D0E8 *)o)->flags & 1;
    return (self->def->flags >> 3) & 1;
}
static __forceinline unsigned char IsLocked(Obj_8272D0E8 *self) { return (self->flags >> 11) & 1; }
static __forceinline unsigned char IsDisabled(Obj_8272D0E8 *self) { return (self->flags >> 2) & 1; }
unsigned char fn_8272D0E8(Obj_8272D0E8 *self)
{
    return !IsLocked(self) && !IsHidden(self) && !IsDisabled(self);
}
