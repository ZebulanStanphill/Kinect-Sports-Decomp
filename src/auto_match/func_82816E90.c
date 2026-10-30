extern int fn_8281FEB0(void *p);

typedef struct {
    char pad[0x24];
    int count;
} Info_82816E90;

typedef struct {
    char pad[0x1c];
    Info_82816E90 *info;
    char pad2[0x74 - 0x20];
    void *x74;
} Obj_82816E90;

int fn_82816E90(Obj_82816E90 *o)
{
    if (fn_8281FEB0(o) != 0) {
        if (o->x74 != 0) {
            return o->info->count - 1;
        }
        return o->info->count;
    }
    return 0;
}
