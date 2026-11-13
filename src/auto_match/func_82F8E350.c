typedef struct Object_82F8E350 {
    void *vtable0;
    void *vtable4;
    void *vtable8;
    int pad0c[0x1a];
    int f74;
    int pad78[7];
    int f94;
    int f98;
} Object_82F8E350;

extern unsigned int lbl_8216B79C;
extern unsigned int lbl_8216B72C;
extern unsigned int lbl_8216B770;
extern void *fn_82F90840(void *);

Object_82F8E350 *fn_82F8E350(Object_82F8E350 *p)
{
    fn_82F90840(p);
    p->vtable0 = &lbl_8216B79C;
    p->vtable4 = &lbl_8216B72C;
    p->vtable8 = &lbl_8216B770;
    p->f74 = 0;
    p->f94 = 0;
    p->f98 = 0;
    return p;
}
