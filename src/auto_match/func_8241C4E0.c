typedef struct { char pad[0x6d4]; int tex[6]; } Res_8241C4E0;
typedef struct { char data[0x1ac]; } Item_8241C4E0;
typedef struct {
    Res_8241C4E0 *res;
    int f04;
    Item_8241C4E0 *begin;
    Item_8241C4E0 *end;
    char pad[0x258 - 0x10];
    void *extra;
    char pad2[0x28c - 0x25c];
    int mode;
} Obj_8241C4E0;
typedef struct { int tex; int kind; void *extra; } Out_8241C4E0;

static __forceinline unsigned int count(Obj_8241C4E0 *o) { return o->end - o->begin; }

void fn_8241C4E0(Obj_8241C4E0 *o, Out_8241C4E0 *out)
{
    int mode = o->mode;
    void *extra;

    out->kind = 0;
    switch (mode) {
    case 9:
        out->kind = 2;
        break;
    case 10:
        out->kind = 1;
        break;
    }
    extra = o->extra;
    out->tex = 0;
    out->extra = extra;
    switch (mode) {
    case 9:
        out->tex = count(o) > 1 ? o->res->tex[3] : o->res->tex[0];
        break;
    case 10:
        out->tex = count(o) > 1 ? o->res->tex[4] : o->res->tex[1];
        break;
    default:
        if (mode != 3 && extra == 0) {
            return;
        }
        out->tex = count(o) > 1 ? o->res->tex[5] : o->res->tex[2];
        break;
    }
}
