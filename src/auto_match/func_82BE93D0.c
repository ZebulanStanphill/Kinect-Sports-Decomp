extern int memcmp(const void *a, const void *b, unsigned int size);

typedef struct Triple_82BE93D0 {
    int a;
    int b;
    int c;
} Triple_82BE93D0;

typedef struct Context_82BE93D0 {
    char pad0[0xa4];
    Triple_82BE93D0 value;
    char padB0[0x134 - 0xb0];
    int dirty;
} Context_82BE93D0;

extern Context_82BE93D0 *lbl_8322B22C;

void fn_82BE93D0(const Triple_82BE93D0 *value)
{
    if (lbl_8322B22C != 0) {
        if (value != 0) {
            if (memcmp(value, &lbl_8322B22C->value, sizeof(Triple_82BE93D0)) != 0) {
                Triple_82BE93D0 *dst = &lbl_8322B22C->value;
                dst->a = value->a;
                dst->b = value->b;
                dst->c = value->c;
                lbl_8322B22C->dirty = 1;
            }
        } else {
            Triple_82BE93D0 *p = &lbl_8322B22C->value;
            p->a = 0;
            p->b = 0;
            p->c = 0;
        }
    }
}
