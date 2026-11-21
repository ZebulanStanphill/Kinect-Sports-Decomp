struct Format_82A76C60 {
    char pad0[0xc];
    unsigned short blockAlign; /* 0x0c */
};

struct Buffer_82A76C60 {
    char pad0[0x2c];
    Format_82A76C60 *format; /* 0x2c */
    char pad30[0x4];
    unsigned int bytes; /* 0x34 */
};

struct Node_82A76C60 {
    Buffer_82A76C60 *buffer;    /* 0x00 */
    struct Node_82A76C60 *next; /* 0x04 */
};

struct Entry_82A76C60 {
    Format_82A76C60 *format; /* 0x00 */
    unsigned int samples;    /* 0x04 */
};

struct Sink_82A76C60 {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual int submit(unsigned int firstCount, Entry_82A76C60 *first, unsigned int secondCount,
                       Entry_82A76C60 *second);
};

struct Queue_82A76C60 {
    char pad0[0x8];
    Sink_82A76C60 *sink; /* 0x08 */
    char padc[0x1c];
    Node_82A76C60 *firstList; /* 0x28 */
    char pad2c[0x4];
    unsigned int firstCount; /* 0x30 */
    char pad34[0x1c];
    Node_82A76C60 *secondList; /* 0x50 */
    char pad54[0x4];
    unsigned int secondCount; /* 0x58 */
};

enum HeapTag_82A76C60 {
    AudioHeap_82A76C60
};

extern "C" {
extern char lbl_83219D50[];
void *fn_82A3FF60(void *heap, unsigned int size, unsigned int flags, int zero);
void fn_82A4F4E0(void *p);
}

inline void *operator new[](unsigned int size, HeapTag_82A76C60)
{
    return fn_82A3FF60(lbl_83219D50, size, 0x20970006, 0);
}

static __forceinline Buffer_82A76C60 *NextBuffer(Node_82A76C60 **position)
{
    Node_82A76C60 *node = *position;
    if (node != 0) {
        *position = node->next;
        return node->buffer;
    }
    return 0;
}

extern "C" int fn_82A76C60(Queue_82A76C60 *self)
{
    unsigned int firstCount = self->firstCount;
    unsigned int secondCount = self->secondCount;
    Entry_82A76C60 *first;
    Entry_82A76C60 *second = 0;
    Node_82A76C60 *position;
    unsigned int i;
    int hr;

    first = new (AudioHeap_82A76C60) Entry_82A76C60[firstCount];
    if (first == 0) {
        hr = 0x8007000e;
    } else {
        second = new (AudioHeap_82A76C60) Entry_82A76C60[secondCount];
        hr = second == 0 ? 0x8007000e : 0;
    }
    position = self->firstList;
    for (i = 0; i < firstCount && hr >= 0; i++) {
        Buffer_82A76C60 *buffer = NextBuffer(&position);
        first[i].format = buffer->format;
        first[i].samples = buffer->bytes / buffer->format->blockAlign;
    }
    position = self->secondList;
    for (i = 0; i < secondCount && hr >= 0; i++) {
        Buffer_82A76C60 *buffer = NextBuffer(&position);
        second[i].format = buffer->format;
        second[i].samples = buffer->bytes / buffer->format->blockAlign;
    }
    if (hr >= 0) {
        hr = self->sink->submit(firstCount, first, secondCount, second);
    }
    if (first != 0) {
        fn_82A4F4E0(first);
    }
    if (second != 0) {
        fn_82A4F4E0(second);
    }
    return hr;
}
