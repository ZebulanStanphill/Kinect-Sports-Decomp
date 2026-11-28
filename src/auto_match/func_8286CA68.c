typedef struct Vec3_828108B8 {
    float x;
    float y;
    float z;
} Vec3_828108B8;

typedef struct State_8286CA68 {
    int reserved;
    unsigned char ready;
    char padding05[0x1b];
    unsigned char hasFirst;
    char padding21[3];
    Vec3_828108B8 first;
    unsigned char hasSecond;
    char padding31[3];
    Vec3_828108B8 second;
    float reserved40;
    float low;
    float reserved48;
    float middle;
    float reserved50;
    float high;
    unsigned char changed;
} State_8286CA68;

extern Vec3_828108B8 fn_828108B8(const Vec3_828108B8 *, const Vec3_828108B8 *);
extern float fn_82810BE8(float *);
extern float fn_82809CB0(float);
extern float lbl_83211884;
extern unsigned int lbl_83211888;
extern const float lbl_82021534;
extern const float lbl_8202153C;
extern const float lbl_82021548;

int fn_8286CA68(State_8286CA68 *self)
{
    float low;
    float high;
    if (!self->ready) {
        return (int)0xa0300000;
    }
    if ((lbl_83211888 & 1) == 0) {
        lbl_83211888 |= 1;
        lbl_83211884 = lbl_82021548;
    }
    if (self->hasFirst == 1) {
        if (self->hasSecond == 1) {
            Vec3_828108B8 difference = fn_828108B8(&self->first, &self->second);
            float distance = fn_82809CB0(fn_82810BE8(&difference.x));
            if (distance > 0.01f) {
                float highScale;
                float blend;
                float blendScale;
                float lowScale;
                float lowBase;
                float zero;
                float delta;
                if (4.0f < distance) {
                    distance = 4.0f;
                }
                delta = distance - 0.01f;
                blendScale = lbl_83211884;
                lowScale = 0.4f;
                lowBase = 0.1f;
                highScale = 0.19999998807907104f;
                zero = 0.0f;

                blend = delta * blendScale;
                self->middle = zero;
                self->low = blend * lowScale + lowBase;
                self->high = -(blend * highScale - 0.95f);
                goto done;
            }
        }
        self->middle = 0.0f;
        low = 0.5f;
        high = 0.75f;
    } else {
        low = 0.0f;
        high = 1.0f;
        self->middle = 0.0f;
    }
    self->low = low;
    self->high = high;
done:
    self->changed = 1;
    return 0x20300000;
}
