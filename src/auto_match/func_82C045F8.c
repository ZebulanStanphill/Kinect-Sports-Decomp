typedef struct Object_82C045F8 Object_82C045F8;

typedef struct Vtable_82C045F8 {
    void *slots[0x74 / 4];
    __int64 (*getTime)(Object_82C045F8 *); /* 0x74 */
} Vtable_82C045F8;

struct Object_82C045F8 {
    Vtable_82C045F8 *vtable; /* 0x000 */
    char pad004[0x11c];
    __int64 position; /* 0x120 */
    __int64 time;     /* 0x128 */
    char pad130[8];
    int remaining; /* 0x138 */
    char pad13c[0x18];
    float rate; /* 0x154 */
};

static __forceinline void UpdatePosition(__int64 *position, __int64 *previous, __int64 time, float rate)
{
    *position = (__int64)((float)(time - *previous) * rate + (float)*position);
    *previous = time;
}

int fn_82C045F8(Object_82C045F8 *self, __int64 target, int *out)
{
    __int64 time = self->vtable->getTime(self);
    if (self->time == 0) {
        self->time = time;
    }
    UpdatePosition(&self->position, &self->time, time, self->rate);
    {
        int remaining = (int)target - (int)self->position;
        *out = remaining;
        self->remaining = remaining;
    }
    return 0;
}
