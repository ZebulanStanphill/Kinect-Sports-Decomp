typedef struct File_82A2E560 {
    char pad0[2];
    unsigned char flags; /* 0x02 */
    char pad3[5];
    void *node; /* 0x08 */
    char padC[8];
    unsigned char position[8]; /* 0x14 */
} File_82A2E560;

typedef struct Stack_82A2E560 {
    int f0;
    unsigned int length; /* 0x04 */
    int infoClass;       /* 0x08 */
    char padC[0xc];
    File_82A2E560 *file; /* 0x18 */
} Stack_82A2E560;

typedef struct Irp_82A2E560 {
    char pad0[0x10];
    int status;               /* 0x10 */
    unsigned int information; /* 0x14 */
    char pad18[4];
    void *buffer; /* 0x1c */
    char pad20[0x30];
    Stack_82A2E560 *stack; /* 0x50 */
} Irp_82A2E560;

typedef struct FileId_82A2E560 {
    void *device;
    void *node;
} FileId_82A2E560;

typedef struct Device_82A2E560 {
    char pad0[0x88];
    int status; /* 0x88 */
} Device_82A2E560;

void *memset(void *dst, int value, unsigned int size);
void RtlEnterCriticalSection(void *cs);
void RtlLeaveCriticalSection(void *cs);
void IoCompleteRequest(Irp_82A2E560 *irp, int boost);
void fn_82A2E4D0(void *node, void *output);

void fn_82A2E560(Device_82A2E560 *self, Irp_82A2E560 *irp)
{
    Stack_82A2E560 *stack = irp->stack;
    File_82A2E560 *file = stack->file;
    void *node = file->node;
    int status;
    unsigned int information;
    FileId_82A2E560 *id;

    RtlEnterCriticalSection(self);
    if (self->status != 0) {
        status = self->status;
    } else if ((file->flags & 0x10) != 0) {
        status = 0xC0000128;
    } else {
        memset(irp->buffer, 0, stack->length);
        status = 0;
        switch (stack->infoClass) {
        case 6:
            id = irp->buffer;
            id->device = self;
            id->node = node;
            information = 8;
            break;
        case 0xe:
            *(unsigned __int64 *)irp->buffer = *(unsigned __int64 *)file->position;
            information = 8;
            break;
        case 0x22:
            fn_82A2E4D0(node, irp->buffer);
            information = 0x38;
            break;
        default:
            status = 0xC000000D;
            information = 0;
            break;
        }
        irp->information = information;
    }
    RtlLeaveCriticalSection(self);
    irp->status = status;
    IoCompleteRequest(irp, 1);
}
