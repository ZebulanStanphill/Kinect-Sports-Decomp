#include <vector>
/* Finds the volume of the given layer that contains the position, maps it through the owner's
   item list to the matching volume entry and returns that entry's bounds shrunk by the margin
   in x and z. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
}

typedef struct Volume_823DCC60 {
    unsigned short type;          /* 0x00 */
    unsigned short id;            /* 0x02 */
    unsigned int layers;          /* 0x04 */
    unsigned short key;           /* 0x08 */
    char pad0a[0x46];
} Volume_823DCC60;

typedef struct VolumeList_823DCC60 {
    int pad0;
    Volume_823DCC60 *begin;       /* 0x04 */
    Volume_823DCC60 *end;         /* 0x08 */
} VolumeList_823DCC60;

typedef struct Item_823DCC60 {
    char pad0[0x24];
    unsigned int id;              /* 0x24 */
} Item_823DCC60;

typedef struct Owner_823DCC60 {
    char pad0[0x10];
    std::vector<Item_823DCC60 *> items;   /* 0x10 */
    VolumeList_823DCC60 *volumes; /* 0x20 */
} Owner_823DCC60;

extern "C" Volume_823DCC60 *fn_8255C730(VolumeList_823DCC60 *list, const __vector4 *position, unsigned int layers);
extern "C" int fn_8255C890(const Volume_823DCC60 *volume, __vector4 *min, __vector4 *max);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx = __lvlx(&x, 0);
    __vector4 vy = __lvlx(&y, 0);
    __vector4 vz = __lvlx(&z, 0);
    __vector4 vw = __lvlx(&w, 0);

    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

static __forceinline Item_823DCC60 *FindItemById(const Owner_823DCC60 *self, unsigned int id)
{
    for (std::vector<Item_823DCC60 *>::const_iterator it = self->items.begin(); it != self->items.end(); ++it) {
        if ((*it)->id == id)
            return *it;
    }
    return 0;
}

static __forceinline Item_823DCC60 *FindItem(const Owner_823DCC60 *self, const Volume_823DCC60 *volume)
{
    if (volume != 0)
        return FindItemById(self, volume->id);
    return 0;
}

static __forceinline Volume_823DCC60 *FindVolumeByKey(const VolumeList_823DCC60 *list, unsigned int id)
{
    Volume_823DCC60 *v;

    for (v = list->begin; v < list->end; v++) {
        if (v->key == (unsigned short)id)
            return v;
    }
    return 0;
}

static __forceinline Volume_823DCC60 *FindVolume(const Owner_823DCC60 *self, const Item_823DCC60 *item)
{
    if (item != 0) {
        const VolumeList_823DCC60 *list = self->volumes;
        unsigned int id = item->id;
        return FindVolumeByKey(list, id);
    }
    return 0;
}

extern "C" int fn_823DCC60(Owner_823DCC60 *self, __vector4 position, int layer, float margin, __vector4 *outMin,
                __vector4 *outMax)
{
    __vector4 min;
    __vector4 max;
    __vector4 extent;
    Volume_823DCC60 *volume;

    min = position;
    volume = FindVolume(self, FindItem(self, fn_8255C730(self->volumes, &min, 1 << layer)));
    if (volume != 0) {
        fn_8255C890(volume, &min, &max);
        extent = VectorSet(margin, 0.0f, margin, 0.0f);
        *outMin = __vaddfp(min, extent);
        *outMax = __vsubfp(max, extent);
        return 1;
    }
    return 0;
}
