typedef struct Record_82BF1318 Record_82BF1318;
typedef struct RecordVtbl_82BF1318 {
    void (*destroy)(Record_82BF1318 *self, int flags);
} RecordVtbl_82BF1318;
struct Record_82BF1318 {
    RecordVtbl_82BF1318 *vt;
};

typedef struct Owner_82BF1318 {
    char pad0[0x18];
    unsigned int id;
} Owner_82BF1318;

typedef struct Session_82BF1318 {
    char pad0[0x10];
    int status;
    char pad14[0x20];
    Owner_82BF1318 *owner;
    char pad38[4];
    char list[1];
} Session_82BF1318;

extern void *fn_82BE56B0(unsigned int size);
extern Record_82BF1318 *fn_82BF8E90(void *mem, Session_82BF1318 *s, unsigned int id, int arg);
extern void *fn_82BEB628(void *mem, void *item);
extern int fn_82BE52B8(void *list, void *node);
extern int fn_82BE5240();

Record_82BF1318 *fn_82BF1318(Session_82BF1318 *s, int arg)
{
    void *mem;
    Record_82BF1318 *rec;
    void *node;

    mem = fn_82BE56B0(0xf8);
    if (mem != 0) {
        rec = fn_82BF8E90(mem, s, s->owner != 0 ? s->owner->id : 0, arg);
    } else {
        rec = 0;
    }
    if (rec == 0) {
        fn_82BE5240(s, 0x65, "CMassiveRecord in RecordCreate");
        s->status = 0;
        return 0;
    }
    mem = fn_82BE56B0(0xc);
    if (mem != 0) {
        node = fn_82BEB628(mem, rec);
    } else {
        node = 0;
    }
    if (node == 0) {
        fn_82BE5240(s, 0x65, "CMassiveListNode in RecordCreate");
        s->status = 0;
        rec->vt->destroy(rec, 1);
        return 0;
    }
    fn_82BE52B8(s->list, node);
    return rec;
}
