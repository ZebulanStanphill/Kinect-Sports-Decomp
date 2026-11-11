typedef struct Target_82D99F20 Target_82D99F20;
typedef struct {
    char pad0[0x1c];
    void (*fn1c)(Target_82D99F20 *t, void *p, float f, int a);
} TargetVt_82D99F20;
struct Target_82D99F20 { TargetVt_82D99F20 *vt; };
typedef struct { char pad0[8]; float f8; } Info_82D99F20;
typedef struct { char pad0[0x78]; Info_82D99F20 *info; } Owner_82D99F20;
typedef struct {
    char pad0[8];
    Owner_82D99F20 *owner;
    char pad0c[4];
    Target_82D99F20 *target;
    char pad14[0xb0 - 0x14];
    char subb0[4];
} Obj_82D99F20;

void fn_82D99F20(Obj_82D99F20 *o, int a)
{
    o->target->vt->fn1c(o->target, o->subb0, o->owner->info->f8 * 0.5f, a);
}
