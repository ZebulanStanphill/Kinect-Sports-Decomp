typedef struct Ent { unsigned int v[8]; } Ent;
typedef struct Obj { int x0; int x4; unsigned int count; int pad[13]; Ent e[1]; } Obj;

unsigned int fn_8267B060(Obj *o)
{
    unsigned int best = 0xffffffff;
    unsigned int i;
    for (i = 0; i < o->count; i++) {
        if (o->e[i].v[0] < best) {
            best = o->e[i].v[0];
        }
    }
    return best;
}
