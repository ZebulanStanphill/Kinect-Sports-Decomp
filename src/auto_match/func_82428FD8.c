typedef struct Owner_82428FD8 {
    char pad0[0x2e4];
    float time;
} Owner_82428FD8;

typedef struct Self_82428FD8 {
    int pad0;
    Owner_82428FD8 *owner;
} Self_82428FD8;

typedef struct Stats_82428FD8 {
    char pad0[0x30];
    int value;
    char pad34[0xe4 - 0x34];
    int peak;
    char padE8[0x184 - 0xe8];
    unsigned int max;
    int maxPeak;
    int total;
    int count;
    int totalTime;
    int min;
} Stats_82428FD8;

static __forceinline void SetMin(int *dst, int v, unsigned int n)
{
    if (n > 0 && v >= *dst)
        v = *dst;
    *dst = v;
}

static __forceinline void SetMax(int *dst, int v)
{
    if (v < *dst)
        v = *dst;
    *dst = v;
}

static __forceinline void SetMaxP(int *dst, const int *src)
{
    int m = *dst;
    if (*src >= m)
        m = *src;
    *dst = m;
}

static __forceinline void Add(int *dst, int v)
{
    *dst += v;
}

void fn_82428FD8(Self_82428FD8 *self, Stats_82428FD8 *s)
{
    if (s->max > 0)
        SetMin(&s->min, s->value, 1);
    else
        { int *pMin = &s->min; *pMin = s->value; }
    SetMax((int *)&s->max, s->value);
    Add(&s->total, s->value);
    SetMaxP(&s->maxPeak, &s->peak);
    s->count++;
    Add(&s->totalTime, (unsigned int)self->owner->time);
}
