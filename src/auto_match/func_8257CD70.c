extern void *XMemSet(void *dest, int value, unsigned int count);

typedef struct Event_8257CD70 {
    int type;  /* 0x0 */
    int size;  /* 0x4 */
    int value; /* 0x8 */
} Event_8257CD70;

typedef struct Link_8257CD70 {
    struct Link_8257CD70 *prev; /* 0x0 */
    struct Link_8257CD70 *next; /* 0x4 */
} Link_8257CD70;

struct Obj_8257CD70;

typedef struct VTable_8257CD70 {
    void *pad0;
    void (*activate)(struct Obj_8257CD70 *); /* 0x4 */
    void *pad8;
    void (*notify)(struct Obj_8257CD70 *, Event_8257CD70 *); /* 0xc */
} VTable_8257CD70;

typedef struct Obj_8257CD70 {
    VTable_8257CD70 *vt; /* 0x0 */
    int pad4;
    int state; /* 0x8 */
    char padc[0x38 - 0xc];
    Link_8257CD70 pending; /* 0x38 */
    Link_8257CD70 done;    /* 0x40 */
} Obj_8257CD70;

typedef struct Node_8257CD70 {
    struct Node_8257CD70 *next; /* 0x0 */
    int pad4;
    Obj_8257CD70 *obj; /* 0x8 */
} Node_8257CD70;

typedef struct Manager_8257CD70 {
    Link_8257CD70 tree;    /* 0x0 */
    Link_8257CD70 pending; /* 0x8 */
    char pad10[0x18 - 0x10];
    Link_8257CD70 done; /* 0x18 */
    char pad20[0x28 - 0x20];
    Node_8257CD70 *objects; /* 0x28 */
} Manager_8257CD70;

void fn_8257CD70(Manager_8257CD70 *self, int value)
{
    Event_8257CD70 event;
    Link_8257CD70 *link;
    Link_8257CD70 *root;
    Link_8257CD70 *tail;
    Link_8257CD70 *next;
    Link_8257CD70 *added;
    Obj_8257CD70 *obj;
    Node_8257CD70 *node;

    if ((int)self->pending.next != 0) {
        XMemSet(&event.value, 0, 4);
        event.value = value;
        event.type = 0x5a;
        event.size = 0xc;
        while ((link = self->pending.next) != 0) {
            obj = (Obj_8257CD70 *)((char *)link - 0x38);
            if (link->prev != 0) {
                link->prev->next = link->next;
            }
            if (link->next != 0) {
                link->next->prev = link->prev;
            }
            link->prev = 0;
            link->next = 0;
            root = &self->tree;
            while ((int)root->prev != 0) {
                root = root->prev;
            }
            next = root->next;
            root->next = link;
            link->prev = root;
            link->next = next;
            if (next != 0) {
                next->prev = link;
            }
            added = &obj->done;
            tail = &self->done;
            while ((int)tail->next != 0) {
                tail = tail->next;
            }
            tail->next = added;
            added->next = 0;
            added->prev = tail;
            obj->vt->notify(obj, &event);
        }
    }
    for (node = self->objects->next; node != self->objects; node = node->next) {
        obj = node->obj;
        if (obj->state == 0) {
            obj->state = 1;
            obj->vt->activate(obj);
        }
    }
}
