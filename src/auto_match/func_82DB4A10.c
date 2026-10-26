typedef struct { float x; char pad[0x6c]; } Item;
typedef struct { char pad[0x30]; Item *items; int count; } List;
typedef struct { char pad[8]; List *list; } Inner;
typedef struct { char pad[0xc]; Inner *inner; } Obj;

void fn_82DB4A10(Obj *o, float d)
{
    List *l = o->inner->list;
    int i;

    for (i = 0; i < l->count; i++)
        l->items[i].x += d;
}
