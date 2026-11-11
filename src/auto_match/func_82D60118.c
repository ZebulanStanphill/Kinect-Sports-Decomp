typedef struct Target_82D60118 Target_82D60118;
typedef struct Obj_82D60118 Obj_82D60118;
typedef struct { void *pad[5]; void (*set)(Target_82D60118 *, unsigned short, unsigned __int64); } TargetVt_82D60118;
struct Target_82D60118 { TargetVt_82D60118 *vt; };
typedef struct { void (*destroy)(Obj_82D60118 *, int); } ObjVt_82D60118;
struct Obj_82D60118 { ObjVt_82D60118 *vt; int pad; Target_82D60118 *target; unsigned short *ids; int count; };
void fn_82D60118(Obj_82D60118 *p, unsigned __int64 value)
{
    int i;
    int n = p->count;
    for (i = 0; i < n; i++) {
        if (p->ids[i] != 0xffff) p->target->vt->set(p->target, p->ids[i], value);
    }
    p->vt->destroy(p, 1);
}
