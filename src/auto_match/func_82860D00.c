typedef struct Object_82860D00 {
    unsigned int field0;
    unsigned int field4;
    unsigned int field8;
    unsigned int fieldC;
    unsigned int field10;
    unsigned int field14;
    char pad18[8];
    char sub20[0x40];
    char sub60[0x40];
    char subA0[0x40];
    char padE0[0x1D0 - 0xE0];
} Object_82860D00;

void *memset(void *dst, int value, unsigned int size);
extern void fn_8280ACD8(void *p);

void fn_82860D00(Object_82860D00 *self)
{
    memset(self, 0, sizeof(Object_82860D00));
    fn_8280ACD8(self->sub20);
    fn_8280ACD8(self->sub60);
    fn_8280ACD8(self->subA0);
    self->field8 = 1;
    self->fieldC = 1;
    self->field10 = 0;
    self->field14 = 0;
}
