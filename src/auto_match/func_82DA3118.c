#include <math.h>

typedef struct Limiter_82DA3118 {
    char pad0[0x18];
    float value;
    float unk1c;
    float limit;
    float snap;
} Limiter_82DA3118;

float fn_82DA3118(Limiter_82DA3118 *self)
{
    if (self->limit != -1.0f && fabsf(self->limit - self->value) < self->snap)
        self->limit = self->value;
    if (self->limit == -1.0f)
        return self->value;
    return self->value - self->limit >= 0.0f ? self->limit : self->value;
}
