// Replace-or-append on a std::vector<Element_82357010> (element type as in func_82357010.cpp).
#include <vector>

struct Element_82357010 {
    int data[23];
};

typedef Element_82357010 T;

extern "C" void *fn_82A1DD38(void *dst, const void *src, unsigned int size);

struct List_8243E150 {
    int pad0;
    std::vector<T> items;   /* 0x4 */
};
static __forceinline T *Find(List_8243E150 *self, const T *item)
{
    for (unsigned int i = 0; i < self->items.size(); i++) { T *e = &self->items[i]; if (e->data[0] == item->data[0]) return e; } return 0;
}
extern "C" void fn_8243E150(List_8243E150 *self, const T *item, bool replace)
{
    if (replace) {
        T *found = Find(self, item);
        if (found != 0) {
            fn_82A1DD38(found, item, sizeof(T));
            return;
        }
    }
    self->items.push_back(*item);
}
