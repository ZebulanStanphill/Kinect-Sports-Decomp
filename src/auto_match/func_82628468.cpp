#include <vector>
#include <string.h>

struct Element_82628520 {
    int data[1];
};

struct Item_82628468 {
    char pad0[0x18];
    void *f18;
    char pad1c[4];
    unsigned f20;
};

struct Self_82628468 {
    char pad0[0x34];
    Item_82628468 **begin;
    Item_82628468 **end;
    char pad3c[8];
    std::vector<Element_82628520> list;
};

extern template void std::vector<Element_82628520>::push_back(const Element_82628520 &);

extern "C" {
void fn_82522ED8(void *p);
int fn_827D9780(void *ctx, Item_82628468 *item);
}

extern "C" void fn_82628468(Self_82628468 *self, void *ctx)
{
    Item_82628468 **p;
    Item_82628468 **next;
    Item_82628468 *item;
    Element_82628520 e;

    p = self->begin;
    if (p != self->end) {
        next = p + 1;
        do {
            item = *p;
            e.data[0] = (int)item;
            if (fn_827D9780(ctx, item) == 0) {
                if (item->f20 > 0) {
                    self->list.push_back(e);
                } else {
                    fn_82522ED8(item->f18);
                    fn_82522ED8(item);
                }
                memmove(p, next, (self->end - next) * 4);
                self->end = self->end - 1;
            } else {
                p = p + 1;
                next = next + 1;
            }
        } while (p != self->end);
    }
}
