#define __sync() __emit(0x7C0004AC)

typedef struct Regs_82E23670 {
    unsigned int status;
    unsigned int info;
    char pad8[0x18 - 0x8];
    unsigned int result;
} Regs_82E23670;

typedef struct Apc_82E23670 {
    int pad0;
    void *object;
} Apc_82E23670;

typedef struct Request_82E23670 {
    Regs_82E23670 *regs;
    Apc_82E23670 *apc;
    void *event;
} Request_82E23670;

extern unsigned int KeInsertQueueApc(Apc_82E23670 *apc, void *a, void *b, int c);
extern int KeSetEvent(void *event, int increment, int wait);
extern void ObDereferenceObject(void *obj);
extern void ExFreePool(void *p);

int fn_82E23670(Request_82E23670 *req, unsigned int status, unsigned int result, unsigned int info)
{
    Apc_82E23670 *apc;

    req->regs->info = info;
    req->regs->result = result;
    __sync();
    req->regs->status = status;
    if (req->apc != 0) {
        if (KeInsertQueueApc(req->apc, 0, 0, 0) == 0) {
            apc = req->apc;
            ObDereferenceObject(apc->object);
            ExFreePool(apc);
        }
    } else if (req->event != 0) {
        KeSetEvent(req->event, 0, 0);
        ObDereferenceObject(req->event);
    }
    req->regs = 0;
    return 0;
}
