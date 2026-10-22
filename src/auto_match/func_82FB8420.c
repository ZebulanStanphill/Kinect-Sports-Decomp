typedef struct Item {
    char pad[0xe];
    short idx;
} Item;
typedef struct Obj {
    char pad00[0x10];
    Item **begin;
    Item **end;
    char pad18[4];
    int type;
    Item *cur;
} Obj;
typedef struct Ref {
    short count;
    unsigned char flags;
} Ref;
typedef struct Iter {
    Obj *obj;
    Ref ref;
    Item *item;
} Iter;
typedef struct Owner {
    char pad[0x28];
    unsigned short flags;
} Owner;
extern Item *fn_82FB7980(Obj *o);
extern void fn_82FB8288(Owner *owner, Obj *o, Item *item);

static unsigned char Ref_release(Ref *r)
{
    unsigned char res = 0;
    if (r == 0) {
        res = 1;
    } else if (r->flags & 0x80) {
        if (r->flags & 0x40) {
            res = 1;
        } else {
            res = --r->count != 0;
        }
    }
    return res;
}

static unsigned int Obj_size(Obj *o)
{
    return o->end - o->begin;
}

unsigned short fn_82FB8420(Owner *owner, Iter *it, unsigned char *done)
{
    Item *item;
    Obj *o;

    *done = 0;
    if (it->obj->type == 1 || it->obj->type == 3) {
        item = fn_82FB7980(it->obj);
    } else {
        item = it->item;
    }
    if (item == 0) {
        return 0;
    }
    o = it->obj;
    if ((owner->flags & 0x8000) != 0 && item == o->cur) {
        fn_82FB8288(owner, o, item);
    }
    if (item->idx + 1 == Obj_size(o)) {
        item->idx = 0;
        if (!Ref_release(&it->ref)) {
            *done = 1;
            return 0;
        }
    } else {
        item->idx = item->idx + 1;
    }
    return item->idx;
}
