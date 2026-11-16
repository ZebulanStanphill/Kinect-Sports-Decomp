typedef struct Stream_82E74D20 Stream_82E74D20;

typedef struct VTable_82E74D20 {
    void *unused[9];
    int (*isTimeBased)(Stream_82E74D20 *);
} VTable_82E74D20;

struct Stream_82E74D20 {
    VTable_82E74D20 *vtable;
    int unknown4;
    unsigned __int64 offset; /* 0x08 */
    int unknown10[2];
    unsigned int headerSize; /* 0x18 */
    int unknown1c[5];
    unsigned __int64 start;  /* 0x30 */
    unsigned __int64 length; /* 0x38 */
    unsigned __int64 tail;   /* 0x40 */
    unsigned __int64 rate;   /* 0x48 */
    int unknown50[2];
    unsigned int flags; /* 0x58 */
    void *extra;        /* 0x5c */
};

extern int fn_82E5A140(void *, unsigned __int64);
extern int fn_82E5A150(void *, unsigned __int64);
extern int fn_82E5A1C0(void *, unsigned int);
extern int fn_82E5A1F0(void *, unsigned __int64);
extern int fn_82EEAF80(void *, unsigned int *);
extern int fn_82E5A190(void *, unsigned int);

int fn_82E74D20(Stream_82E74D20 *self, void *output)
{
    int result;
    unsigned __int64 end;
    if (output == 0) {
        return 0x80070057;
    }
    result = fn_82E5A140(output, self->offset + self->start);
    if (result < 0) {
        goto done;
    }
    end = self->tail + self->length + self->offset;
    result = fn_82E5A150(output, end);
    if (result < 0) {
        goto done;
    }
    result = fn_82E5A1C0(output, self->flags);
    if (result < 0) {
        goto done;
    }
    if (self->vtable->isTimeBased(self) == 0 && self->rate != 0) {
        result = fn_82E5A1F0(output, (end - self->start) * 10000 / self->rate);
        if (result < 0) {
            goto done;
        }
    }
    if (self->extra != 0) {
        unsigned int extraSize = 0;
        result = fn_82EEAF80(self->extra, &extraSize);
        if (result >= 0) {
            result = fn_82E5A190(output, self->headerSize + extraSize);
        }
    }
done:
    return result;
}
