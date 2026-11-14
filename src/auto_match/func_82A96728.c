typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    unsigned int u[4];
} __vector4;

typedef struct Fields_82A96728 {
    char pad[12];
    unsigned int index[4], mask[4], shift[4];
} Fields_82A96728;

extern void fn_82AA7710(void *dst, const void *src, unsigned int format);

void fn_82A96728(unsigned int *data, const Fields_82A96728 *fields, __vector4 input)
{
    unsigned int values[4];
    unsigned int value;
    unsigned int result;
    int i;
    *(__vector4 *)values = input;
    for (i = 0; i < 4; i++) {
        value = (unsigned int)((values[i] << fields->shift[i]) & fields->mask[i]);
        fn_82AA7710(&result, &value, 0x40001);
        data[fields->index[i]] |= result;
    }
}
