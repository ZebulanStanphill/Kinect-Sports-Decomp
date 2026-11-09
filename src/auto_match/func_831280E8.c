typedef struct Object_8320A3FC {
    unsigned int words[9];
    unsigned int count;
    unsigned int pad;
} Object_8320A3FC;

extern Object_8320A3FC lbl_8320A3FC;
extern void *fn_82813350(Object_8320A3FC *self, unsigned int size);
extern void fn_831400C8(void);
extern int atexit(void (*fn)(void));

void fn_831280E8(void)
{
    fn_82813350(&lbl_8320A3FC, 0x1000);
    lbl_8320A3FC.count = 0;
    atexit(fn_831400C8);
}
