typedef struct Node_823279C8 {
    struct Node_823279C8 *next;
    struct Node_823279C8 *prev;
    unsigned int value;
} Node_823279C8;

typedef struct {
    Node_823279C8 *head;
    int size;
} List_823279C8;

struct Obj_823279C8;

typedef struct {
    void *slots[20];
    char *(*getOwner)(struct Obj_823279C8 *self);
} Vtbl_823279C8;

typedef struct Obj_823279C8 {
    Vtbl_823279C8 *vt;
    unsigned char pad[0xcc];
    List_823279C8 list;
} Obj_823279C8;

extern unsigned char fn_8288B760(void *obj);
extern void fn_822D6AB8(void *target, unsigned int value);
extern void fn_8265CA20(void *p);

void fn_823279C8(Obj_823279C8 *self, unsigned int value)
{
    if (fn_8288B760(self)) {
        fn_822D6AB8(self->vt->getOwner(self) + 0x178, value);
    } else {
        List_823279C8 *list = &self->list;
        Node_823279C8 *head = list->head;
        Node_823279C8 *n = head->next;
        while (n != head) {
            if (n->value == value) {
                Node_823279C8 *dead = n;
                Node_823279C8 *prev = dead->prev;
                n = dead->next;
                prev->next = n;
                n->prev = prev;
                fn_8265CA20(dead);
                list->size--;
            } else {
                n = n->next;
            }
        }
    }
}
