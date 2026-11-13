typedef struct Source_82C28E48 {
    int a;
    int b;
    int c;
    int pad;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
} Source_82C28E48;

typedef struct Settings_82C28E48 {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
} Settings_82C28E48;

typedef struct Quad_82C28E48 {
    int a;
    int b;
    int c;
    int d;
} Quad_82C28E48;

typedef struct Node_82C28E48 {
    int used;                  /* 0x0 */
    int pad4;
    int count;                 /* 0x8 */
    int padc;
    Quad_82C28E48 *extra;      /* 0x10 */
    int extraCount;            /* 0x14 */
    char pad18[0x18];
    void *heap;                /* 0x30 */
    int id;                    /* 0x34 */
    char pad38[0x18];
    Settings_82C28E48 source;  /* 0x50 */
    char pad78[0x10];
    int size;                  /* 0x88 */
    char pad8c[4];
} Node_82C28E48;

typedef struct Owner_82C28E48 {
    char pad[0x2c];
    Node_82C28E48 *node;       /* 0x2c */
} Owner_82C28E48;

extern int fn_82C10AD0(void *heap, int tag, unsigned int size, void *out);
extern void fn_82C10B28(void *heap, int tag, void *ptr);
extern void *memset(void *dst, int value, unsigned int size);

int fn_82C28E48(Source_82C28E48 *source, int unused, int id, void *heap, Owner_82C28E48 *owner)
{
    Node_82C28E48 *node = 0;
    int hr = fn_82C10AD0(heap, 0x1e, 0x90, &node);

    if (hr >= 0) {
        memset(node, 0, 0x90);
        node->used = 1;
        node->id = id;
        node->heap = heap;
        node->source.a = source->a;
        node->source.b = source->b;
        node->source.c = source->c;
        node->source.d = source->d;
        node->source.e = source->e;
        node->source.f = source->f;
        node->source.g = source->g;
        node->source.h = source->h;
        node->source.i = source->i;
        node->source.j = source->j;
        node->extraCount = 0;
        node->count = 0;
        node->size = source->j * 5;
        hr = fn_82C10AD0(heap, 0x1e, 0x10, &node->extra);
        if (hr >= 0) {
            Quad_82C28E48 *extra = node->extra;
            extra->a = 0;
            extra->b = 0;
            extra->c = 0;
            extra->d = 0;
            owner->node = node;
        }
    }
    if (hr < 0 && node != 0)
        fn_82C10B28(heap, 0x1e, &node);
    return hr;
}
