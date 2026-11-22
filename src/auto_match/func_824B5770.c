#include <math.h>

typedef struct Range_824B5770 {
    float minimum; /* 0x0 */
    float maximum; /* 0x4 */
    int mode;      /* 0x8 */
} Range_824B5770;

typedef struct Settings_824B5770 {
    Range_824B5770 previous; /* 0x0 */
    Range_824B5770 current;  /* 0xc */
} Settings_824B5770;

typedef struct Obj_824B5770 {
    char pad0[0x48];
    float currentValue;  /* 0x48 */
    float previousValue; /* 0x4c */
    int allowPositive;   /* 0x50 */
    int allowNegative;   /* 0x54 */
    int usePrevious;     /* 0x58 */
} Obj_824B5770;

extern Settings_824B5770 lbl_831C4610;

extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

float fn_824B5770(Obj_824B5770 *self, int allowPositive, int allowNegative, int usePrevious)
{
    float value;

    if (allowPositive == 0 && allowNegative == 0) {
        return 0.0f;
    }
    self->allowPositive = allowPositive;
    self->allowNegative = allowNegative;
    self->usePrevious = usePrevious;
    value = usePrevious != 0 ? self->previousValue : self->currentValue;
    if (allowPositive == 0) {
        value = value >= 0.0f ? 0.0f : value;
    }
    if (allowNegative == 0) {
        value = value >= 0.0f ? value : 0.0f;
    }
    return fn_82539560(
        fabs(value), usePrevious != 0 ? lbl_831C4610.previous.minimum : lbl_831C4610.current.minimum,
        usePrevious != 0 ? lbl_831C4610.previous.maximum : lbl_831C4610.current.maximum, 0.0f, 1.0f);
}
