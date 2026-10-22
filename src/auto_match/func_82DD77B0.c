typedef struct Obj Obj;
typedef struct {
    void *pad[5];
    void (*fn14)(Obj *, unsigned short, __int64);
} ObjVtbl;
struct Obj { ObjVtbl *vt; };

typedef struct {
    unsigned short id;
    unsigned short pad[3];
} Entry;

typedef struct {
    unsigned char a;
    unsigned char b;
    unsigned char count;
    unsigned char pad;
    unsigned short pad2;
    Entry entries[1];
} List;

void fn_82DD77B0(List *list, Obj *obj, __int64 arg)
{
    unsigned int i;
    for (i = 0; i < list->count; i++) {
        if (list->entries[i].id != 0xffff) {
            obj->vt->fn14(obj, list->entries[i].id, arg);
        }
    }
    list->count = 0;
    list->a = 0;
    list->b = 0;
}
