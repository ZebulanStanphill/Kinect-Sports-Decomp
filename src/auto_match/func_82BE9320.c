extern int memcmp(const void *a, const void *b, unsigned int size);

typedef struct Triple_82BE9320 {
    int a;
    int b;
    int c;
} Triple_82BE9320;

typedef struct Context_82BE9320 {
    char pad0[0x98];
    Triple_82BE9320 value;
    char padA4[0x134 - 0xa4];
    int dirty;
} Context_82BE9320;

extern Context_82BE9320 *lbl_8322B22C;

void fn_82BE9320(const Triple_82BE9320 *value)
{
    if (lbl_8322B22C != 0) {
        if (value != 0) {
            if (memcmp(value, &lbl_8322B22C->value, sizeof(Triple_82BE9320)) != 0) {
                Triple_82BE9320 *dst = &lbl_8322B22C->value;
                dst->a = value->a;
                dst->b = value->b;
                dst->c = value->c;
                lbl_8322B22C->dirty = 1;
            }
        } else {
            Triple_82BE9320 *p = &lbl_8322B22C->value;
            p->a = 0;
            p->b = 0;
            p->c = 0;
        }
    }
}
