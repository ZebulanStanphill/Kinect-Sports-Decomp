typedef struct Clip_83013F90 {
    unsigned int startOffset; /* 0x0 */
    float rate;               /* 0x4 */
    unsigned int length;      /* 0x8 */
    unsigned int unitsPerSec; /* 0xc */
    __int64 startTime;        /* 0x10 */
} Clip_83013F90;

typedef struct Entry_83013F90 {
    unsigned int key; /* 0x0 */
    int f4;
    Clip_83013F90 clip; /* 0x8 */
    char pad20[0x8];
} Entry_83013F90;

typedef struct Map_83013F90 {
    int f0;
    Entry_83013F90 *begin; /* 0x4 */
    Entry_83013F90 *end;   /* 0x8 */
    int fc;
    int cs[1]; /* 0x10 */
} Map_83013F90;

extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern int fn_82A1E968(__int64 *counter);
extern float lbl_8326459C;

static __inline int Found(Map_83013F90 *m, Entry_83013F90 *p)
{
    return p != m->end;
}

static __inline Clip_83013F90 *Get(Map_83013F90 *m, Entry_83013F90 *p)
{
    return Found(m, p) ? &p->clip : 0;
}

int fn_83013F90(Map_83013F90 *map, unsigned int key, unsigned int *position)
{
    Entry_83013F90 *e;
    Clip_83013F90 *clip;
    void *cs = map->cs;
    __int64 now;
    unsigned int pos;
    unsigned int length;

    RtlEnterCriticalSection(cs);
    for (e = map->begin; e != map->end && e->key != key; e++) {
    }
    clip = Get(map, e);
    if (clip == 0) {
        *position = 0;
        RtlLeaveCriticalSection(cs);
        return 2;
    }
    fn_82A1E968(&now);
    pos = (unsigned int)((float)(now - clip->startTime) / lbl_8326459C * clip->rate +
                         (float)clip->startOffset * 1000.0f / (float)clip->unitsPerSec);
    length = (unsigned int)((float)clip->length * 1000.0f / (float)clip->unitsPerSec);
    *position = pos < length ? pos : length;
    RtlLeaveCriticalSection(cs);
    return 1;
}
