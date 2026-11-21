typedef struct Record_82D6FF00 {
    unsigned char type; /* 0x0 */
    unsigned char id;   /* 0x1 */
    unsigned char pad2;
    unsigned char size; /* 0x3 */
    char pad4[8];
    float weight; /* 0xc */
    char pad10[0x10];
} Record_82D6FF00;

typedef struct Block_82D6FF00 {
    int size; /* 0x0 */
    char pad4[0xc];
    unsigned char data[1]; /* 0x10 */
} Block_82D6FF00;

typedef struct Stream_82D6FF00 {
    Block_82D6FF00 **blocks; /* 0x0 */
} Stream_82D6FF00;

typedef struct Context_82D6FF00 Context_82D6FF00;

typedef void (*Process_82D6FF00)(Record_82D6FF00 *record, void *data, float from, float to,
                                 Context_82D6FF00 *context);

typedef struct Handler_82D6FF00 {
    void *slot0;
    Process_82D6FF00 process; /* 0x4 */
    char pad8[0x48];
} Handler_82D6FF00;

struct Context_82D6FF00 {
    Handler_82D6FF00 *handlers; /* 0x0 */
};

void fn_82D6FF00(Stream_82D6FF00 *stream, float from, float to, Context_82D6FF00 *context)
{
    Block_82D6FF00 *block = stream->blocks[0];
    Record_82D6FF00 *record = (Record_82D6FF00 *)block->data;
    unsigned char *end = block->data + block->size;
    int next = 1;

    for (;;) {
        Record_82D6FF00 *current = record;
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
            Process_82D6FF00 process;
            void *data;
            data = (unsigned char *)record + 0x10;
            record = (Record_82D6FF00 *)((unsigned char *)record + record->size);
            process = context->handlers[current->id + 0x49].process;
            if (process != 0) {
                process(current, data, from, to, context);
            }
            break;
        }
        case 4:
        case 5:
        case 12:
        case 13: {
            Process_82D6FF00 process;
            void *data;
            data = (unsigned char *)record + 0x20;
            if (record->weight == from) {
                record->weight = to;
            } else {
                record->weight = -1.0f;
            }
            record = (Record_82D6FF00 *)((unsigned char *)record + record->size);
            process = context->handlers[current->id + 0x49].process;
            if (process != 0) {
                process(current, data, from, to, context);
            }
            break;
        }
        case 1:
            return;
        case 0:
            record = (Record_82D6FF00 *)((unsigned char *)current + current->size);
            break;
        }
        if ((unsigned char *)record >= end) {
            block = stream->blocks[next];
            next++;
            record = (Record_82D6FF00 *)block->data;
            end = block->data + block->size;
        }
    }
}
