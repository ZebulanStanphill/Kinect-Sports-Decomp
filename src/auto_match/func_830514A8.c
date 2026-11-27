typedef struct Voice_830514A8 Voice_830514A8;

typedef struct VoiceVtbl_830514A8 {
    void *slot00;
    unsigned char (*IsStarving)(Voice_830514A8 *self); /* 0x04 */
    void *slot08[9];
    unsigned __int64 (*GetPosition)(Voice_830514A8 *self); /* 0x2c */
} VoiceVtbl_830514A8;

typedef struct Owner_830514A8 {
    char pad0[0x84];
    unsigned int minimumBuffered; /* 0x84 */
    float bufferedScale;          /* 0x88 */
} Owner_830514A8;

struct Voice_830514A8 {
    VoiceVtbl_830514A8 *vtbl; /* 0x00 */
    char pad4[0x14];
    unsigned __int64 startPosition; /* 0x18 */
    int blockSize;                  /* 0x20 */
    char pad24[0x3c];
    Owner_830514A8 *owner; /* 0x60 */
    char pad64[0x8];
    int blockCount; /* 0x6c */
    char pad70[0x4];
    unsigned int flag0 : 1; /* 0x74 */
    unsigned int flag1 : 1;
    unsigned int flag2 : 1;
    unsigned int pendingEnd : 1;
    unsigned int streaming : 1;
    unsigned int looping : 1;
    unsigned int starved : 1;
    unsigned int checkBuffered : 1;
    unsigned int flagsRest : 24;
    char pad78[0x10];
    float rate; /* 0x88 */
    char pad8c[0x4];
    unsigned int pendingPackets; /* 0x90 */
    char pad94[0x4];
    unsigned int buffered; /* 0x98 */
    char pad9c[0xd];
    unsigned char state; /* 0xa9 */
};

extern void fn_8304FCF0(Voice_830514A8 *self, int flag);
extern void fn_83056130(Owner_830514A8 *owner);
extern void fn_830561A0(Owner_830514A8 *owner);

static __forceinline unsigned char IsBufferLow(Voice_830514A8 *self)
{
    return self->buffered < self->owner->minimumBuffered ||
           (float)self->buffered < self->owner->bufferedScale * self->rate;
}

static __forceinline unsigned char ShouldCheck(Voice_830514A8 *self)
{
    return (self->state & 0x80) != 0 && !self->streaming;
}

static __forceinline int HasReachedEnd(Voice_830514A8 *self)
{
    unsigned __int64 end = self->startPosition + (unsigned int)(self->blockCount * self->blockSize);

    return self->vtbl->GetPosition(self) >= end;
}

static __forceinline unsigned char IsCheckingBuffer(Voice_830514A8 *self)
{
    return self->checkBuffered;
}

static __forceinline unsigned char IsStreaming(Voice_830514A8 *self)
{
    return self->streaming;
}

void fn_830514A8(Voice_830514A8 *self)
{
    if (self->pendingPackets == 0 && HasReachedEnd(self) && self->looping) {
        fn_8304FCF0(self, 1);
    } else {
        self->pendingEnd = 0;
        self->checkBuffered = (unsigned char)((self->state & 0x80) != 0 && !self->streaming);
    }
    if ((IsCheckingBuffer(self) && IsBufferLow(self)) ||
        (IsStreaming(self) && self->vtbl->IsStarving(self))) {
        if (!self->starved) {
            self->starved = 1;
            fn_83056130(self->owner);
        }
    } else {
        if (self->starved) {
            self->starved = 0;
            fn_830561A0(self->owner);
        }
    }
}
