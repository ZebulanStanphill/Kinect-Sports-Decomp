typedef struct Entry_82EF0770 {
    int unk0;
    unsigned short *str;
} Entry_82EF0770;

typedef struct Obj_82EF0770 {
    unsigned char pad0[0x1b0];
    unsigned char table[0x26c - 0x1b0];
    unsigned int count;
} Obj_82EF0770;

extern int fn_82EEFD30(void *table, unsigned int index, Entry_82EF0770 **out);
extern unsigned int fn_82F64CE0(const unsigned short *s);
extern void *memcpy(void *dst, const void *src, unsigned int n);

int fn_82EF0770(Obj_82EF0770 *self, unsigned short index, unsigned short *buf, unsigned short *size)
{
    Entry_82EF0770 *entry;
    unsigned short *str;
    unsigned short len;

    if (index >= self->count) {
        return 0x80070057;
    }
    if (size == 0) {
        return 0x80070057;
    }
    if (*size != 0 && buf == 0) {
        return 0x80070057;
    }
    fn_82EEFD30(self->table, index, &entry);
    len = 0;
    str = entry->str;
    if (str != 0) {
        len = (unsigned short)(fn_82F64CE0(str) + 1);
    }
    if (*size < len && buf != 0) {
        *size = len;
        return 0xC00D36B1;
    }
    *size = len;
    if (str != 0) {
        if (buf != 0) {
            memcpy(buf, str, len * 2);
        }
    } else if (buf != 0) {
        *buf = 0;
    }
    return 0;
}
