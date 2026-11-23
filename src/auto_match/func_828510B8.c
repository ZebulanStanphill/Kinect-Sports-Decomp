typedef struct Target_828510B8 {
    char pad0[8];
    unsigned char *bytes;
} Target_828510B8;

typedef struct Frame_828510B8 {
    int pad0;
    unsigned int value;
    unsigned int count;
    Target_828510B8 **targets;
} Frame_828510B8;

typedef struct Track_828510B8 {
    unsigned int count;
    Frame_828510B8 *frames;
    char pad8[12];
} Track_828510B8;

typedef struct Animation_828510B8 {
    char pad0[0x17c];
    Track_828510B8 *tracks;
} Animation_828510B8;

extern const float lbl_8201F5AC;

static __forceinline void StoreSample(unsigned char *p, unsigned char v)
{
    *p = v;
}

void fn_828510B8(Animation_828510B8 *self, int *offsets, int trackIndex, unsigned int frameIndex,
                 float fraction, int channel)
{
    Track_828510B8 *track = &self->tracks[trackIndex];
    Frame_828510B8 *frames = track->frames;
    Frame_828510B8 *frame = &frames[frameIndex];
    unsigned int next = frameIndex + 1;
    unsigned int current = frame->value;
    float value;
    unsigned int i;
    unsigned char sample;

    if (current == 0) {
        return;
    }
    value = (float)current;
    if (next < track->count && frames[next].value != 0) {
        value += ((float)frames[next].value - value) * fraction;
    }
    i = 0;
    if (i >= frame->count) {
        return;
    }
    sample = (unsigned char)((value - 1.0f) * lbl_8201F5AC + 1.0f);
    do {
        StoreSample(&frame->targets[i]->bytes[*(offsets + channel + 4)], sample);
    } while (++i < frame->count);
}
