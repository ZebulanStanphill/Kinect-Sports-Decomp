typedef struct C {
    char pad0[0xc];
    struct B *m_c;
    char pad10[4];
    char m_14[4];
} C;

typedef struct B {
    char pad0[0x118];
    C *m_118;
    char pad11c[0x158];
    int m_274;
} B;

typedef struct {
    char pad0[0x4c];
    float m_4c;
} D;

typedef struct {
    char pad0[0x664];
    void *m_664;
} E;

typedef struct {
    char pad0[0x24];
    D *m_24;
    char pad28[0x2c];
    B *m_54;
    E *m_58;
    char pad5c[0x20];
    int m_7c;
    int m_80;
    char pad84[0x58];
    float m_dc;
} Self;

extern int fn_8236FDE0(B *);
extern void fn_823807F0(void *, int);
extern void fn_825114C8(void *, int);

void fn_822D85E0(Self *self)
{
    B *b;

    fn_825114C8(self->m_54->m_118->m_14, 0x17);
    self->m_54->m_274 = 0;
    b = self->m_54->m_118->m_c;
    if (b != 0) {
        b->m_118 = 0;
    }
    self->m_24->m_4c = self->m_dc;
    if (self->m_7c != 0 && self->m_80 == 0 && fn_8236FDE0(self->m_54) != 0) {
        fn_823807F0(self->m_58->m_664, 0x18);
    }
}
