typedef struct Progress_824BE290 {
    char reserved00000[0x24];
    unsigned short done;  /* 0x24 */
    unsigned short total; /* 0x26 */
    char reserved00028[0x80040];
    int active; /* 0x80068 */
} Progress_824BE290;

typedef struct FloatVector_824BE290 {
    int reserved00;
    float *first; /* 0x04 */
    float *last;  /* 0x08 */
    float *end;   /* 0x0c */
} FloatVector_824BE290;

static __forceinline int IsEmpty(const FloatVector_824BE290 *vector)
{
    return vector->first == vector->last;
}

static __forceinline float Back(const FloatVector_824BE290 *vector)
{
    return vector->last[-1];
}

typedef struct Loader_824BE290 {
    char reserved000[0xdc];
    float elapsed; /* 0xdc */
    char reservede0[0x10];
    FloatVector_824BE290 durations; /* 0xf0 */
    char reserved100[0x44c];
    int streaming; /* 0x54c */
} Loader_824BE290;

extern Progress_824BE290 *fn_8245A5C8(void);
extern const float lbl_821CA45C[2];

float fn_824BE290(Loader_824BE290 *self)
{
    Progress_824BE290 *progress;

    if (self->streaming != 0) {
        progress = fn_8245A5C8();
        if (progress->active == 0 || progress->total == 0) {
            return 0.0f;
        }
        return (float)progress->done / (float)progress->total;
    }
    if (IsEmpty(&self->durations)) {
        return lbl_821CA45C[1];
    }
    return self->elapsed / Back(&self->durations);
}
