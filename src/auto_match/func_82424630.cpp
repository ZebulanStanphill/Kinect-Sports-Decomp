#include <vector>

struct Element_82424930 {
    int data[124];
};

template <> void std::vector<Element_82424930>::push_back(const Element_82424930 &value);
extern "C" void fn_82422F08(void *self, const void *source, Element_82424930 *out);
extern "C" char *fn_8251F720(void *resource, int flags);
extern "C" unsigned int fn_8251FBA8(void *resource);
extern "C" void fn_8251FA58(void *resource);
extern "C" int fn_82F65350(void);

extern "C" void fn_82424630(char *self, unsigned int *resource)
{
    if (*resource != 0) {
        char *data = fn_8251F720(resource, 0);
        unsigned int index = 0;
        unsigned char *end;
        unsigned char *first;
        Element_82424930 temporary;
        if (fn_8251FBA8(data) / 0x6b4 != 0) {
            std::vector<Element_82424930> *elements = (std::vector<Element_82424930> *)(self + 0xc);
            char *current = data;
            do {
                fn_82422F08(self, current, &temporary);
                elements->push_back(temporary);
                ++index;
                current += 0x6b4;
            } while (index < fn_8251FBA8(data) / 0x6b4);
        }
        fn_8251FA58(data);
        end = *(unsigned char **)(self + 0x10);
        first = *(unsigned char **)(self + 0xc);
        if (first != end) {
            unsigned int count = 2;
            for (char *current = (char *)first + 496; (unsigned char *)current != end;
                 current += 496, ++count) {
                unsigned int mask = 0x7fff;
                unsigned int random = fn_82F65350() & 0x7fff;
                unsigned char *selected;
                while (mask < count && mask != 0xffffffff) {
                    random = (random << 15) | (fn_82F65350() & 0x7fff);
                    mask = (mask << 15) | 0x7fff;
                }
                selected = first + (random % count) * 496;
                memcpy(&temporary, current, 496);
                memcpy(current, selected, 496);
                memcpy(selected, &temporary, 496);
            }
        }
    }
}
