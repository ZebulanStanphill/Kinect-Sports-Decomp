typedef struct Entry_825B1180 {
    int id;
    int a;
    int b;
    int c;
    int d;
} Entry_825B1180;

typedef struct Obj_825B1180 {
    char pad[0xC];
    Entry_825B1180 *entries;
} Obj_825B1180;

extern unsigned int fn_8284F488(Obj_825B1180 *obj);
extern unsigned int fn_8284F498(Obj_825B1180 *obj);
extern void fn_8284F560(Obj_825B1180 *obj, unsigned int index, int a, int b, int c, int d, int e, int f);

void fn_825B1180(Obj_825B1180 *obj)
{
    unsigned int n;
    unsigned int i;

    if (obj != 0) {
        n = fn_8284F488(obj);
        for (i = 0; i < n; i++) {
            fn_8284F560(obj, i, 0, 0, 0, 0, 0, 0);
        }
        n = fn_8284F498(obj);
        for (i = 0; i < n; i++) {
            obj->entries[i].a = 0;
            obj->entries[i].b = 0;
            obj->entries[i].c = 0;
            obj->entries[i].d = 0;
        }
    }
}
