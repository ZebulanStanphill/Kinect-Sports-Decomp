typedef struct Value_83015318 Value_83015318;

typedef struct ValueVtbl_83015318 {
    void *slots[4];
    void (*release)(Value_83015318 *value, void *context); /* 0x10 */
} ValueVtbl_83015318;

struct Value_83015318 {
    ValueVtbl_83015318 *vtbl;
};

typedef struct Node_83015318 {
    struct Node_83015318 *next; /* 0x0 */
    int pad4[2];
    Value_83015318 *value; /* 0xc */
} Node_83015318;

typedef struct Map_83015318 {
    int handle;                   /* 0x0 */
    Node_83015318 *buckets[0x1f]; /* 0x4 */
    unsigned int count;           /* 0x80 */
} Map_83015318;

typedef struct MapIterator_83015318 {
    Node_83015318 **buckets; /* 0x0 */
    unsigned int index;      /* 0x4 */
    Node_83015318 *node;     /* 0x8 */
} MapIterator_83015318;

typedef struct Entry_83015318 {
    int pad0[4];
    void *data;         /* 0x10 */
    unsigned int size;  /* 0x14 */
    unsigned int extra; /* 0x18 */
} Entry_83015318;

typedef struct Buffer_83015318 {
    void *data;         /* 0x0 */
    unsigned int size;  /* 0x4 */
    unsigned int extra; /* 0x8 */
} Buffer_83015318;

typedef struct Self_83015318 {
    int pad0;
    Map_83015318 map;                /* 0x4 */
    Entry_83015318 *entriesBegin;    /* 0x88 */
    Entry_83015318 *entriesEnd;      /* 0x8c */
    Entry_83015318 *entriesCapacity; /* 0x90 */
    int pad94[2];
    Buffer_83015318 buffers[2][2]; /* 0x9c */
} Self_83015318;

extern void *lbl_831BC768;
extern int lbl_831BC7F4[2];
extern void fn_82FF4618(MapIterator_83015318 *it, Map_83015318 *map);
extern void fn_82FF38E8(Map_83015318 *map);
extern void fn_82FA5190(void *heap, void *data);

int fn_83015318(Self_83015318 *self)
{
    MapIterator_83015318 begin;
    MapIterator_83015318 it;
    Entry_83015318 *entry;
    Value_83015318 *value;
    Buffer_83015318 *buffer;
    int i;
    int j;

    fn_82FF4618(&begin, &self->map);
    if (begin.node != 0) {
        it = begin;
        do {
            value = it.node->value;
            if (value != 0) {
                value->vtbl->release(value, lbl_831BC7F4);
            }
            it.node = it.node->next;
            while (it.node == 0) {
                it.index++;
                if (it.index >= 0x1f) {
                    break;
                }
                it.node = it.buckets[it.index];
            }
        } while (it.node != 0);
    }
    if (self->map.handle != -1) {
        fn_82FF38E8(&self->map);
        self->map.handle = -1;
    }
    for (entry = self->entriesBegin; entry != self->entriesEnd; entry++) {
        if (entry->data != 0) {
            fn_82FA5190(lbl_831BC768, entry->data);
            entry->data = 0;
        }
        entry->size = 0;
        entry->extra = 0;
    }
    if (self->entriesBegin != 0) {
        self->entriesEnd = self->entriesBegin;
        fn_82FA5190(lbl_831BC768, self->entriesBegin);
        self->entriesBegin = 0;
        self->entriesEnd = 0;
        self->entriesCapacity = 0;
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            buffer = &self->buffers[i][j];
            if (buffer->data != 0) {
                fn_82FA5190(lbl_831BC768, buffer->data);
                buffer->data = 0;
            }
            buffer->size = 0;
            buffer->extra = 0;
        }
    }
    return 1;
}
