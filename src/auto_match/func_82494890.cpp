#include <vector>

struct Element_82494B00 {
    int data[1];
};

template <> void std::vector<Element_82494B00>::push_back(const Element_82494B00 &);
struct Item_82494890;

struct Vtable_82494890 {
    void *slots[3];
    void (*configure)(Item_82494890 *, float, int, int);
};

struct Item_82494890 {
    Vtable_82494890 *vtable;
    char pad004[0xbc];
    unsigned int key; /* 0xc0 */
    int state;        /* 0xc4 */
    char pad0c8[0x18];
};

struct List_82494890 {
    Item_82494890 **begin;    /* 0x00 */
    Item_82494890 **end;      /* 0x04 */
    Item_82494890 **capacity; /* 0x08 */
};

struct Object_82494890 {
    int pad000;
    List_82494890 *items; /* 0x04 */
    float value;          /* 0x08 */
    int first;            /* 0x0c */
    int second;           /* 0x10 */
};

extern "C" {
void *fn_8248F890(unsigned int);
void fn_824994F8(Item_82494890 *);
extern Vtable_82494890 lbl_821BEFC0;

int fn_82494890(Object_82494890 *self, unsigned int key)
{
    Item_82494890 **end = self->items->end;
    Item_82494890 **cursor = self->items->begin;
    for (; cursor != end; cursor++) {
        if (key == (*cursor)->key) {
            break;
        }
    }
    Item_82494890 *item;
    if (cursor != self->items->end) {
        item = *cursor;
        item->vtable->configure(item, self->value, self->first, self->second);
        return 1;
    } else {
        Element_82494B00 element;
        Item_82494890 *created = (Item_82494890 *)fn_8248F890(0xe0);
        if (created != 0) {
            fn_824994F8(created);
            created->key = key;
            element.data[0] = (int)created;
            created->state = 0;
            created->vtable = &lbl_821BEFC0;
        } else {
            element.data[0] = 0;
        }
        ((std::vector<Element_82494B00> *)self->items)->push_back(element);
        item = (Item_82494890 *)element.data[0];
        item->vtable->configure(item, self->value, self->first, self->second);
        return 1;
    }
}
}
