#include <vector>
#include <new>

struct Model_82494040 {
    void *key; /* 0x000 */
    char pad004[0x18c];
    int visible; /* 0x190 */
};

struct Body_82494040 {
    char pad000[0x15c];
    int moving; /* 0x15c */
};

struct Item_82494040 {
    char pad000[4];
    Model_82494040 *model; /* 0x004 */
    char pad008[4];
    Body_82494040 *body; /* 0x00c */
    char pad010[0xfb];
    unsigned char hidden; /* 0x10b */
};

struct Node_82494040 {
    Item_82494040 *item; /* 0x00 */
    char pad04[8];
    float weight; /* 0x0c */
    char pad10[4];
    Node_82494040 *next; /* 0x14 */
};

struct Scene_82494040 {
    char pad00[0xdc];
    Node_82494040 *nodes; /* 0xdc */
};

struct Owner_82494040 {
    char pad00[0x80];
    Scene_82494040 *scene; /* 0x80 */
};

struct Object_82494040 {
    virtual void slot0();
    virtual void slot4();
    virtual void slot8();
    virtual void update(float delta, int a, int b);
    char pad4[0x4c];
    void *key; /* 0x50 */
    Object_82494040(Node_82494040 *node, Owner_82494040 *owner, int a);
};

struct Element_82494B00 {
    Object_82494040 *object;
};

struct State_82494040 {
    int pad;
    std::vector<Element_82494B00> objects; /* 0x04 */
    Owner_82494040 *owner;                 /* 0x14 */
};

extern "C" void *fn_8248F890(unsigned int);

/* Updates the object of every visible node, creating the objects that do not exist yet. */
extern "C" void fn_82494040(State_82494040 *self, float delta, int a, int b)
{
    Node_82494040 *node;

    for (node = self->owner->scene->nodes; node != 0; node = node->next) {
        Item_82494040 *item = node->item;
        if (item->hidden == 0 && item->model->visible != 0 &&
            (item->body->moving != 0 || node->weight > 0.0f || a != 0)) {
            void *key = item->model->key;
            std::vector<Element_82494B00>::iterator position;
            for (position = self->objects.begin(); position != self->objects.end(); ++position) {
                if (key == position->object->key) {
                    break;
                }
            }
            if (position != self->objects.end()) {
                position->object->update(delta, a, b);
            } else {
                void *memory = fn_8248F890(0x240);
                Element_82494B00 element;
                element.object = memory ? new (memory) Object_82494040(node, self->owner, a) : 0;
                element.object->update(delta, a, b);
                self->objects.push_back(element);
            }
        }
    }
}
