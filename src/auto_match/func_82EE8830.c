typedef struct Link_82EE8830 {
    struct Link_82EE8830 *next;
    struct Link_82EE8830 *prev;
} Link_82EE8830;

typedef struct {
    int unk0;
    Link_82EE8830 head;
} List_82EE8830;

typedef struct {
    int unk0;
    Link_82EE8830 link;
} Entry_82EE8830;

typedef struct {
    char pad[0x50];
    List_82EE8830 list;
    char pad5c[0xa4 - 0x5c];
    unsigned int value;
} Owner_82EE8830;

extern int fn_82EE82A0(Entry_82EE8830 *e, unsigned int value);

static __forceinline Link_82EE8830 *List_82EE8830_first(List_82EE8830 *l)
{
    return l->head.next != &l->head ? l->head.next : 0;
}

int fn_82EE8830(Owner_82EE8830 *self, unsigned int value)
{
    Link_82EE8830 *l;
    int hr;

    self->value = value;
    hr = 0;
    l = List_82EE8830_first(&self->list);
    while (l != 0) {
        Link_82EE8830 *cur = l;
        Entry_82EE8830 *e;
        l = l->next != &self->list.head ? l->next : 0;
        e = (Entry_82EE8830 *)((char *)cur - 4);
        if (e != 0) {
            hr = fn_82EE82A0(e, self->value);
            if (hr < 0)
                return hr;
        }
    }
    return hr;
}
