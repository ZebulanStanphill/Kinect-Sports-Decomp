extern void *fn_82540308(int index);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_826230E8(void *mem, void *owner);
extern char lbl_821CAD88[];

typedef struct Object_82623520 {
    void *vtable;      /* 0x00 */
    int arg1;          /* 0x04 */
    int arg2;          /* 0x08 */
    int arg3;          /* 0x0c */
    void *context;     /* 0x10 */
    void *children[3]; /* 0x14 */
} Object_82623520;

Object_82623520 *fn_82623520(Object_82623520 *self, int arg1, int arg2, int arg3, void *owner)
{
    int i;
    void *mem;

    self->arg1 = arg1;
    self->arg2 = arg2;
    self->arg3 = arg3;
    self->vtable = lbl_821CAD88;
    self->context = fn_82540308(0);
    if (owner != 0) {
        for (i = 0; i < 3; i++) {
            mem = fn_8265C9E0(0x20);
            self->children[i] = mem != 0 ? fn_826230E8(mem, owner) : 0;
        }
    } else {
        for (i = 0; i < 3; i++) {
            self->children[i] = 0;
        }
    }
    return self;
}
