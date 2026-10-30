typedef struct { char pad[8]; unsigned char *map; } Table;
typedef struct { char pad[0x10]; Table *table; } Info;
typedef struct Iface Iface;
struct Iface { Info *(**vt)(Iface *); };
typedef struct { void *vt; Iface *iface; } Obj;

int fn_825B61D0(Obj *p, short i)
{
    Info *info = p->iface->vt[7](p->iface);
    unsigned char *map = info->table->map;
    unsigned int v;
    int r;
    if (map == 0 || (v = map[i]) == 0xff) {
        r = -1;
    } else {
        r = v;
    }
    return r;
}
