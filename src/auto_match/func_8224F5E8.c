typedef struct {
    char pad0[0xc];
    char m_c[0x50];
    void *m_5c;
} Inner;

typedef struct {
    void *vtbl;
    int pad4[2];
    char m_c[0x1c];
    void *m_28;
    Inner *m_2c;
} Self;

extern void fn_82230300(void *, int, int);
extern void fn_822315A0(void *);
extern void fn_8224F690(void *);
extern void fn_82521120(void *);
extern void fn_8265CA20(void *);
extern int lbl_82197E2C;
extern int lbl_821C2CCC;

void fn_8224F5E8(Self *self)
{
    void *p;
    Inner *q;

    p = self->m_28;
    self->vtbl = &lbl_82197E2C;
    if (p != 0) {
        fn_8224F690(p);
        fn_8265CA20(p);
        self->m_28 = 0;
    }
    if (self->m_2c != 0) {
        fn_82521120(self->m_2c);
        q = self->m_2c;
        if (q != 0) {
            if (q->m_5c != 0) {
                fn_822315A0(q->m_5c);
            }
            fn_8224F690(q->m_c);
            fn_8265CA20(q);
        }
        self->m_2c = 0;
    }
    self->vtbl = &lbl_821C2CCC;
    fn_82230300(self->m_c, 1, 0);
}
