extern int memcmp(const void *a, const void *b, unsigned int size);

typedef struct Quad_82BE9220 {
    int a;
    int b;
    int c;
    int d;
} Quad_82BE9220;

typedef struct Context_82BE9220 {
    char pad0[0xbc];
    Quad_82BE9220 value;
    char padCC[0x134 - 0xcc];
    int dirty;
} Context_82BE9220;

extern Context_82BE9220 *lbl_8322B22C;

void fn_82BE9220(const Quad_82BE9220 *value)
{
    if (lbl_8322B22C != 0) {
        if (value != 0) {
            if (memcmp(value, &lbl_8322B22C->value, sizeof(Quad_82BE9220)) != 0) {
                Quad_82BE9220 *dst = &lbl_8322B22C->value;
                dst->a = value->a;
                dst->b = value->b;
                dst->c = value->c;
                dst->d = value->d;
                lbl_8322B22C->dirty = 1;
            }
        } else {
            Quad_82BE9220 *p = &lbl_8322B22C->value;
            p->a = 0;
            p->b = 0;
            p->c = 0;
            p->d = 0;
        }
    }
}
