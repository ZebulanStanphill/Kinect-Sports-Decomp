typedef struct Device_82BF2880 {
    char unk00[0x18];
    int type; /* 0x18 */
    char unk1C[0x24 - 0x1c];
    int unk24; /* 0x24 */
} Device_82BF2880;

typedef struct Stream_82BF2880 {
    char unk00[4];
    Device_82BF2880 *device; /* 0x04 */
    int active;              /* 0x08 */
    char unk0C[0x20 - 0xc];
    unsigned char *buffer;   /* 0x20 */
    unsigned char *cursor;   /* 0x24 */
    int unk28;               /* 0x28 */
    unsigned int bufferSize; /* 0x2C */
    int unk30;               /* 0x30 */
    int unk34;               /* 0x34 */
    int unk38;               /* 0x38 */
    int unk3C;               /* 0x3C */
    int unk40;               /* 0x40 */
} Stream_82BF2880;

extern void *memset(void *dst, int value, unsigned int size);
extern int fn_82BF26B0(Stream_82BF2880 *stream);
extern int fn_82BF2298(Stream_82BF2880 *stream);
extern int fn_82BF23F8(Stream_82BF2880 *stream);
extern void fn_82BE6638(Device_82BF2880 *device, int unk);
extern void fn_82BE6BD8(Device_82BF2880 *device);

static __forceinline void Clear_82BF2880(Stream_82BF2880 *stream)
{
    stream->unk30 = 0;
    stream->active = 0;
    memset(stream->buffer, 0, stream->bufferSize);
}

static __forceinline void Rewind_82BF2880(Stream_82BF2880 *stream)
{
    stream->unk28 = 0;
    stream->unk34 = 0;
    stream->unk38 = 0;
    stream->unk3C = 0;
    stream->unk40 = 0;
    stream->cursor = stream->buffer;
}

int fn_82BF2880(Stream_82BF2880 *stream, void *data, int size)
{
    Device_82BF2880 *device = stream->device;

    if (device == 0) {
        Clear_82BF2880(stream);
        Rewind_82BF2880(stream);
        return 1;
    }
    if (device->type != 0x300) {
        Clear_82BF2880(stream);
        Rewind_82BF2880(stream);
        return 1;
    }
    if (size != 0 && data != 0) {
        if (stream->unk30 == 0) {
            return fn_82BF26B0(stream);
        }
        if (stream->unk34 != 0) {
            return fn_82BF2298(stream);
        }
        return fn_82BF23F8(stream);
    }
    stream->active = 1;
    if (stream->unk40 != 0 && stream->unk40 != device->unk24) {
        fn_82BE6638(device, 6);
    } else {
        fn_82BE6BD8(device);
    }
    Clear_82BF2880(stream);
    stream->device = 0;
    Rewind_82BF2880(stream);
    return 1;
}
