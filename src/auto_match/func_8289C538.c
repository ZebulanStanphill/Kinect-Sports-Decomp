typedef struct Handler_8289C538 Handler_8289C538;

typedef struct HandlerVtbl_8289C538 {
    void *slots[10];
    void (*Configure)(Handler_8289C538 *self, int key, void *name); /* 0x28 */
} HandlerVtbl_8289C538;

struct Handler_8289C538 {
    HandlerVtbl_8289C538 *vt; /* 0x0 */
    int value;                /* 0x4 */
    unsigned char done;       /* 0x8 */
    int modes[4];             /* 0xc */
};

typedef struct Owner_8289C538 {
    int pad0;
    char name[0x14]; /* 0x04 */
    void *data;      /* 0x18 */
    int pad1c;
    Handler_8289C538 *handler; /* 0x20 */
    unsigned char simple;      /* 0x24 */
} Owner_8289C538;

extern char lbl_820239B8[];
extern void *fn_8265C9E0(unsigned int size);
extern void fn_8289C1A0(Owner_8289C538 *self);
extern int fn_8240D928(int value);
extern unsigned char fn_82897BA8(void *data);
extern void fn_82897BE0(void *data);
extern Handler_8289C538 *fn_8289A818(void *mem, void *data, int flag);

void fn_8289C538(Owner_8289C538 *self, unsigned char complex, int value)
{
    fn_8289C1A0(self);
    if (complex) {
        void *mem = fn_8265C9E0(0x38);
        Handler_8289C538 *handler;

        handler = mem ? fn_8289A818(mem, self->data, 0) : 0;
        self->handler = handler;
        handler->vt->Configure(handler, fn_8240D928(value), self->name);
        if (fn_82897BA8(self->data)) {
            int i;

            for (i = 0; i < 4; i++) {
                handler->modes[i] = 3;
            }
        }
        self->simple = 0;
    } else {
        Handler_8289C538 *mem = (Handler_8289C538 *)fn_8265C9E0(0xc);
        Handler_8289C538 *handler;

        if (mem != 0) {
            mem->vt = (HandlerVtbl_8289C538 *)lbl_820239B8;
            handler = mem;
        } else {
            handler = 0;
        }
        self->handler = handler;
        handler->value = value;
        handler->done = 0;
        fn_82897BE0(self->data);
        self->simple = 1;
    }
}
