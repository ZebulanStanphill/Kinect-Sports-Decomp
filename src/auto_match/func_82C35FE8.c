typedef struct Subframe_82C35FE8 {
    char unknown00[0x76];
    short coefficientCount; /* 0x76 */
    char unknown78[0x678];
} Subframe_82C35FE8;

typedef struct Decoder_82C35FE8 {
    char unknown000[0x6e];
    unsigned short sampleBits; /* 0x06e */
    char unknown070[0x58];
    signed char droppedBits; /* 0x0c8 */
    char unknown0C9;
    short coefficientIndex; /* 0x0ca */
    char unknown0CC[0x74];
    Subframe_82C35FE8 *subframes; /* 0x140 */
    char unknown144[0x104];
    short *currentSubframe; /* 0x248 */
} Decoder_82C35FE8;

typedef struct Frame_82C35FE8 {
    char unknown00[0x48];
    int state; /* 0x48 */
    char unknown4C[0x94];
    char reader[1]; /* 0xe0 */
} Frame_82C35FE8;

typedef struct ChannelInfo_82C35FE8 {
    char unknown00[0xc];
    short *start; /* 0x0c */
} ChannelInfo_82C35FE8;

typedef struct Channel_82C35FE8 {
    char unknown00[0x38];
    int *coefficients; /* 0x38 */
    char unknown3C[0x16c];
    ChannelInfo_82C35FE8 *info; /* 0x1a8 */
} Channel_82C35FE8;

extern int fn_82C30370(void *reader, int bits, unsigned int *value);

int fn_82C35FE8(Decoder_82C35FE8 *self, Frame_82C35FE8 *frame, Channel_82C35FE8 *channel)
{
    int *coefficients = channel->coefficients;
    int result = 0;
    int start = *channel->info->start;
    int count = self->subframes[*self->currentSubframe].coefficientCount;
    int *destination = coefficients + start;
    unsigned int value;
    unsigned int signBit;

    if (frame->state != 0) {
        if (frame->state != 10) {
            return result;
        }
    } else {
        frame->state = 10;
    }
    if (self->droppedBits >= self->sampleBits) {
        return 0x80040002;
    }
    while (self->coefficientIndex < count) {
        result = fn_82C30370(frame->reader, self->sampleBits - self->droppedBits, &value);
        if (result < 0) {
            return result;
        }
        signBit = 1 << (self->sampleBits - self->droppedBits - 1);
        if (signBit & value) {
            value |= ~(signBit - 1);
        }
        destination[self->coefficientIndex] = value;
        self->coefficientIndex++;
    }
    frame->state = 11;
    return result;
}
