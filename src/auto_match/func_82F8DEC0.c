typedef struct Object_82F8DEC0 {
    void *vtable0;
    void *vtable4;
    void *vtable8;
    int pad[0x24];
    int f9c;
} Object_82F8DEC0;

extern unsigned int lbl_8216B700;
extern unsigned int lbl_8216B72C;
extern unsigned int lbl_8216B750;
extern void *fn_82F8E350(void *);

Object_82F8DEC0 *fn_82F8DEC0(Object_82F8DEC0 *p)
{
    fn_82F8E350(p);
    p->vtable0 = &lbl_8216B750;
    p->vtable4 = &lbl_8216B72C;
    p->vtable8 = &lbl_8216B700;
    p->f9c = 0;
    return p;
}
