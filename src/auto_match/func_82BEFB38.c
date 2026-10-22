typedef unsigned int size_t;
void *memcpy(void *d, const void *s, size_t n);

typedef struct Info {
    char pad0[0xc];
    int valid;
    char pad10[4];
    unsigned int count;
    float scale;
} Info;

typedef struct Src {
    char pad0[0x5a];
    unsigned short count;
    float scale;
} Src;

typedef struct Obj {
    char pad0[0x2c];
    Src *src;
    char pad30[0x30];
    unsigned short count;
    char pad62[2];
    float scale;
} Obj;

typedef struct Target {
    char pad0[0x60];
    int state;
} Target;

typedef struct Arg {
    char pad0[8];
    Target *target;
} Arg;

extern Info *fn_82BE50B0(Target *t, int n);
int fn_82BEFB38(Obj *o, Arg *a, Info *out)
{
    unsigned short count;
    float scale;
    Target *t;
    Info *info;
    if (o->src) count = o->src->count; else count = o->count;
    scale = o->src ? o->src->scale : o->scale;
    t = a->target;
    info = fn_82BE50B0(t, 1);
    t->state = 3;
    if (info != 0 && info->valid != 0) {
        t->state = 1;
        if ((float)info->count * info->scale >= (float)out->count * out->scale) {
            memcpy(out, info, 0x24);
            if (info->scale >= scale && info->count >= count) {
                t->state = 2;
                return 1;
            }
        }
    }
    return 0;
}
