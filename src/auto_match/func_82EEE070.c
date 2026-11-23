typedef struct Work_82EEE070 {
    int index;
    unsigned short key;
    char pad6[2];
    int extended;
    int flags;
    char pad10[0x2c];
    int type;
    unsigned short subtype;
    char pad42[0xa];
    int options;
    int field50;
    int special;
} Work_82EEE070;

typedef struct Reader_82EEE070 Reader_82EEE070;

struct Reader_82EEE070 {
    struct {
        void *reserved[5];
        int (*begin)(Reader_82EEE070 *, unsigned int, Work_82EEE070 *);
        void *reserved18;
        void (*end)(Reader_82EEE070 *, Work_82EEE070 *);
        int (*count)(Reader_82EEE070 *, int *);
        int (*read)(Reader_82EEE070 *, unsigned int, Work_82EEE070 *);
    } *vtable;

    char pad4[4];
    char cache[1];
};

extern void fn_82F41920(Work_82EEE070 *work);
extern void fn_82F41728(Work_82EEE070 *work, void *source, unsigned int *size);
extern void fn_82F41758(Work_82EEE070 *work);
extern int fn_82EED968(void *cache, Work_82EEE070 *work, unsigned int *out);
extern int fn_82EEDF48(Reader_82EEE070 *self, Work_82EEE070 *work);

int fn_82EEE070(Reader_82EEE070 *self, Work_82EEE070 *work, void *source, unsigned int size, int cache,
                int options, int extended)
{
    int result;
    int count;
    int index;

    fn_82F41920(work);
    work->options = options;
    fn_82F41728(work, source, &size);
    result = self->vtable->begin(self, extended ? 0x20000 : 0, work);
    fn_82F41758(work);
    if (result < 0)
        goto done;

    count = 0;
    result = self->vtable->count(self, &count);
    if (result < 0)
        goto done;
    index = 0;
    result = 1;
    if (count > 0) {
        do {
            int type;
            if (result != 1)
                break;
            type = work->type;
            work->index = index;
            work->key = 0;
            work->extended = 0;
            work->flags = 0;
            if (type == 6 || work->subtype || size > 0xffff)
                work->extended = 1;
            result = self->vtable->read(self, (extended ? 0x20000 : 0) | 0x401, work);
            if (result < 0)
                goto done;
        } while (++index < count);
        if (result < 0)
            goto done;
    }
    if (result == 1) {
        if (!extended && work->special)
            result = 0xc00d36b2;
        else
            result = 0x80004005;
    } else if (cache && fn_82EED968(self->cache, work, 0) == 0) {
        result = 0x8007000e;
    } else {
        result = fn_82EEDF48(self, work);
    }
done:
    fn_82F41920(work);
    self->vtable->end(self, work);
    return result;
}
