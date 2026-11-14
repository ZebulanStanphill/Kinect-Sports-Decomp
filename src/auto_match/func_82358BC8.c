typedef struct Obj_82358BC8 {
    char pad0[0x20];
    char resource[0x22c - 0x20];
    int current;
    int previous;
} Obj_82358BC8;

typedef struct Slot_82358BC8 {
    Obj_82358BC8 *obj;
    int unk4;
} Slot_82358BC8;

typedef struct Self_82358BC8 {
    char pad0[0x30];
    Slot_82358BC8 *first;
    Slot_82358BC8 *last;
} Self_82358BC8;

extern void fn_825604A0(void *resource);
extern void fn_82366AE8(Obj_82358BC8 *obj, int value);

void fn_82358BC8(Self_82358BC8 *self, int *event)
{
    Slot_82358BC8 *it;
    switch (*event) {
    case 0x52:
        for (it = self->first; it != self->last; it++) {
            Obj_82358BC8 *obj = it->obj;
            obj->previous = obj->current;
            if (obj->current != 0) {
                fn_825604A0(obj->resource);
                obj->current = 0;
            }
        }
        break;
    case 0x53:
        for (it = self->first; it != self->last; it++)
            fn_82366AE8(it->obj, it->obj->previous);
        break;
    }
}
