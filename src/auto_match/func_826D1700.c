typedef struct Ref_826D1700 {
    int count;
} Ref_826D1700;

typedef struct Owner_826D1700 {
    char pad0[0xa98];
    char children[1];
} Owner_826D1700;

typedef struct Node_826D1700 {
    char pad0[4];
    int refs;
    char pad8[0x80 - 8];
    int ref;
    char pad84[0xa0 - 0x84];
    Owner_826D1700 *owner;
    char pada4[0x1c0 - 0xa4];
    Ref_826D1700 *target_ref;
    struct Node_826D1700 *link;
} Node_826D1700;

extern Node_826D1700 *fn_826C8688(Node_826D1700 *self);
extern int fn_826C86D8(Node_826D1700 *self);
extern Ref_826D1700 *fn_8269F500(Node_826D1700 *node);
extern void fn_8269A608(Ref_826D1700 *ref);
extern void fn_8267BE38(Ref_826D1700 *ref);
extern void fn_826CD488(void *list, Node_826D1700 **item);
extern void fn_826D03A0(void *list, int index);
extern void fn_8267C498(Node_826D1700 *node);

void fn_826D1700(Node_826D1700 *self, Node_826D1700 *target)
{
    Node_826D1700 *old;
    Node_826D1700 *item;
    Ref_826D1700 *ref;
    Ref_826D1700 *prev;
    int index;

    old = fn_826C8688(self);
    if (old != 0)
        old->link = 0;
    index = fn_826C86D8(self);
    if (target != 0) {
        if (target->ref != 0)
            ref = (Ref_826D1700 *)target->ref;
        else
            ref = fn_8269F500(target);
        if (ref != 0)
            ref->count++;
        prev = self->target_ref;
        if (prev != 0 && --prev->count <= 0) {
            fn_8269A608(prev);
            fn_8267BE38(prev);
        }
        self->target_ref = ref;
        if (index == -1) {
            self->refs++;
            item = self;
            fn_826CD488(self->owner->children, &item);
            fn_8267C498(self);
        }
        target->link = self;
    } else {
        prev = self->target_ref;
        if (prev != 0 && --prev->count <= 0) {
            fn_8269A608(prev);
            fn_8267BE38(prev);
        }
        self->target_ref = 0;
        if (index > -1)
            fn_826D03A0(self->owner->children, index);
    }
}
