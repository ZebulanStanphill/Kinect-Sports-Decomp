typedef struct Owner_822A86B0 {
    char reserved[0x10];
    char *values;
} Owner_822A86B0;

extern void fn_8251F720(unsigned int *value, unsigned int enabled);

static __forceinline unsigned int HasValue_822A86B0(unsigned int *value)
{
    if (value != 0) {
        return *value != 0;
    }
    return 0;
}

void fn_822A86B0(Owner_822A86B0 *self)
{
    unsigned int offset;
    unsigned int *value;
    value = (unsigned int *)self->values;
    if (value != 0 && HasValue_822A86B0(value) > 0) {
        fn_8251F720((unsigned int *)self->values, 0);
    }
    value = (unsigned int *)(self->values + 4);
    if (value != 0 && HasValue_822A86B0(value) > 0) {
        fn_8251F720(value, 0);
    }
    for (offset = 8; offset < 0x24; offset += 4) {
        value = (unsigned int *)(offset + self->values);
        if (value != 0 && HasValue_822A86B0(value) > 0) {
            fn_8251F720(value, 0);
        }
    }
    for (offset = 0x24; offset < 0x2c; offset += 4) {
        value = (unsigned int *)(offset + self->values);
        if (value != 0 && HasValue_822A86B0(value) > 0) {
            fn_8251F720(value, 0);
        }
    }
    for (offset = 0x40; offset < 0x54; offset += 4) {
        value = (unsigned int *)(offset + self->values - 0x14);
        if (value != 0 && HasValue_822A86B0(value) > 0) {
            fn_8251F720(value, 0);
        }
        value = (unsigned int *)(offset + self->values);
        if (value != 0 && HasValue_822A86B0(value) > 0) {
            fn_8251F720(value, 0);
        }
    }
}
