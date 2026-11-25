typedef struct CommandOwner_82C24370 {
    int active;
    char pad[0x78];
    void *first;
    void *second;
} CommandOwner_82C24370;

typedef struct Operation_82C24370 {
    int type;                     /* 0x00 */
    CommandOwner_82C24370 *owner; /* 0x04 */
    unsigned __int64 values[5];   /* 0x08 */
    void *first;                  /* 0x30 */
    void *second;                 /* 0x34 */
    int count;                    /* 0x38 */
    int cursor;                   /* 0x3c */
    unsigned short flags;         /* 0x40 */
    int state;                    /* 0x44 */
    int error;                    /* 0x48 */
    int enabled;                  /* 0x4c */
    int mode;                     /* 0x50 */
    char pad54[0x1c];
    int pending; /* 0x70 */
    char pad74[0x20];
    void *third; /* 0x94 */
    char pad98[0x20];
    int offset;             /* 0xb8 */
    int length;             /* 0xbc */
    int index;              /* 0xc0 */
    unsigned char complete; /* 0xc4 */
    int input;              /* 0xc8 */
    int output;             /* 0xcc */
    int spare[4];           /* 0xd0 */
    void *allocator;        /* 0xe0 */
    int reserved[2];        /* 0xe4 */
} Operation_82C24370;

typedef struct Output_82C24370 {
    char pad[0x1c];
    Operation_82C24370 *operation;
} Output_82C24370;

typedef int (*Handler_82C24370)(void *, void *, void *, void *);
typedef void (*Callback_82C24370)(void *, void *, void *, Operation_82C24370 *);
extern int fn_82C10AD0(void *allocator, int tag, unsigned int size, void *out);
extern int fn_82C10DA0(void *allocator, Handler_82C24370 handler, Operation_82C24370 *op, unsigned int size,
                       void **out);
extern int fn_82C105F0(void *allocator, int event, Callback_82C24370 callback, Operation_82C24370 *op);
extern int fn_82C23A10(void *, void *, void *, void *);
extern int fn_82C23AC8(void *, void *, void *, void *);
extern int fn_82C23BA8(void *, void *, void *, void *);
extern void fn_82C23858(void *, void *, void *, Operation_82C24370 *);
extern void *memset(void *, int, unsigned int);

int fn_82C24370(void *context, int type, CommandOwner_82C24370 *owner, void *allocator, Output_82C24370 *out)
{
    Operation_82C24370 *op = 0;
    int status;
    status = fn_82C10AD0(allocator, 11, 0xf0, &op);
    if (status < 0) {
        return status;
    }
    memset(op, 0, 0xf0);
    op->type = type;
    op->owner = owner;
    op->values[0] = 0;
    op->values[1] = 0;
    op->values[2] = 0;
    op->values[3] = 0;
    op->values[4] = 0;
    op->offset = 0;
    op->length = 0;
    op->index = 0;
    op->complete = 0;
    op->input = 0;
    op->spare[0] = 0;
    op->spare[1] = 0;
    op->spare[2] = 0;
    op->spare[3] = 0;
    op->output = 0;
    op->allocator = allocator;
    op->reserved[0] = 0;
    op->reserved[1] = 0;
    out->operation = op;
    status = fn_82C10AD0(allocator, 11, 0x4c, &op->first);
    if (status < 0) {
        return status;
    }
    memset(op->first, 0, 0x4c);
    status = fn_82C10AD0(allocator, 11, 0x5c, &op->second);
    if (status < 0) {
        return status;
    }
    memset(op->second, 0, 0x5c);
    op->count = 0;
    op->cursor = 0;
    op->flags = 0;
    op->state = 0;
    op->error = 0;
    op->enabled = 1;
    op->mode = 1;
    op->pending = 0;
    op->owner->active = 1;
    status = fn_82C10DA0(allocator, fn_82C23A10, op, 0x20, &op->owner->first);
    if (status < 0) {
        return status;
    }
    status = fn_82C10DA0(allocator, fn_82C23AC8, op, 0x58, &op->owner->second);
    if (status < 0) {
        return status;
    }
    status = fn_82C10DA0(allocator, fn_82C23BA8, op, 0x68, &op->third);
    if (status < 0) {
        return status;
    }
    return fn_82C105F0(allocator, 4, fn_82C23858, op);
}
