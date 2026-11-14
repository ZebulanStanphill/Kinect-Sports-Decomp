typedef struct Owner_82358A60 {
    char pad0[0x2c];
    int count;
} Owner_82358A60;

typedef struct Item_82358A60 {
    char pad0[0x10];
    Owner_82358A60 *owner;
} Item_82358A60;

typedef struct Entry_82358A60 {
    Item_82358A60 *item;
    int extra;
} Entry_82358A60;

typedef struct Self_82358A60 {
    char pad0[4];
    void *session;
    char pad8[0x30 - 8];
    Entry_82358A60 *begin;
    Entry_82358A60 *end;
} Self_82358A60;

typedef struct Inst_82358A60 {
    char pad0[4];
    unsigned char active;
} Inst_82358A60;

extern Inst_82358A60 *fn_82250A18(void);
extern unsigned char fn_828AD740(void *session);
extern void fn_82366AE8(Item_82358A60 *item, int state);
extern Inst_82358A60 *lbl_832975B0;

static __forceinline Inst_82358A60 *GetInst_82358A60(void)
{
    return lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
}

void fn_82358A60(Self_82358A60 *self)
{
    Entry_82358A60 *e;

    for (e = self->begin; e != self->end; e++) {
        unsigned char enabled = 1;
        int count = e->item->owner->count;
        if (GetInst_82358A60()->active) {
            if (fn_828AD740(self->session))
                enabled = count == 0;
            else
                enabled = count > 0;
        }
        fn_82366AE8(e->item, enabled);
    }
}
