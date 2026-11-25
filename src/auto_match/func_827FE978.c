typedef struct Hit_827FE978 {
    unsigned int id;    /* 0x0 */
    unsigned int index; /* 0x4 */
    unsigned int flags; /* 0x8 */
} Hit_827FE978;

typedef struct Segment_827FE978 {
    unsigned short id; /* 0x0 */
    unsigned short pad2;
    float start; /* 0x4 */
    float end;   /* 0x8 */
    int padC;
} Segment_827FE978;

int fn_827FE978(Hit_827FE978 *hits, unsigned int capacity, unsigned int *count, Segment_827FE978 *segments,
                unsigned int segmentCount, float from, float to, unsigned char backwards)
{
    unsigned int i;
    unsigned int flags;

    if (!backwards) {
        for (i = 0; i < segmentCount; i++) {
            float start = segments[i].start;
            float end = segments[i].end;
            flags = 0;
            if (from <= start && to >= start) {
                flags = 1;
            }
            if (to >= start && to < end) {
                flags |= 2;
            }
            if (from < end && to >= end) {
                flags |= 4;
            }
            if (flags != 0) {
                if (*count >= capacity) {
                    *count = 0;
                    return 1;
                }
                hits[*count].id = segments[i].id;
                hits[*count].index = i;
                hits[*count].flags = flags;
                (*count)++;
            }
        }
    } else {
        for (i = 0; i < segmentCount; i++) {
            float start = segments[i].start;
            float end = segments[i].end;
            flags = 0;
            if (from >= end && to <= end) {
                flags = 1;
            }
            if (to > start && to <= end) {
                flags |= 2;
            }
            if (from > start && to <= start) {
                flags |= 4;
            }
            if (flags != 0) {
                if (*count >= capacity) {
                    *count = 0;
                    return 1;
                }
                hits[*count].id = segments[i].id;
                hits[*count].index = i;
                hits[*count].flags = flags;
                (*count)++;
            }
        }
    }
    return 0;
}
