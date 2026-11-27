#include "xdk/vectorintrinsics.h"

typedef struct Record_82D6FD90 {
    unsigned char type; /* 0x0 */
    unsigned char id;   /* 0x1 */
    unsigned char pad2;
    unsigned char size; /* 0x3 */
    char pad4[8];
    float weight;    /* 0xc */
    __vector4 value; /* 0x10 */
} Record_82D6FD90;

typedef struct Block_82D6FD90 {
    int size; /* 0x0 */
    char pad4[0xc];
    unsigned char data[1]; /* 0x10 */
} Block_82D6FD90;

typedef struct Stream_82D6FD90 {
    Block_82D6FD90 **blocks; /* 0x0 */
} Stream_82D6FD90;

typedef struct Context_82D6FD90 Context_82D6FD90;

typedef struct Handler_82D6FD90 {
    void (*process)(Record_82D6FD90 *record, void *data, Context_82D6FD90 *context);
    char pad4[0x4c];
} Handler_82D6FD90;

struct Context_82D6FD90 {
    Handler_82D6FD90 *handlers; /* 0x0 */
};

static __forceinline void SetZero(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

void fn_82D6FD90(Stream_82D6FD90 *stream, Context_82D6FD90 *context)
{
    Block_82D6FD90 *block = stream->blocks[0];
    Record_82D6FD90 *record = (Record_82D6FD90 *)block->data;
    unsigned char *end = block->data + block->size;
    int next = 1;

    for (;;) {
        Record_82D6FD90 *current = record;
        switch (current->type) {
        case 7:
        case 8:
        case 9:
            break;
        case 2:
        case 3:
        case 6:
        case 10:
        case 11:
        case 14: {
            void (*process)(Record_82D6FD90 *, void *, Context_82D6FD90 *);
            void *data;
            data = &record->value;
            record = (Record_82D6FD90 *)((unsigned char *)record + record->size);
            process = context->handlers[current->id + 0x49].process;
            if (process != 0) {
                process(current, data, context);
            }
            break;
        }
        case 4:
        case 5:
        case 12:
        case 13: {
            void (*process)(Record_82D6FD90 *, void *, Context_82D6FD90 *);
            void *data;
            record->weight = -1.0f;
            SetZero(&record->value);
            data = (unsigned char *)record + 0x20;
            record = (Record_82D6FD90 *)((unsigned char *)record + record->size);
            process = context->handlers[current->id + 0x49].process;
            if (process != 0) {
                process(current, data, context);
            }
            break;
        }
        case 1:
            return;
        case 0:
            record = (Record_82D6FD90 *)((unsigned char *)current + current->size);
            break;
        }
        if ((unsigned char *)record >= end) {
            block = stream->blocks[next];
            next++;
            record = (Record_82D6FD90 *)block->data;
            end = block->data + block->size;
        }
    }
}
