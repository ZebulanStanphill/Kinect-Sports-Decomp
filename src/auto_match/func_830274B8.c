typedef struct Elem_830274B8 {
    void *ptr;
    unsigned int value;
    float x;
    float y;
} Elem_830274B8;

typedef struct Block_830274B8 {
    unsigned char data[16];
} Block_830274B8;

typedef struct Pair_830274B8 {
    unsigned int index;
    unsigned int value;
} Pair_830274B8;

typedef struct Obj_830274B8 {
    unsigned char pad[0x3c];
    Block_830274B8 *blocks;
    unsigned int blockCount;
    Elem_830274B8 *elems;
    unsigned int elemCount;
} Obj_830274B8;

extern void *lbl_831BC768;
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_82FA5190(void *heap, void *p);
extern void fn_82A1DDC0(void *dst, const void *src, unsigned int size);
extern void fn_830273D8(Obj_830274B8 *o);

int fn_830274B8(Obj_830274B8 *o, const void *src, unsigned int n,
                Pair_830274B8 *pairs, unsigned int m)
{
    int result = 1;
    unsigned int i;
    unsigned int idx;
    Block_830274B8 *a;
    Elem_830274B8 *b;

    if (o->blocks != 0) {
        fn_82FA5190(lbl_831BC768, o->blocks);
        o->blocks = 0;
    }
    if (o->elems != 0) {
        fn_82FA5190(lbl_831BC768, o->elems);
        o->elems = 0;
    }
    o->blockCount = 0;
    o->elemCount = 0;
    if (n != 0 && m != 0 && src != 0 && pairs != 0) {
        a = (Block_830274B8 *)fn_82FA5060(lbl_831BC768, n * 16);
        o->blocks = a;
        if (a != 0) {
            fn_82A1DDC0(a, src, n * 16);
            o->blockCount = n;
            b = (Elem_830274B8 *)fn_82FA5060(lbl_831BC768, m * 16);
            o->elems = b;
            if (b != 0) {
                o->elemCount = m;
                for (i = 0; i < m; i++) {
                    o->elems[i].value = pairs[i].value;
                    idx = pairs[i].index;
                    if (idx >= n) {
                        result = 2;
                        break;
                    }
                    o->elems[i].ptr = &o->blocks[idx];
                    o->elems[i].x = 0.0f;
                    o->elems[i].y = 0.0f;
                }
                goto done;
            }
        }
        result = 0x34;
    } else {
        result = 0x1f;
    }
done:
    fn_830273D8(o);
    return result;
}
