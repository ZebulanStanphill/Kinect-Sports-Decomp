struct Reader_82BECFD8;

typedef struct ReaderVt_82BECFD8 {
    void *slots[3];
    int (*read)(struct Reader_82BECFD8 *self, const unsigned char *data, unsigned int size); /* 0x0c */
} ReaderVt_82BECFD8;

typedef struct Reader_82BECFD8 {
    ReaderVt_82BECFD8 *vt;
} Reader_82BECFD8;

struct Device_82BECFD8;

typedef struct DeviceVt_82BECFD8 {
    void *slots[3];
    Reader_82BECFD8 *(*createReader)(struct Device_82BECFD8 *self); /* 0x0c */
} DeviceVt_82BECFD8;

typedef struct Device_82BECFD8 {
    DeviceVt_82BECFD8 *vt;
} Device_82BECFD8;

extern int fn_82BA02A8(unsigned __int64 value);
extern void *memset(void *dst, int value, unsigned int size);
extern void *memcpy(void *dst, const void *src, unsigned int size);
extern void *fn_82BE56B0(unsigned int size);
extern void *fn_82BECCB8(void *mem, Device_82BECFD8 *device, Reader_82BECFD8 *reader, int id, int flags);
extern int fn_82BECDF0(void *object, const char *name);
extern void fn_82BE8D50(void *object);

void *fn_82BECFD8(Device_82BECFD8 *device, int unused, const unsigned char *data, unsigned int size)
{
    const unsigned char *end;
    const unsigned char *p;
    unsigned int length;
    Reader_82BECFD8 *reader;
    void *object;
    void *mem;
    int id;
    int flags;
    unsigned int nameLength;
    char name[0x104];

    if (device == 0 || data == 0 || size == 0 || size < 4) {
        return 0;
    }
    end = data + size;
    p = data + 4;
    length = *(const unsigned int *)data;
    if (p > end) {
        return 0;
    }
    object = 0;
    reader = device->vt->createReader(device);
    if (reader == 0) {
        return 0;
    }
    if (reader->vt->read(reader, p, length) == 0) {
        goto fail;
    }
    p = p + length;
    if (p > end) {
        goto fail;
    }
    id = fn_82BA02A8(*(const unsigned __int64 *)p);
    p += 8;
    if (p > end) {
        goto fail;
    }
    flags = *(const int *)p;
    p += 4;
    if (p > end) {
        goto fail;
    }
    nameLength = *(const unsigned int *)p;
    p += 4;
    if (nameLength != 0 && p > end) {
        goto fail;
    }
    name[0] = 0;
    memset(name + 1, 0, sizeof(name) - 1);
    if (nameLength != 0) {
        if (nameLength >= sizeof(name)) {
            goto fail;
        }
        memcpy(name, p, nameLength);
        name[nameLength] = 0;
        p += nameLength;
    }
    if (p != end) {
        goto fail;
    }
    mem = fn_82BE56B0(0x20);
    if (mem != 0) {
        object = fn_82BECCB8(mem, device, reader, id, flags);
    } else {
        object = 0;
    }
    if (object == 0) {
        goto fail;
    }
    fn_82BE8D50(reader);
    reader = 0;
    if (fn_82BECDF0(object, name) == 0) {
        goto fail;
    }
    return object;
fail:
    if (reader != 0) {
        fn_82BE8D50(reader);
    }
    if (object != 0) {
        fn_82BE8D50(object);
    }
    return 0;
}
