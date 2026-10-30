typedef struct Info { int v[12]; } Info;
typedef struct Obj { char pad[0x8c]; int x8c; char pad90[0x1c]; int xac; Info info; } Obj;

int fn_829E3C40(Obj *o, Info *out)
{
    if (out == 0) {
        return 0x80070057;
    }
    if (o->xac == 0 || o->x8c != 0) {
        return 0x8000ffff;
    }
    *out = o->info;
    return 0;
}
