#include <vector>

typedef struct __declspec(passinreg) __declspec(align(16)) __vector4 {
    float vector4_f32[4];
} __vector4;

struct Element_82269F20 {
    int data[56];
};

template <> void std::vector<Element_82269F20>::push_back(const Element_82269F20 &);

struct State_82269338 {
    std::vector<Element_82269F20> entries;
    char pad10[0x2a4];
    int dirty;
    char pad2b8[0xc];
    int first;
    int second;
    char pad2cc[0x44];
    __vector4 color;
    char pad320[8];
    float x;
    float y;
    char pad330[4];
    int field334;
    int field338;
};

struct Item_82269338 {
    char pad00[0xd8];
    unsigned char suppressed;
};

struct String_82269338 {
    union {
        char local[16];
        const char *external;
    } data;

    unsigned int length;
    unsigned int capacity;
};

extern "C" {
extern const char lbl_82196582[1];
unsigned int fn_823AB478(int item);
String_82269338 *fn_82E1DAA0(Item_82269338 *item);
void fn_82266230(Element_82269F20 *self, const char *name, int field40, int field44, int *field48,
                 int *field4c, float x, float y, __vector4 color, int *pairFirst, int *pairSecond, int *extra,
                 __vector4 color2, __vector4 color3, int fieldA0);
}

extern "C" void fn_82269338(State_82269338 *self, Item_82269338 *item)
{
    if (item->suppressed == 0) {
        Element_82269F20 entry;
        const String_82269338 *string;
        const char *name;
        char *dst;
        char *end;

        entry.data[0x34] = fn_823AB478((int)item);
        fn_82266230(&entry, lbl_82196582, entry.data[0x34] + 1, entry.data[0x34] + 1, &self->field334,
                    &self->field338, self->x, self->y, self->color, &self->first, &self->second, 0,
                    self->color, self->color, 0);
        string = fn_82E1DAA0(item);
        name = string->capacity < 16 ? string->data.local : string->data.external;
        if (!name)
            name = lbl_82196582;
        dst = (char *)entry.data;
        end = dst + 0x40;
        while (dst < end && (*dst++ = *name++) != 0) {
        }
        if (dst == end)
            dst[-1] = 0;
        self->entries.push_back(entry);
        self->dirty = 1;
    }
}
