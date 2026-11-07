extern unsigned __int64 __mftb();

typedef struct TimerEntry_82DC5700 {
    const char *name;
    unsigned time;
    unsigned unused;
} TimerEntry_82DC5700;

typedef struct TimerListEntry_82DC5700 {
    const char *name;
    unsigned time;
    unsigned unused;
    const char *split;
} TimerListEntry_82DC5700;

typedef struct TimerStream_82DC5700 {
    void *pad;
    char *current;
    void *pad2;
    char *end;
} TimerStream_82DC5700;

extern TimerStream_82DC5700 *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

typedef struct StepInfo_82DC5700 {
    unsigned char data[0x30];
    int a;
    int b;
    int c;
    int d;
    unsigned char pad40[8];
    void *e0;
    int e1;
    unsigned char pad50[0x10];
} StepInfo_82DC5700;

typedef struct Atom_82DC5700 {
    unsigned short type;
    char pad2[0x12];
    struct Atom_82DC5700 *next;
} Atom_82DC5700;

typedef struct Listener_82DC5700 Listener_82DC5700;
typedef struct ListenerVtbl_82DC5700 {
    void *slots[14];
    void (*callback)(Listener_82DC5700 *self, StepInfo_82DC5700 *info);
} ListenerVtbl_82DC5700;
struct Listener_82DC5700 {
    ListenerVtbl_82DC5700 *vtbl;
};

typedef struct Ref_82DC5700 {
    char pad0[0x18];
    int f18;
} Ref_82DC5700;

typedef struct Owner_82DC5700 {
    char pad0[0xa4];
    int offset;
} Owner_82DC5700;

typedef struct Data_82DC5700 {
    char pad0[0x10];
    unsigned short f10;
} Data_82DC5700;

typedef struct Instance_82DC5700 {
    char pad0[0xc];
    Listener_82DC5700 *listener;
    Data_82DC5700 *data;
    Ref_82DC5700 *refA;
    Ref_82DC5700 *refB;
} Instance_82DC5700;

typedef struct Constraint_82DC5700 {
    Instance_82DC5700 *inst;
    Owner_82DC5700 *ownerA;
    Owner_82DC5700 *ownerB;
    Atom_82DC5700 *atoms;
    char pad10[2];
    unsigned char flags;
    char pad13[9];
    int f1C;
} Constraint_82DC5700;

typedef struct Slot_82DC5700 {
    Data_82DC5700 *data;
    char pad4[0x10];
    unsigned short f14;
} Slot_82DC5700;

typedef struct Entry_82DC5700 {
    Constraint_82DC5700 *c;
    Slot_82DC5700 *slot;
} Entry_82DC5700;

typedef struct Island_82DC5700 {
    char pad0[0x30];
    int offset;
    char pad34[0x3c];
    Entry_82DC5700 *entries;
    int count;
} Island_82DC5700;

typedef struct Task_82DC5700 {
    char pad0[0x18];
    Island_82DC5700 *island;
} Task_82DC5700;

typedef struct Heap_82DC5700 Heap_82DC5700;
typedef struct HeapVtbl_82DC5700 {
    void *f0;
    void *f4;
    void (*free)(Heap_82DC5700 *self, void *p, int size);
} HeapVtbl_82DC5700;
struct Heap_82DC5700 {
    HeapVtbl_82DC5700 *vtbl;
};

typedef struct Router_82DC5700 {
    char pad0[0x10];
    Heap_82DC5700 *heap;
} Router_82DC5700;

typedef struct Sim_82DC5700 {
    char pad0[0x10];
    StepInfo_82DC5700 info;
} Sim_82DC5700;

extern void fn_82DC7928(Listener_82DC5700 *l, StepInfo_82DC5700 *info, Atom_82DC5700 *atoms, int mode);
extern Router_82DC5700 *fn_82CE5410(void);
extern void fn_82CE8E78(void *a, Task_82DC5700 *t, Task_82DC5700 *t2, int z);

void fn_82DC5700(Sim_82DC5700 *sim, void *arg, Task_82DC5700 *task)
{
    Island_82DC5700 *island = task->island;
    StepInfo_82DC5700 info = sim->info;

    if (island->count > 0) {
        int i;
        TimerStream_82DC5700 *s = KeTlsGetValue(lbl_8323B4A0);
        if (s->current < s->end) {
            TimerListEntry_82DC5700 *e = (TimerListEntry_82DC5700 *)s->current;
            e->name = "LtIntegrate";
            e->split = "StConstraintCallbacks";
            e->time = (unsigned)__mftb();
            s->current = (char *)(e + 1);
        }
        for (i = 0; i < island->count; i++) {
            Constraint_82DC5700 *c = island->entries[i].c;
            info.e0 = c->inst;
            info.e1 = c->f1C;
            info.a = c->ownerA->offset + island->offset;
            info.b = c->ownerB->offset + island->offset;
            info.c = c->inst->refA->f18;
            info.d = c->inst->refB->f18;
            if ((c->flags & 9) != 0) {
                Atom_82DC5700 *atom = c->atoms;
                Listener_82DC5700 *l = c->inst->listener;
                Data_82DC5700 *old = c->inst->data;
                Data_82DC5700 *nd;
                while (atom->type >= 0x17) {
                    atom = atom->next;
                }
                fn_82DC7928(l, &info, atom, 2);
                nd = c->inst->data;
                if (old != nd) {
                    Slot_82DC5700 *slot = island->entries[i].slot;
                    slot->data = nd;
                    slot->f14 = nd->f10;
                }
            }
            if ((c->flags & 4) != 0) {
                c->inst->listener->vtbl->callback(c->inst->listener, &info);
            }
        }
        {
            int n = island->count;
            Entry_82DC5700 *entries = island->entries;
            Heap_82DC5700 *heap = fn_82CE5410()->heap;
            heap->vtbl->free(heap, entries, n * 8);
        }
        island->entries = 0;
        island->count = 0;
        {
            TimerStream_82DC5700 *s2 = KeTlsGetValue(lbl_8323B4A0);
            if (s2->current < s2->end) {
                TimerEntry_82DC5700 *e = (TimerEntry_82DC5700 *)s2->current;
                e->name = "lt";
                e->time = (unsigned)__mftb();
                s2->current = (char *)(e + 1);
            }
        }
    }
    fn_82CE8E78(arg, task, task, 0);
}
