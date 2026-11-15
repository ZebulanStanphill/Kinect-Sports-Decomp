#include <vector>

struct Element_826717F8 {
    int data[16];
};

namespace std
{
template <> void vector<Element_826717F8>::push_back(const Element_826717F8 &);
}

struct Owner_826737C8 {
    char reserved[0x54];
    std::vector<Element_826717F8> elements;
};

extern "C" void fn_8266EC60(void);
extern "C" int fn_8266C738(void);
extern "C" int fn_82526C70(char *, unsigned int, const char *, ...);
extern "C" void *fn_82230110(void *, const char *);
extern "C" void *fn_8258C000(void);
extern "C" int fn_8258DDE0(void *, void *);
extern "C" void fn_82671AC8(Owner_826737C8 *, const char *, float, float, float, float);
extern "C" void fn_8258D810(void *, float, float, float, float, void *);

extern "C" void fn_826737C8(Owner_826737C8 *self, const char *prefix, float x, float y, float width,
                            float height)
{
    char string[32];
    Element_826717F8 text;
    fn_8266EC60();
    if (fn_8266C738() != 0) {
        void *value = fn_82230110(string, prefix);
        if (fn_8258DDE0(fn_8258C000(), value) != 0) {
            fn_82671AC8(self, prefix, x, y, width, height);
        } else {
            fn_82526C70((char *)text.data, 64, "%s%08x", prefix, self);
            value = fn_82230110(string, (char *)text.data);
            fn_8258D810(fn_8258C000(), x, y, width, height, value);
            self->elements.push_back(text);
        }
    }
}
