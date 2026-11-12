typedef struct Script_82EF0858 {
    unsigned int time;
    unsigned short typeIndex;
    unsigned short pad;
    unsigned int len;
    unsigned short *str;
} Script_82EF0858;

typedef struct Obj_82EF0858 {
    unsigned char pad0[0x48];
    unsigned char scripts[0x1ac - 0x48];
    unsigned int scriptCount;
} Obj_82EF0858;

extern int fn_82EEFC00(void *list, unsigned int index, Script_82EF0858 **out);
extern unsigned int fn_82F64CE0(const unsigned short *s);
extern void *memcpy(void *dst, const void *src, unsigned int n);

int fn_82EF0858(Obj_82EF0858 *self, unsigned short index, unsigned int *time, unsigned short *typeIndex,
                unsigned short *buf, unsigned short *size)
{
    Script_82EF0858 *p;
    Script_82EF0858 e;
    unsigned short *str;
    unsigned short len;

    if (index >= self->scriptCount) {
        return 0x80070057;
    }
    if (time == 0 || typeIndex == 0 || size == 0 || (*size != 0 && buf == 0)) {
        return 0x80070057;
    }
    fn_82EEFC00(self->scripts, index, &p);
    e = *p;
    str = e.str;
    *time = e.time;
    *typeIndex = e.typeIndex;
    if (str != 0) {
        len = (unsigned short)(fn_82F64CE0(str) + 1);
    } else {
        len = 1;
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
