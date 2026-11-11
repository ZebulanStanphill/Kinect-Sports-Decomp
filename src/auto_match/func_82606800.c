// Computes the falloff weight scale * f(-(input->value * rate)) through fn_82F64A40 into
// *weightOut and clears *vectorOut with the game's reserved zero vector v77; either output
// may be null.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Input_82606800 {
    float pad00;
    float value;      // 0x04
} Input_82606800;

typedef struct Tuning_82606800 {
    char pad00[0x30];
    float scale;      // 0x30
    float rate;       // 0x34
    char pad38[0x20];
} Tuning_82606800;

extern Tuning_82606800 lbl_831BF6F0;

extern double fn_82F64A40(double x);

void fn_82606800(void *self, void *arg1, const Input_82606800 *input, void *arg3,
                 float *weightOut, __vector4 *vectorOut)
{
    if (weightOut != 0) {
        float e = (float)fn_82F64A40(-(input->value * lbl_831BF6F0.rate));
        *weightOut = lbl_831BF6F0.scale * e;
    }
    if (vectorOut != 0) {
        *vectorOut = __VMXGetReg(77);
    }
}
