typedef struct Stack_82A2CCF0 {
    int unused;
    unsigned int length;
    int infoClass;
} Stack_82A2CCF0;

typedef struct Irp_82A2CCF0 {
    char pad0[0x10];
    int status;
    unsigned int information;
    char pad18[4];
    void *buffer;
    char pad20[0x30];
    Stack_82A2CCF0 *stack;
} Irp_82A2CCF0;

typedef struct Device_82A2CCF0 {
    char pad0[0x88];
    int status;
    char pad8c[0xc];
    unsigned int readPosition;
    unsigned int writePosition;
    unsigned int available;
    char pada4[4];
    unsigned int capacity;
    char padac[0x21];
    unsigned char circular;
    unsigned char padce;
    unsigned char attributes;
} Device_82A2CCF0;

typedef struct Position_82A2CCF0 {
    unsigned __int64 start;
    unsigned __int64 end;
    unsigned int alignment;
    unsigned int blockSize;
} Position_82A2CCF0;

extern void *memset(void *, int, unsigned int);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void IoCompleteRequest(Irp_82A2CCF0 *, int);

void fn_82A2CCF0(Device_82A2CCF0 *self, Irp_82A2CCF0 *irp)
{
    Stack_82A2CCF0 *stack = irp->stack;
    int status;
    unsigned int length;

    RtlEnterCriticalSection(self);
    if (self->status != 0) {
        status = self->status;
    } else {
        memset(irp->buffer, 0, stack->length);
        length = 0;
        status = 0;
        switch (stack->infoClass) {
        case 5: {
            unsigned int *data = irp->buffer;
            data[0] = 0;
            data[1] = 0x28;
            data[2] = 4;
            if (stack->length < 16) {
                status = 0x80000005;
                length = 12;
            } else {
                length = 16;
                data[3] = 0x53544643;
            }
            break;
        }
        case 4: {
            unsigned int *data = irp->buffer;
            data[0] = 0x3d;
            length = 8;
            data[1] = self->attributes;
            break;
        }
        case 3: {
            Position_82A2CCF0 *position = irp->buffer;
            unsigned int end = self->available;

            if (self->circular && self->readPosition >= self->writePosition) {
                position->start = self->readPosition;
                end = end - self->writePosition + self->readPosition;
            } else {
                position->start = self->writePosition;
            }
            if (end >= self->capacity)
                end -= self->capacity;
            position->alignment = 8;
            position->end = end;
            length = sizeof(*position);
            position->blockSize = 0x200;
            break;
        }
        case 1:
            length = 17;
            break;
        default:
            status = 0xc000000d;
            break;
        }
        irp->information = length;
    }
    RtlLeaveCriticalSection(self);
    irp->status = status;
    IoCompleteRequest(irp, 1);
}
