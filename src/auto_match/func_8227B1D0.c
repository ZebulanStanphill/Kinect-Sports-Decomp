typedef struct {
    void *vtbl;
    char pad4[0xa34];
    int m_a38;
    char pada3c[0x72c];
    void *m_1168;
    int pad116c;
    char m_1170[4];
} Self;

typedef struct {
    char buf[40];
} Name;

extern void fn_82279AF0(Self *);
extern void fn_8227B968(Self *);
extern void fn_822848B8(void *);
extern void fn_82359C18(void *);
extern void fn_82536590(int *, int);
extern int fn_828647D8(Name *);
extern void fn_82864898(Name *);
extern Name *fn_82864988(Name *, const char *);
extern int lbl_821A86E8;

void fn_8227B1D0(Self *self)
{
    int h;
    Name name;

    self->vtbl = &lbl_821A86E8;
    fn_8227B968(self);
    if (self->m_1168 != 0) {
        fn_822848B8(self->m_1168);
        self->m_1168 = 0;
    }
    if (self->m_a38 != 0) {
        h = fn_828647D8(fn_82864988(&name, "Stop_sfx_experience_counter_loop"));
        fn_82864898(&name);
        fn_82536590(&h, 0);
        self->m_a38 = 0;
    }
    fn_82359C18(self->m_1170);
    fn_82279AF0(self);
}
