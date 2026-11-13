#include <vector>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Volume_822B4148 {
    unsigned short type;          /* 0x00 */
    unsigned short id;            /* 0x02 */
} Volume_822B4148;

typedef struct VolumeList_822B4148 VolumeList_822B4148;

typedef struct Item_822B4148 {
    char pad0[0x24];
    unsigned int id;              /* 0x24 */
} Item_822B4148;

typedef struct Owner_822B4148 {
    char pad0[0x10];
    std::vector<Item_822B4148 *> items;   /* 0x10 */
    VolumeList_822B4148 *volumes; /* 0x20 */
} Owner_822B4148;

extern "C" Volume_822B4148 *fn_8255C730(VolumeList_822B4148 *list, const __vector4 *position, unsigned int layers);

static __forceinline Item_822B4148 *FindItemById(const Owner_822B4148 *self, unsigned int id)
{
    for (std::vector<Item_822B4148 *>::const_iterator it = self->items.begin(); it != self->items.end(); ++it) {
        if ((*it)->id == id)
            return *it;
    }
    return 0;
}

static __forceinline Item_822B4148 *FindItem(const Owner_822B4148 *self, const Volume_822B4148 *volume)
{
    if (volume != 0)
        return FindItemById(self, volume->id);
    return 0;
}

extern "C" Item_822B4148 *fn_822B4148(Owner_822B4148 *self, int layer, __vector4 position)
{
    __vector4 pos = position;
    return FindItem(self, fn_8255C730(self->volumes, &pos, 1 << layer));
}
