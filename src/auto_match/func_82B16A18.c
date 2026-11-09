typedef struct {
    char pad[0x28];
    unsigned int pad0 : 17;
    unsigned int flag : 1;
    unsigned int pad1 : 14;
} Info_82B16A18;

typedef struct {
    char pad[0x94];
    Info_82B16A18 *info;
} Owner_82B16A18;

typedef struct {
    Owner_82B16A18 *owner;
} PageHeader_82B16A18;

typedef struct {
    char pad[0x14];
    unsigned int pad0 : 22;
    unsigned int types : 8;
    unsigned int pad1 : 2;
} Obj_82B16A18;

extern double fn_82B167E0(Obj_82B16A18 *o, unsigned int idx);
extern void fn_82B80CD0(double v, unsigned int type, int x);

static __forceinline unsigned int GetType(Obj_82B16A18 *o, unsigned int idx)
{
    if (!(unsigned char)!((PageHeader_82B16A18 *)((unsigned int)o & 0xfffff000))->owner->info->flag) {
        return 0;
    }
    return (o->types >> (idx * 2)) & 3;
}
typedef struct Value_82B16A18 { unsigned int bits; int pad[2]; Obj_82B16A18 *object; } Value_82B16A18;
void fn_82B16A18(Value_82B16A18 *p, unsigned int idx)
{
 unsigned int bits = p->bits;
 Obj_82B16A18 *o = p->object;
 unsigned int subindex = ((bits >> 5 & 0xff) >> (idx * 2)) & 3;
 int x = bits & 0x1f;
 unsigned int type = GetType(o, subindex);
 double v = fn_82B167E0(o, subindex);
 fn_82B80CD0(v, type, x);
}
