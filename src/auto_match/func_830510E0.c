typedef struct Format_830510E0 {
    __int64 totalBytes; /* 0x00 */
    int blocksPerUnit;  /* 0x08 */
    int padc;
    __int64 unknown10; /* 0x10 */
    __int64 unknown18; /* 0x18 */
} Format_830510E0;

typedef struct Settings_830510E0 {
    float threshold;          /* 0x00 */
    unsigned int granularity; /* 0x04 */
    unsigned int prefetch;    /* 0x08 */
    unsigned int priority;    /* 0x0c */
    unsigned char flag;       /* 0x10 */
} Settings_830510E0;

typedef struct Heuristics_830510E0 {
    unsigned int fixedSize; /* 0x0 */
    unsigned int minimum;   /* 0x4 */
    unsigned int alignment; /* 0x8 */
} Heuristics_830510E0;

struct Device_830510E0;

typedef struct DeviceVtbl_830510E0 {
    void *slots00[2];
    unsigned int (*GetBlockSize)(struct Device_830510E0 *self, Format_830510E0 *format); /* 0x08 */
} DeviceVtbl_830510E0;

typedef struct Device_830510E0 {
    DeviceVtbl_830510E0 *vt;
} Device_830510E0;

typedef struct Owner_830510E0 {
    char pad00[0x80];
    Device_830510E0 *device; /* 0x80 */
} Owner_830510E0;

typedef struct Counters_830510E0 {
    int read;    /* 0x0 */
    int pending; /* 0x4 */
    int written; /* 0x8 */
} Counters_830510E0;

typedef struct Stream_830510E0 {
    char pad00[0x18];
    Format_830510E0 format; /* 0x18 */
    char pad38[0x28];
    Owner_830510E0 *owner; /* 0x60 */
    int pad64;
    unsigned int bufferSize; /* 0x68 */
    unsigned int blockSize;  /* 0x6c */
    unsigned char flag;      /* 0x70 */
    char pad71[0xf];
    unsigned __int64 unitBytes; /* 0x80 */
    float threshold;            /* 0x88 */
    unsigned int granularity;   /* 0x8c */
    unsigned int prefetch;      /* 0x90 */
    unsigned int priority;      /* 0x94 */
    int pad98;
    Counters_830510E0 counters; /* 0x9c */
} Stream_830510E0;

extern void fn_8304FCF0(Stream_830510E0 *self, int value);

static __forceinline void Counters_Reset(Counters_830510E0 *counters)
{
    counters->pending = 0;
    counters->read = 0;
    counters->written = 0;
}

int fn_830510E0(Stream_830510E0 *self, Owner_830510E0 *owner, const Format_830510E0 *format,
                const Settings_830510E0 *settings, const Heuristics_830510E0 *heuristics,
                unsigned int requested)
{
    unsigned int blockSize;
    __int64 totalBytes;
    unsigned int size;
    unsigned int remainder;

    self->owner = owner;
    if (format->totalBytes < 0) {
        return 31;
    }
    self->format = *format;
    self->blockSize = owner->device->vt->GetBlockSize(owner->device, &self->format);
    if (self->blockSize == 0) {
        return 2;
    }
    Counters_Reset(&self->counters);
    blockSize = self->blockSize;
    self->threshold = settings->threshold;
    totalBytes = self->format.totalBytes;
    self->granularity = settings->granularity - settings->granularity % blockSize;
    if (settings->prefetch <= totalBytes) {
        self->prefetch = settings->prefetch;
    } else {
        self->prefetch = (unsigned int)totalBytes;
    }
    self->priority = settings->priority != 0 ? settings->priority : 1;
    self->flag = settings->flag;
    self->unitBytes = (unsigned int)(self->format.blocksPerUnit * blockSize);
    if (heuristics == 0) {
        self->bufferSize = requested;
    } else if (heuristics->fixedSize != 0) {
        if ((heuristics->fixedSize - requested) % blockSize != 0) {
            return 31;
        }
        self->bufferSize = heuristics->fixedSize;
    } else {
        size = heuristics->minimum > requested ? heuristics->minimum : requested;
        self->bufferSize = size;
        if (heuristics->alignment != 0) {
            remainder = size % heuristics->alignment;
            if (remainder != 0) {
                self->bufferSize = heuristics->alignment - remainder + size;
            }
        }
    }
    remainder = self->bufferSize % blockSize;
    if (remainder != 0) {
        self->bufferSize = self->bufferSize - remainder + blockSize;
    }
    if (totalBytes == 0) {
        fn_8304FCF0(self, 1);
    }
    return 1;
}
