typedef struct Pair_82FB26C8 {
    unsigned int key;   /* 0x0 */
    unsigned int value; /* 0x4 */
} Pair_82FB26C8;

typedef struct Obj_82FB26C8 {
    char pad0[0xc4];
    unsigned int valueC4; /* 0xc4 */
    unsigned int valueC8; /* 0xc8 */
    unsigned int valueCC; /* 0xcc */
    unsigned char flagD0; /* 0xd0 */
} Obj_82FB26C8;

extern void *lbl_831BC768;
extern int fn_82FB6A10(Obj_82FB26C8 *self, unsigned char **data, unsigned int *size, int flags);
extern Pair_82FB26C8 *fn_82FA5060(void *heap, unsigned int size);
extern void fn_82FA5190(void *heap, void *p);
extern void fn_82FB2380(Obj_82FB26C8 *self, unsigned int count, Pair_82FB26C8 *pairs);

static __forceinline unsigned int ReadU32(unsigned char **data)
{
    unsigned int value = *(unsigned int *)*data;
    *data += 4;
    return value;
}

static __forceinline unsigned char ReadU8(unsigned char **data)
{
    unsigned char value = **data;
    *data += 1;
    return value;
}

int fn_82FB26C8(Obj_82FB26C8 *self, unsigned char *data, unsigned int size)
{
    int result;
    unsigned int valueCC;
    unsigned int valueC4;
    unsigned int valueC8;
    unsigned char flagD0;
    unsigned int count;
    unsigned int i;
    Pair_82FB26C8 *pairs;

    result = fn_82FB6A10(self, &data, &size, 0);
    valueCC = ReadU32(&data);
    valueC4 = ReadU32(&data);
    valueC8 = ReadU32(&data);
    flagD0 = ReadU8(&data);
    self->valueCC = valueCC;
    self->valueC4 = valueC4;
    self->valueC8 = valueC8;
    self->flagD0 = flagD0 != 0;
    count = ReadU32(&data);
    if (count != 0) {
        pairs = fn_82FA5060(lbl_831BC768, count * 8);
        if (pairs == 0) {
            return 2;
        }
        for (i = 0; i < count; i++) {
            pairs[i].key = ReadU32(&data);
            pairs[i].value = ReadU32(&data);
        }
        fn_82FB2380(self, count, pairs);
        fn_82FA5190(lbl_831BC768, pairs);
    }
    return result;
}
