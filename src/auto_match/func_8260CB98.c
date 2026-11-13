typedef struct Obj_8260CB98 Obj_8260CB98;
typedef struct Vtbl_8260CB98 {
    void *slots[13];
    void (*f34)(Obj_8260CB98 *self, void *item, int flags);
} Vtbl_8260CB98;
struct Obj_8260CB98 {
    Vtbl_8260CB98 *vt;
    char pad4[0xc8 - 4];
    char map[0x1a0 - 0xc8];
    char cs[0x1c];
};

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_827D96A0(void *item);
extern unsigned __int64 fn_827D9718(void *item);
extern void fn_827D9720(void *entry, unsigned __int64 *value);
extern void *fn_827DDDD8(void *map, int *key);

void fn_8260CB98(Obj_8260CB98 *self, void *item)
{
    void *entry;
    int key;
    unsigned __int64 value;

    RtlEnterCriticalSection(self->cs);
    key = fn_827D96A0(item);
    entry = fn_827DDDD8(self->map, &key);
    if (entry != 0) {
        value = fn_827D9718(item);
        fn_827D9720(entry, &value);
    } else {
        self->vt->f34(self, item, 0);
    }
    RtlLeaveCriticalSection(self->cs);
}
