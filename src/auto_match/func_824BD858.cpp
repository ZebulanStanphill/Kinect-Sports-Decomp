#include <vector>

// 40-byte element; the layout is shared with fn_82471140 (vector::push_back).
struct Element_82471140 {
    int result;     /* 0x00 */
    float time;     /* 0x04 */
    int index;      /* 0x08 */
    int field0C;    /* 0x0C */
    int field10[4]; /* 0x10 */
    int frame;      /* 0x20 */
    float scale;    /* 0x24 */
};

// 44-byte element; the layout is shared with fn_824BF708 (vector::push_back).
struct Element_824BF708 {
    float delay;        /* 0x00 */
    int id;             /* 0x04 */
    float time;         /* 0x08 */
    int field0C;        /* 0x0C */
    int field10;        /* 0x10 */
    unsigned int count; /* 0x14 */
    int arg18;          /* 0x18 */
    int arg1C;          /* 0x1C */
    int field20;        /* 0x20 */
    int frame;          /* 0x24 */
    int field28;        /* 0x28 */
};

struct Device_824BD858;

struct DeviceVtbl_824BD858 {
    void *slots[4];
    int (*Submit)(Device_824BD858 *self); /* 0x10 */
};

struct Device_824BD858 {
    DeviceVtbl_824BD858 *vtbl; /* 0x00 */
    int ready;                 /* 0x04 */
    int busy;                  /* 0x08 */
};

struct Object_824BD858 {
    Device_824BD858 *device; /* 0x000 */
    char pad004[0x20];
    std::vector<Element_82471140> results; /* 0x024 */
    char pad034[0x18];
    int lastId; /* 0x04C */
    char pad050[0x4];
    int nextIndex; /* 0x054 */
    char pad058[0x6c];
    std::vector<Element_824BF708> requests; /* 0x0C4 */
    char pad0D4[0x3c];
    float clock[0xff]; /* 0x110 */
    int frame;         /* 0x50C */
};

template <> void std::vector<Element_82471140>::push_back(const Element_82471140 &);
template <> void std::vector<Element_824BF708>::push_back(const Element_824BF708 &);

extern "C" {
extern float lbl_8326B900[];
extern int lbl_831C6308;

float fn_8248A9A8(float *clock);
int fn_824BE400(Object_824BD858 *self, float time);
void *XMemSet(void *dest, int value, unsigned int size);

static __forceinline int IsIdle(Device_824BD858 *device)
{
    if (device->ready != 0 && device->busy == 0) {
        return 1;
    }
    return 0;
}

int fn_824BD858(Object_824BD858 *self, float unused, unsigned int count, float offset, int arg18, int arg1C)
{
    float time;
    int result;
    int id;
    float delay;
    Element_82471140 element;
    Element_824BF708 request;

    time = fn_8248A9A8(self->clock);
    if (!IsIdle(self->device)) {
        return -1;
    }
    if (fn_824BE400(self, time) != 0) {
        result = self->device->vtbl->Submit(self->device);
        if (result >= 0) {
            XMemSet(&element, 0, sizeof(element));
            element.result = result;
            element.time = time;
            element.index = self->nextIndex++;
            element.field0C = 0;
            element.frame = self->frame;
            element.scale = lbl_8326B900[2];
            self->results.push_back(element);
        }
    }
    id = lbl_831C6308++;
    XMemSet(&request, 0, sizeof(request));
    request.id = id;
    request.time = time;
    request.count = count;
    request.arg18 = arg18;
    request.field10 = 0;
    request.arg1C = arg1C;
    request.field20 = 0;
    request.frame = self->frame;
    delay = (float)count * 1.09f - offset;
    request.delay = delay;
    if (delay < 0.1f) {
        request.delay = 0.1f;
    }
    self->requests.push_back(request);
    self->lastId = id;
    return id;
}
}
