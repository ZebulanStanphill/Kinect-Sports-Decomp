typedef struct V20_8302C2A0 {
    int v[5];
} V20_8302C2A0;

typedef struct V8_8302C2A0 {
    int v[2];
} V8_8302C2A0;

typedef struct Record_8302C2A0 {
    int key;        /* 0x00 */
    int a;          /* 0x04 */
    V20_8302C2A0 s; /* 0x08 */
    V8_8302C2A0 q;  /* 0x1c */
    unsigned int b; /* 0x24 */
    int arg;        /* 0x28 */
} Record_8302C2A0;

typedef struct Item_8302C2A0 {
    int m0;
} Item_8302C2A0;

typedef struct Owner_8302C2A0 {
    char pad0[0x80];
    unsigned short y; /* 0x80 */
    unsigned short z; /* 0x82 */
    unsigned short x; /* 0x84 */
    char pad86[0x2];
    Item_8302C2A0 item; /* 0x88 */
} Owner_8302C2A0;

extern int fn_82FF9C88(unsigned short **data, unsigned int *size, Record_8302C2A0 *out);
extern void fn_83008748(Item_8302C2A0 *self, int a, V20_8302C2A0 s, V8_8302C2A0 q);
extern void fn_830087C8(Item_8302C2A0 *self, int key, int a, int b, int arg);
extern int fn_83007AE8(Owner_8302C2A0 *self, unsigned short **data, unsigned int *size, unsigned char skip);

static __forceinline unsigned short ReadU16_8302C2A0(unsigned short **cursor)
{
    unsigned short value = **cursor;

    (*cursor)++;
    return value;
}

void fn_8302C2A0(Owner_8302C2A0 *self, unsigned short *data, unsigned int size, int unused,
                 unsigned char skip)
{
    Record_8302C2A0 record;
    int result;

    data += 2;
    if (fn_82FF9C88(&data, &size, &record) == 1) {
        if (record.b == 0) {
            fn_83008748(&self->item, record.a, record.s, record.q);
        } else {
            fn_830087C8(&self->item, record.key, record.a, record.b, record.arg);
        }
        result = fn_83007AE8(self, &data, &size, skip);
        if (skip == 0 && result == 1) {
            self->x = ReadU16_8302C2A0(&data);
            self->y = ReadU16_8302C2A0(&data);
            self->z = ReadU16_8302C2A0(&data);
        }
    }
}
