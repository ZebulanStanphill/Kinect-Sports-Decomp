#include <algorithm>
#include <vector>

extern "C" unsigned int fn_8252AE68(unsigned int object, unsigned int enabled);

typedef struct Event_824644A0 {
    int type;
    int unused;
    unsigned int object;
} Event_824644A0;

typedef struct Owner_824644A0 {
    int unused;
    int mode; /* 0x04 */
    char padding08[0x1c - 0x08];
    unsigned int primary;
    unsigned int secondary;
    unsigned int tertiary;
    char padding28[0x54 - 0x28];
    std::vector<unsigned int> entries;
} Owner_824644A0;

extern "C" void fn_824644A0(Owner_824644A0 *self, Event_824644A0 *event)
{
    switch (event->type) {
    case 0x42: {
        unsigned int object = event->object;
        if (self->mode != 5 && self->mode != 6 && (object == self->tertiary || object == self->secondary)) {
            fn_8252AE68(object, 1);
        }
        if (object == self->primary) {
            fn_8252AE68(object, 1);
        }
        break;
    }
    case 0x44: {
        std::vector<unsigned int>::iterator end = self->entries.end();
        std::vector<unsigned int>::iterator output = std::remove(self->entries.begin(), end, event->object);
        self->entries.erase(output, end);
    }
    }
}
