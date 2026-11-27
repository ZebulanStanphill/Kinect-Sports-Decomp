#include <math.h>

typedef struct RateControl_82E94518 {
    char pad0000[0x2a0];
    int defaultQuantizer; /* 0x2a0 */
    char pad02a4[0x74f8];
    int limitRise; /* 0x779c */
    char pad77a0[0xb8];
    int lastQuantizer; /* 0x7858 */
    char pad785c[4];
    float lastTarget; /* 0x7860 */
    char pad7864[4];
    float linear;    /* 0x7868 */
    float quadratic; /* 0x786c */
} RateControl_82E94518;

extern double fn_82F6B2A8(double x);

#define MAX_82E94518(a, b) (((a) > (b)) ? (a) : (b))
#define MIN_82E94518(a, b) (((a) < (b)) ? (a) : (b))

int fn_82E94518(RateControl_82E94518 *self, float target, int maximum)
{
    float discriminant;
    int quantizer;
    int low;
    int high;
    float scale;

    discriminant = self->linear * self->linear + self->quadratic * target * 4.0f;
    if (discriminant >= 0.0f) {
        if (self->quadratic >= 0.0f) {
            quantizer = (int)(float)fn_82F6B2A8((sqrtf(discriminant) + self->linear) / target * 0.5f);
        } else {
            scale = 1.0f / target;
            high = (int)(float)fn_82F6B2A8((sqrtf(discriminant) + self->linear) * scale * 0.5f);
            low = (int)(float)fn_82F6B2A8((self->linear - sqrtf(discriminant)) * scale * 0.5f);
            quantizer = low;
            if (self->lastQuantizer < high && self->lastQuantizer > low) {
                if (self->lastTarget >= target) {
                    quantizer = high;
                }
            } else if (abs(self->lastQuantizer - high) < abs(self->lastQuantizer - low)) {
                quantizer = high;
            }
        }
        if (self->limitRise != 0 && quantizer < self->lastQuantizer + 2) {
            quantizer = self->lastQuantizer + 2;
        } else if (quantizer < self->lastQuantizer - 2) {
            quantizer = self->lastQuantizer - 2;
        }
        quantizer = MIN_82E94518(maximum, MAX_82E94518(1, quantizer));
    } else {
        quantizer = self->defaultQuantizer;
    }
    return quantizer;
}
