typedef int (*VFn_82DADF68)(void *self, int arg);

typedef struct Vtbl_82DADF68 {
    void *slot0;
    void *slot1;
    void *slot2;
    void *slot3;
    VFn_82DADF68 BrokenCb;
} Vtbl_82DADF68;

typedef struct Listener_82DADF68 {
    Vtbl_82DADF68 *vt;
} Listener_82DADF68;

typedef struct List_82DADF68 {
    Listener_82DADF68 **data;
    int count;
} List_82DADF68;

typedef struct Obj_82DADF68 {
    char pad[0x144];
    List_82DADF68 list;
} Obj_82DADF68;

typedef struct ProfEntry_82DADF68 {
    const char *name;
    unsigned int time;
    unsigned int extra;
} ProfEntry_82DADF68;

typedef struct ProfBuf_82DADF68 {
    int unk0;
    ProfEntry_82DADF68 *cur;
    int unk8;
    ProfEntry_82DADF68 *end;
} ProfBuf_82DADF68;

extern void *KeTlsGetValue(unsigned int index);
extern unsigned __int64 __mftb(void);
extern int fn_82DAD5A8(List_82DADF68 *list);
extern unsigned int lbl_8323B4A0;

static __forceinline void ProfMark_82DADF68(const char *name)
{
    ProfBuf_82DADF68 *t = (ProfBuf_82DADF68 *)KeTlsGetValue(lbl_8323B4A0);
    ProfEntry_82DADF68 *e = t->cur;
    if (e < t->end) {
        e->name = name;
        e->time = (unsigned int)__mftb();
        t->cur = e + 1;
    }
}

void fn_82DADF68(Obj_82DADF68 *p, int arg)
{
    List_82DADF68 *list = &p->list;
    int i;

    for (i = list->count - 1; i >= 0; i--) {
        Listener_82DADF68 *l = list->data[i];
        if (l != 0) {
            ProfMark_82DADF68("TtconBrokenCb");
            l->vt->BrokenCb(l, arg);
            ProfMark_82DADF68("Et");
        }
    }
    fn_82DAD5A8(list);
}
