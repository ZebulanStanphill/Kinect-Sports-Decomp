typedef struct Info_82E75140 {
    char pad0[0x18];
    unsigned __int64 value;
} Info_82E75140;

typedef struct Obj_82E75140 {
    char pad0[0x74];
    Info_82E75140 *info;
} Obj_82E75140;

extern unsigned __int64 fn_82E74C08(Obj_82E75140 *o);

unsigned __int64 fn_82E75140(Obj_82E75140 *o)
{
    if (o->info != 0) {
        return o->info->value;
    }
    return fn_82E74C08(o);
}
