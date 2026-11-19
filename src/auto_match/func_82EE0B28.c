typedef struct Reader_82EE0B28 Reader_82EE0B28;

typedef struct ReaderVtbl_82EE0B28 {
    void *slots[15];
    long (*ReadValue)(Reader_82EE0B28 *self, unsigned int type, void *data, void *stream,
                      unsigned int size); /* 0x3c */
} ReaderVtbl_82EE0B28;

struct Reader_82EE0B28 {
    ReaderVtbl_82EE0B28 *vtbl; /* 0x00 */
    char pad04[0x24];
    char stream[4]; /* 0x28 */
};

typedef struct Attribute_82EE0B28 {
    unsigned short flags;    /* 0x00 */
    unsigned short index;    /* 0x02 */
    unsigned int type;       /* 0x04 */
    unsigned short nameSize; /* 0x08 */
    unsigned short pad0a;
    unsigned short *name;  /* 0x0c */
    unsigned int dataSize; /* 0x10 */
    void *data;            /* 0x14 */
} Attribute_82EE0B28;

typedef struct Source_82EE0B28 {
    char pad00[0x18];
    unsigned int remaining; /* 0x18 */
} Source_82EE0B28;

extern void fn_82E4FE40(void *p);
extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern long fn_82E57738(unsigned short *out, Source_82EE0B28 *source);
extern long fn_82E577A0(unsigned short *buf, void *stream, unsigned int count);

long fn_82EE0B28(Reader_82EE0B28 *self, Attribute_82EE0B28 *attr, Source_82EE0B28 *source,
                 unsigned int *needed)
{
    long hr;
    unsigned int available;
    unsigned int total;
    unsigned short value;

    if (attr == 0 || source == 0 || needed == 0) {
        return 0x80070057;
    }
    *needed = 0;
    available = source->remaining;
    if (available < 6) {
        *needed = 6;
        return 0xC00D36B1;
    }
    attr->index = 0;
    attr->flags = 0;
    hr = fn_82E57738(&attr->nameSize, source);
    if (hr < 0) {
        goto check;
    }
    total = attr->nameSize + 6;
    if (available < total) {
        *needed = total;
        hr = 0xC00D36B1;
        goto cleanup;
    }
    if ((attr->nameSize & 1) != 0 || (attr->nameSize & 0xFFFFFFFE) > 0x800) {
        hr = 0xC00D3A9A;
        goto check;
    }
    if (attr->name != 0) {
        fn_82E4FE40(attr->name);
    }
    attr->name = 0;
    attr->name = (unsigned short *)fn_82E50BE8(attr->nameSize, 0, 0, 0, 0);
    if (attr->name == 0) {
        hr = 0x8007000E;
        goto consumed;
    }
    hr = fn_82E577A0(attr->name, self->stream, attr->nameSize >> 1);
    if (hr < 0) {
        goto check;
    }
    if (attr->nameSize != 0) {
        attr->name[(attr->nameSize >> 1) - 1] = 0;
    }
    value = 0;
    hr = fn_82E57738(&value, source);
    if (hr < 0) {
        goto check;
    }
    attr->type = value;
    value = 0;
    hr = fn_82E57738(&value, source);
    if (hr < 0) {
        goto check;
    }
    total = attr->nameSize + value + 6;
    attr->dataSize = value;
    if (available < total) {
        *needed = total;
        hr = 0xC00D36B1;
        goto cleanup;
    }
    attr->data = fn_82E50BE8(value, 0, 0, 0, 0);
    if (attr->data == 0) {
        hr = 0x8007000E;
        goto consumed;
    }
    hr = self->vtbl->ReadValue(self, attr->type, attr->data, self->stream, attr->dataSize);
check:
    if (hr != (long)0xC00D36B1) {
    consumed:
        *needed = available - source->remaining;
    }
    if (hr < 0) {
    cleanup:
        if (attr->name != 0) {
            fn_82E4FE40(attr->name);
        }
        attr->name = 0;
        if (attr->data != 0) {
            fn_82E4FE40(attr->data);
        }
        attr->data = 0;
    }
    return hr;
}
