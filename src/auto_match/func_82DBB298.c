typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern unsigned __int64 __mftb();
typedef struct { const char *name; unsigned time, unused; } TimerEntry;
typedef struct { void *pad; TimerEntry *current; void *pad2; TimerEntry *end; } TimerStream;
extern TimerStream *KeTlsGetValue(unsigned int);
extern unsigned int lbl_8323B4A0;

static void timer(const char *name)
{
  TimerStream *stream = KeTlsGetValue(lbl_8323B4A0);
  if (stream->current < stream->end) {
    TimerEntry *entry = stream->current;
    entry->name = name;
    entry->time = (unsigned)__mftb();
    stream->current = entry + 1;
  }
}

typedef struct Item_82DBB298 {
    short size;
    char pad2[0x10 - 2];
    short f10;
    char pad12[0x20 - 0x12];
    __vector4 a;
    __vector4 b;
} Item_82DBB298;

typedef struct Tgt_82DBB298 { struct { char pad[0x18]; void (*f18)(void *); } *vt; } Tgt_82DBB298;
typedef struct Mgr_82DBB298 {
    struct { char pad[0x40]; struct Reg_82DBB298 *(*f40)(void *); } *vt;
} Mgr_82DBB298;
typedef struct Reg_82DBB298 {
    char pad[0x14];
    unsigned key;
} Reg_82DBB298;
typedef struct Heap_82DBB298 {
    struct { char pad[4]; void *(*f4)(void *, int); } *vt;
} Heap_82DBB298;
typedef struct Alloc_82DBB298 {
    char pad[0x10];
    Heap_82DBB298 *heap;
} Alloc_82DBB298;

extern Item_82DBB298 *fn_82DBBD28(Reg_82DBB298 *, int);
extern Alloc_82DBB298 *fn_82CE5410(void);
extern void fn_82DBBF60(Reg_82DBB298 *, Tgt_82DBB298 *, Item_82DBB298 *);

void fn_82DBB298(Mgr_82DBB298 *m, unsigned key, int unused, Tgt_82DBB298 *t, __vector4 *v1, __vector4 *v2)
{
    Reg_82DBB298 *r = m->vt->f40(m);
    if (r != 0) {
        Item_82DBB298 *p;
        t->vt->f18(t);
        timer("TtSetMassChang");
        p = fn_82DBBD28(r, 0x1c);
        if (p == 0) {
            Heap_82DBB298 *h = fn_82CE5410()->heap;
            Item_82DBB298 *blk = (Item_82DBB298 *)h->vt->f4(h, 0x40);
            if (blk != 0) {
                blk->size = 0x1c;
                blk->f10 = 0x40;
                p = blk;
            } else {
                p = 0;
            }
            fn_82DBBF60(r, t, p);
        }
        if (key == r->key) {
            p->a = *v1;
            p->b = *v2;
        } else {
            p->a = *v2;
            p->b = *v1;
        }
        timer("Et");
    }
}
