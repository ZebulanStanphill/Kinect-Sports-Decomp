typedef struct String_822376D8 {
    unsigned char data[0x1c];
} String_822376D8;

typedef struct Options_822376D8 {
    unsigned char flags[8];
} Options_822376D8;

typedef struct Desc_822376D8 {
    int id;                   /* 0x00 */
    int kind;                 /* 0x04 */
    Options_822376D8 options; /* 0x08 */
    String_822376D8 name;     /* 0x10 */
    void *create;             /* 0x2c */
    void *destroy;            /* 0x30 */
} Desc_822376D8;

extern void *fn_8223B688(void *dst, const void *src);
extern void fn_82230300(void *string, int built, int size);
extern void fn_822381A8(void *result, int id, Desc_822376D8 *desc);
extern void fn_82238148(void);
extern void fn_8224AB50(void);

void *fn_822376D8(void *result, int id, int kind, const String_822376D8 *name, unsigned char option2,
                  unsigned char option5, unsigned char option6, unsigned char option7)
{
    Options_822376D8 options;
    String_822376D8 nameCopy;
    Desc_822376D8 desc;
    void *copy;

    options.flags[0] = 1;
    options.flags[1] = 1;
    options.flags[2] = option2;
    options.flags[3] = 0;
    options.flags[4] = 1;
    options.flags[5] = option5;
    options.flags[6] = option6;
    options.flags[7] = option7;
    copy = fn_8223B688(&nameCopy, name);
    desc.id = id;
    desc.kind = kind;
    desc.options = options;
    fn_8223B688(&desc.name, copy);
    desc.create = (void *)fn_82238148;
    desc.destroy = (void *)fn_8224AB50;
    fn_82230300(copy, 1, 0);
    fn_822381A8(result, id, &desc);
    fn_82230300(&desc.name, 1, 0);
    return result;
}
