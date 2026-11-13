typedef struct Info_82E75110 {
    char pad0[0x18];
    unsigned __int64 value;
} Info_82E75110;

typedef struct Obj_82E75110 {
    char pad0[0x78];
    Info_82E75110 *info;
} Obj_82E75110;

extern unsigned __int64 fn_82E74C08(Obj_82E75110 *o);

unsigned __int64 fn_82E75110(Obj_82E75110 *o)
{
    if (o->info != 0) {
        return o->info->value;
    }
    return fn_82E74C08(o);
}
