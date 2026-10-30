typedef struct Obj Obj;
typedef struct { void (*f0)(Obj *); void (*f1)(Obj *); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct { int pad[7]; int state; } Info;
typedef struct { Info *info; int x4; Obj *obj; } Self;

void fn_82FB77C8(Self *s)
{
    if (s->info->state != 0 && s->info->state != 2) {
        return;
    }
    if (s->obj != 0) {
        s->obj->vt->f1(s->obj);
    }
}
