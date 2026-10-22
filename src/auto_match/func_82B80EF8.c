typedef struct {
    char pad[0x28];
    unsigned int pad0 : 17;
    unsigned int flag : 1;
    unsigned int pad1 : 14;
} Info;

typedef struct {
    char pad[0x94];
    Info *info;
} Owner;

typedef struct {
    Owner *owner;
} PageHeader;

typedef struct {
    char pad[0x14];
    unsigned int pad0 : 22;
    unsigned int types : 8;
    unsigned int pad1 : 2;
} Obj;

extern double fn_82B167E0(Obj *o, unsigned int idx);
extern void fn_82B80CD0(double v, unsigned int type, int x);

static unsigned int GetType(Obj *o, unsigned int idx)
{
    if (!(unsigned char)!((PageHeader *)((unsigned int)o & 0xfffff000))->owner->info->flag) {
        return 0;
    }
    return (o->types >> (idx * 2)) & 3;
}
void fn_82B80EF8(Obj *o, unsigned int idx, int x)
{
    unsigned int type = GetType(o, idx);
    double v = fn_82B167E0(o, idx);
    fn_82B80CD0(v, type, x);
}
