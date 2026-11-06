typedef struct Link_82EE87A0 {
    struct Link_82EE87A0 *next;
    struct Link_82EE87A0 *prev;
} Link_82EE87A0;

typedef struct {
    int unk0;
    Link_82EE87A0 head;
} List_82EE87A0;

typedef struct {
    int unk0;
    Link_82EE87A0 link;
    int unkC;
    int unk10;
    unsigned int id;
    int found;
} Entry_82EE87A0;

typedef struct {
    char pad[0x50];
    List_82EE87A0 list;
    char lock[4];
} Owner_82EE87A0;

extern void fn_82E50CB8(void *lock);
extern void fn_82E50F10(void *lock);
extern unsigned int fn_82A1BB18(void);

static __forceinline Link_82EE87A0 *List_82EE87A0_first(List_82EE87A0 *l)
{
    return l->head.next != &l->head ? l->head.next : 0;
}

void fn_82EE87A0(Owner_82EE87A0 *self)
{
    Link_82EE87A0 *l;
    fn_82E50CB8(self->lock);
    l = List_82EE87A0_first(&self->list);
    while (l != 0) {
        Entry_82EE87A0 *e = (Entry_82EE87A0 *)((char *)l - 4);
        unsigned int id = e->id;
        l = l->next != &self->list.head ? l->next : 0;
        if (id == fn_82A1BB18()) {
            e->found = 1;
            break;
        }
    }
    fn_82E50F10(self->lock);
}
