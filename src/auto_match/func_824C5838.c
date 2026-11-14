typedef struct Item_824C5838 Item_824C5838;
typedef struct ItemVt_824C5838 {
    void *slots[3];
    int (*isReady)(Item_824C5838 *self);
} ItemVt_824C5838;
struct Item_824C5838 { ItemVt_824C5838 *vt; };

typedef struct Entry_824C5838 {
    union { Item_824C5838 *item; int id; };
    int data;
} Entry_824C5838;

typedef struct Obj_824C5838 {
    unsigned char pad[0x28];
    Entry_824C5838 *begin;
    Entry_824C5838 *end;
    int pad30[2];
    Entry_824C5838 current;
} Obj_824C5838;

static __forceinline Entry_824C5838 *Next(Entry_824C5838 *it, Entry_824C5838 *begin, Entry_824C5838 **end, Entry_824C5838 *start)
{
    Entry_824C5838 *next = it + 1;
    if (next == *end) {
        next = begin;
    }
    return *(next == start ? end : &next);
}

Entry_824C5838 *fn_824C5838(Obj_824C5838 *self)
{
    Entry_824C5838 *end = self->end;
    Entry_824C5838 *begin = self->begin;
    Entry_824C5838 *start;
    Entry_824C5838 *it;

    for (start = begin; start != end; start++) {
        if (start->id == self->current.id) {
            break;
        }
    }
    for (it = Next(start, begin, &end, start); it != end; it = Next(it, begin, &end, start)) {
        if (it->item->vt->isReady(it->item) != 0) {
            return it;
        }
    }
    return &self->current;
}
