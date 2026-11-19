typedef struct Segment_82C112A8 {
    char pad0[0xc];
    unsigned int offset; /* 0xc */
    unsigned int total;  /* 0x10 */
    unsigned int length; /* 0x14 */
    char pad18[0x20 - 0x18];
    unsigned __int64 time; /* 0x20 */
    char pad28[0x30 - 0x28];
    int skipped; /* 0x30 */
    int pending; /* 0x34 */
    char pad38[0x3c - 0x38];
    struct Segment_82C112A8 *next; /* 0x3c */
} Segment_82C112A8;

typedef struct Track_82C112A8 {
    char pad0[0x18];
    Segment_82C112A8 *segments; /* 0x18 */
} Track_82C112A8;

typedef struct Clock_82C112A8 {
    void *f0[5];
    int (*Adjust)(struct Clock_82C112A8 *self, unsigned __int64 *time); /* 0x14 */
} Clock_82C112A8;

typedef struct Player_82C112A8 {
    char pad0[0x4];
    Clock_82C112A8 *clock; /* 0x4 */
    char pad8[0x10 - 0x8];
    unsigned char track; /* 0x10 */
    char pad11[0x38 - 0x11];
    unsigned __int64 time; /* 0x38 */
    char pad40[0x48 - 0x40];
    void **tracks; /* 0x48 */
} Player_82C112A8;

extern int fn_82C10F40(void **table, unsigned char index, Track_82C112A8 **out);

int fn_82C112A8(Player_82C112A8 *self, unsigned __int64 *time)
{
    Track_82C112A8 *track = 0;
    Segment_82C112A8 *segment;
    int found = 0;
    int complete = 0;
    int pending = 0;
    int hr;

    *time = 0;
    hr = fn_82C10F40(self->tracks, self->track, &track);
    if (hr < 0) {
        return hr;
    }
    if (track->segments == 0) {
        return 0x8050000b;
    }
    for (segment = track->segments; segment != 0; segment = segment->next) {
        pending = segment->pending != 0;
        if (segment->skipped == 0 && segment->offset == 0 && !found) {
            found = 1;
            *time = segment->time;
        }
        if (segment->skipped == 0 && segment->length + segment->offset == segment->total && found) {
            complete = 1;
            break;
        }
    }
    if (!found) {
        if (!complete && pending) {
            goto failed;
        }
        *time = self->time;
    } else if (!complete) {
    failed:
        *time = 0;
        return 0x8050000b;
    }
    hr = self->clock->Adjust(self->clock, time);
    if (hr >= 0) {
        self->time = *time;
    }
    return hr;
}
