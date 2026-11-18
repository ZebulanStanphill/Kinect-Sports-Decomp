typedef struct Device_83053258 {
    char pad0[0x50];
    __int64 time; /* 0x50 */
    char pad58[0x84 - 0x58];
    unsigned int blockSize; /* 0x84 */
} Device_83053258;

typedef struct Voice_83053258 {
    char pad0[0x58];
    __int64 startTime;       /* 0x58 */
    Device_83053258 *device; /* 0x60 */
    char pad64[4];
    unsigned int queued; /* 0x68 */
    char pad6c[0x98 - 0x6c];
    float blockDuration; /* 0x98 */
    char pad9c[0xb0 - 0x9c];
    unsigned int played; /* 0xb0 */
} Voice_83053258;

extern float lbl_8326459C;

float fn_83053258(Voice_83053258 *self)
{
    Device_83053258 *device = self->device;
    unsigned int blockSize = device->blockSize;
    float remaining =
        self->blockDuration / (float)((self->queued - self->played + blockSize - 1) / blockSize) -
        (float)(device->time - self->startTime) / lbl_8326459C;

    if (remaining <= 0.0f)
        return 0.0f;
    return remaining;
}
