#include <vector>

struct Element_82628520 {
    int data[1];
};

template <> void std::vector<Element_82628520>::push_back(const Element_82628520 &);

struct Object_8262F170 {
    char pad00[0x18];
    int first;  /* 0x18 */
    int second; /* 0x1c */
    int third;  /* 0x20 */
    int fourth; /* 0x24 */
};

struct Owner_8262F170 {
    int unused00;
    char context[0x14];   /* 0x4 */
    char prototype[0x18]; /* 0x18 */
    void *source;         /* 0x30 */
    int unused34;
    std::vector<Element_82628520> entries; /* 0x38 */
};

struct Callbacks_8262F170 {
    void *unused[7];
    int (*query)(void *, int *, int *);
};

extern "C" void fn_82628468(void *context, void *prototype);
extern "C" void *fn_82522D98(unsigned int size);
extern "C" void fn_827D9630(Object_8262F170 *self, void *prototype);

extern "C" int fn_8262F170(Owner_8262F170 *self, int unused, Callbacks_8262F170 *callbacks)
{
    int first;
    int second;
    char *context = self->context;
    if (callbacks->query(self->source, &first, &second) != 0) {
        int savedSecond = second;
        int savedFirst = first;
        Element_82628520 entry;
        fn_82628468(context, self->prototype);
        Object_8262F170 *object = (Object_8262F170 *)fn_82522D98(0x28);
        if (object != 0) {
            fn_827D9630(object, self->prototype);
            object->first = savedFirst;
            object->second = savedSecond;
            entry.data[0] = (int)object;
            object->third = 0;
            object->fourth = 0;
        } else {
            entry.data[0] = 0;
        }
        ((std::vector<Element_82628520> *)(context + 0x34))->push_back(entry);
        return 0;
    }
    fn_82628468(context, self->prototype);
    return 0x65b;
}
