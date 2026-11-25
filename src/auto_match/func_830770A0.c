typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Joint_830770A0 {
    __vector4 position;
} Joint_830770A0;

typedef struct Balance_830770A0 {
    char pad00[0x10];
    void *skeleton; /* 0x10 */
    char pad14[0x20 - 0x14];
    float weightA; /* 0x20 */
    float weightB; /* 0x24 */
} Balance_830770A0;

extern Joint_830770A0 fn_8306D698(void *skeleton, int joint);
extern __vector4 fn_8306ED30(__vector4 a, __vector4 b);
extern __vector4 fn_8306EDB0(__vector4 v);
extern float fn_8306ED98(__vector4 a, __vector4 b);
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);
extern float fn_8306E818(float a, float b, float t);

/* Straightens the pair (*a, *b) towards their weighted mean by how straight the limb's
   three joints are (left or right side). */
void fn_830770A0(Balance_830770A0 *self, unsigned char left, float *a, float *b)
{
    __vector4 root;
    __vector4 middle;
    __vector4 end;
    __vector4 upper;
    __vector4 lower;
    float cosine;
    float straightness;
    float sum;
    float value;
    float weightA;
    float weightB;
    float x;

    if (left) {
        root = fn_8306D698(self->skeleton, 0xc).position;
        middle = fn_8306D698(self->skeleton, 0xd).position;
        end = fn_8306D698(self->skeleton, 0xe).position;
    } else {
        root = fn_8306D698(self->skeleton, 0x10).position;
        middle = fn_8306D698(self->skeleton, 0x11).position;
        end = fn_8306D698(self->skeleton, 0x12).position;
    }
    upper = fn_8306EDB0(fn_8306ED30(root, middle));
    lower = fn_8306EDB0(fn_8306ED30(middle, end));
    cosine = fn_8306ED98(upper, lower);
    straightness = fn_82539560(cosine, 0.5f, 1.0f, 0.0f, 1.0f);
    weightA = self->weightA;
    x = *a;
    weightB = self->weightB;
    sum = x * weightA + *b * weightB;
    value = fn_8306E818(x, sum / (weightB + weightA), straightness);
    *a = value;
    *b = (sum - self->weightA * value) / self->weightB;
}
