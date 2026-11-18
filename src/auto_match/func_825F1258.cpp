#include <vector>

struct State_825F1258 {
    char padding[0x1c];
    std::vector<void *> items; /* 0x1c */
    char padding2c[0x10];
    unsigned int current; /* 0x3c */
};

extern "C" int fn_82BE4FB0(void *item);
extern "C" int fn_82BE5000(void *item);
extern "C" void fn_825F0D40(State_825F1258 *self, int index);

/* Stops the current item and starts the next one, wrapping around. */
extern "C" void fn_825F1258(State_825F1258 *self)
{
    if (self->items.size() > 1) {
        fn_82BE4FB0(self->items[self->current]);
        self->current = (self->current + 1) % self->items.size();
        fn_82BE5000(self->items[self->current]);
        fn_825F0D40(self, self->current);
    }
}
