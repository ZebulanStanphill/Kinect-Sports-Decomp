typedef struct Device_830551F8 {
    char pad0[0x50];
    __int64 time; /* 0x50 */
    char pad58[0x84 - 0x58];
    unsigned int blockSize; /* 0x84 */
} Device_830551F8;

typedef struct Voice_830551F8 {
    char pad0[0x58];
    __int64 startTime;       /* 0x58 */
    Device_830551F8 *device; /* 0x60 */
    char pad64[4];
    unsigned int queued; /* 0x68 */
    char pad6c[0x94 - 0x6c];
    unsigned int played; /* 0x94 */
    float blockDuration; /* 0x98 */
} Voice_830551F8;

extern float lbl_8326459C;

float fn_830551F8(Voice_830551F8 *self)
{
    Device_830551F8 *device = self->device;
    unsigned int blockSize = device->blockSize;
    float remaining =
        self->blockDuration / (float)((self->queued - self->played + blockSize - 1) / blockSize) -
        (float)(device->time - self->startTime) / lbl_8326459C;

    if (remaining <= 0.0f)
        return 0.0f;
    return remaining;
}
