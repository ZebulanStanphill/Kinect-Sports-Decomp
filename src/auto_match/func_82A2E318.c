typedef struct _LIST_ENTRY { struct _LIST_ENTRY *Flink; struct _LIST_ENTRY *Blink; } LIST_ENTRY;

typedef struct Ctx {
    char pad0[8];
    void *p8;
    void *pc;
    char pad10[0x40];
    LIST_ENTRY link;
} Ctx;

typedef struct Sub {
    char pad0[0x18];
    Ctx *ctx;
} Sub;

typedef struct Irp {
    char pad0[0x10];
    int status;
    char pad14[0x3c];
    Sub *sub;
} Irp;

extern void ExFreePool(void *p);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void IoCompleteRequest(Irp *irp, int boost);
extern void fn_82A2C4A8(void *p);

void fn_82A2E318(void *cs, Irp *irp)
{
    Ctx *c = irp->sub->ctx;
    LIST_ENTRY *f;
    LIST_ENTRY *b;

    if (c->pc != 0) {
        ExFreePool(c->pc);
    }
    RtlEnterCriticalSection(cs);
    if (c->p8 != 0) {
        fn_82A2C4A8(c->p8);
    }
    f = c->link.Flink;
    b = c->link.Blink;
    b->Flink = f;
    f->Blink = b;
    RtlLeaveCriticalSection(cs);
    irp->status = 0;
    IoCompleteRequest(irp, 1);
}
