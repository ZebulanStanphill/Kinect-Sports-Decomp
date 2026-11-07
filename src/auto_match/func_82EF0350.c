typedef struct Entry8_82EF0350 {
    unsigned int len;
    unsigned int extra;
} Entry8_82EF0350;

typedef struct Entry16_82EF0350 {
    unsigned int a;
    unsigned int b;
    unsigned int len;
    unsigned int d;
} Entry16_82EF0350;

typedef struct Obj_82EF0350 {
    char pad0[0xc];
    void *handle;                 /* 0x0c */
    char pad10[0x10];
    unsigned __int64 size;        /* 0x20 */
    char pad28[0x20];
    char list2[0x1ac - 0x48];     /* 0x48 */
    unsigned int count2;          /* 0x1ac */
    char list1[0x26c - 0x1b0];    /* 0x1b0 */
    unsigned int count1;          /* 0x26c */
} Obj_82EF0350;

extern int fn_82EEFC00(void *list, unsigned int index, Entry16_82EF0350 **out);
extern int fn_82EEFD30(void *list, unsigned int index, Entry8_82EF0350 **out);

int fn_82EF0350(Obj_82EF0350 *self, unsigned __int64 *outA, unsigned __int64 *outB)
{
    unsigned __int64 total;
    unsigned int i;
    void *p;
    Entry8_82EF0350 a;
    Entry16_82EF0350 b;

    if (self->handle == 0) {
        return (int)0xC00D36B6;
    }
    total = 0x2c;
    for (i = 0; i < self->count1; i++) {
        fn_82EEFD30(self->list1, i, (Entry8_82EF0350 **)&p);
        a = *(Entry8_82EF0350 *)p;
        total = total + (a.len & 0x7fffffff) * 2 + 2;
    }
    for (i = 0; i < self->count2; i++) {
        fn_82EEFC00(self->list2, i, (Entry16_82EF0350 **)&p);
        b = *(Entry16_82EF0350 *)p;
        total = total + (b.len & 0x7fffffff) * 2 + 8;
    }
    if (outA != 0) {
        *outA = total;
    }
    if (outB != 0) {
        *outB = total;
    }
    self->size = total;
    return 0;
}
