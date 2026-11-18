typedef struct Handler_8289AAC0 {
    void *vt;           /* 0x0 */
    int value;          /* 0x4 */
    unsigned char done; /* 0x8 */
} Handler_8289AAC0;

typedef struct Owner_8289AAC0 {
    int pad0;
    char name[0x14]; /* 0x04 */
    void *data;      /* 0x18 */
    int pad1c;
    Handler_8289AAC0 *handler; /* 0x20 */
} Owner_8289AAC0;

extern char lbl_820239B8[];
extern void *fn_8265C9E0(unsigned int size);
extern int fn_8236D750(void *data);
extern void fn_82243568(void *name, int a, int b, int c);
extern Handler_8289AAC0 *fn_8289A818(void *mem, void *data, int flag);

void fn_8289AAC0(Owner_8289AAC0 *self, unsigned char complex, int value)
{
    {
        int id = fn_8236D750(self->data);

        fn_82243568(self->name, 0, id, 0);
    }
    if (complex) {
        void *mem = fn_8265C9E0(0x38);

        self->handler = mem ? fn_8289A818(mem, self->data, 1) : 0;
    } else {
        Handler_8289AAC0 *mem = (Handler_8289AAC0 *)fn_8265C9E0(0xc);
        Handler_8289AAC0 *handler;

        if (mem != 0) {
            mem->vt = lbl_820239B8;
            handler = mem;
        } else {
            handler = 0;
        }
        self->handler = handler;
        handler->value = value;
        handler->done = 0;
    }
}
