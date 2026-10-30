typedef struct Obj Obj;
typedef struct { void *s0; void *s1; void (*release)(Obj *); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct Item { Obj *obj; int pad; struct Item *next; } Item;

void fn_82EE9CF8(Item **list, Item *it)
{
    if (it->obj) {
        it->obj->vt->release(it->obj);
        it->obj = 0;
    }
    it->next = *list;
    *list = it;
}
