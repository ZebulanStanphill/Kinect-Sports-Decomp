typedef struct Entry_82878010 Entry_82878010;

typedef struct EntryVtbl_82878010 {
    void (*destroy)(Entry_82878010 *self, int flags);
} EntryVtbl_82878010;

struct Entry_82878010 {
    EntryVtbl_82878010 *vt;
    unsigned char variant[0x2C];
};

typedef struct EntryVector_82878010 {
    Entry_82878010 *begin;
    Entry_82878010 *end;
    Entry_82878010 *cap;
} EntryVector_82878010;

typedef struct Reverb_82878010 {
    int x0;
    EntryVector_82878010 entries;
} Reverb_82878010;

extern char lbl_832116F8[];
extern unsigned char fn_828647C0(void *a, void *key);
extern unsigned int fn_82811400(void *buf, int n);
extern void *fn_82811080(void *pool, int size, unsigned int arg);
extern Entry_82878010 *fn_82877938(void *self, void *variant, int flag, float gain);
extern void fn_82878A20(EntryVector_82878010 *self, const Entry_82878010 *element);

int fn_82878010(Reverb_82878010 *self, void *variant, int flag, float gain)
{
    Entry_82878010 *p;
    Entry_82878010 *end = self->entries.end;
    unsigned int tag[6];
    void *mem;
    Entry_82878010 *entry;

    for (p = self->entries.begin; p != end; p++) {
        if (fn_828647C0(p->variant, variant)) {
            break;
        }
    }
    if (p != self->entries.end) {
        return (int)0xA0320000;
    }
    mem = fn_82811080(lbl_832116F8, 0x30, fn_82811400(tag, 4));
    if (mem != 0) {
        entry = fn_82877938(mem, variant, flag, gain);
    } else {
        entry = 0;
    }
    fn_82878A20(&self->entries, entry);
    if (entry != 0) {
        entry->vt->destroy(entry, 1);
    }
    return 0x20330000;
}
