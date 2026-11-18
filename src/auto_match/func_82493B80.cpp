#include <vector>
#include <new>

struct Item_82493B80 {
    char pad[0xb50];
    int active; /* 0xb50 */
};

struct Object_82493B80 {
    virtual void slot0();
    virtual void slot4();
    virtual void slot8();
    virtual void update(float delta, int a, int b);
    char pad4[0x8c];
    Item_82493B80 *item; /* 0x90 */
    Object_82493B80(Item_82493B80 *item);
};

struct Element_82494B00 {
    Object_82493B80 *object;
};

struct Entry_82493B80 {
    Item_82493B80 *item; /* 0x00 */
    int other;
};

struct List_82493B80 {
    int pad;
    Entry_82493B80 *begin; /* 0x04 */
    Entry_82493B80 *end;   /* 0x08 */
};

struct State_82493B80 {
    int pad;
    std::vector<Element_82494B00> objects; /* 0x04 */
    List_82493B80 *list;                   /* 0x14 */
};

extern "C" void *fn_8248F890(unsigned int);

/* Updates the object of every inactive item, creating the objects that do not exist yet. */
extern "C" void fn_82493B80(State_82493B80 *self, float delta, int a, int b)
{
    Entry_82493B80 *entry = self->list->begin;
    Entry_82493B80 *end = self->list->end;
    for (; entry < end; ++entry) {
        if (entry->item->active == 0) {
            std::vector<Element_82494B00>::iterator position;
            for (position = self->objects.begin(); position != self->objects.end(); ++position) {
                if (entry->item == position->object->item) {
                    break;
                }
            }
            if (position != self->objects.end()) {
                position->object->update(delta, a, b);
            } else {
                void *memory = fn_8248F890(0xa0);
                Element_82494B00 element;
                element.object = memory ? new (memory) Object_82493B80(entry->item) : 0;
                element.object->update(delta, a, b);
                self->objects.push_back(element);
            }
        }
    }
}
