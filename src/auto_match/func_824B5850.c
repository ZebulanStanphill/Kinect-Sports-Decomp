typedef struct Settings_824B5850 {
    int pad[2];
    int previous;   /* 0x8 */
    int pad2[2];
    int current;    /* 0x14 */
} Settings_824B5850;

typedef struct Obj_824B5850 {
    char pad[0x48];
    float currentValue;    /* 0x48 */
    float previousValue;   /* 0x4c */
} Obj_824B5850;

extern Settings_824B5850 lbl_831C4610;
extern float fn_824B58A8(Obj_824B5850 *self, int key, int mode);

float fn_824B5850(Obj_824B5850 *self, int key)
{
    float value = fn_824B58A8(self, key, lbl_831C4610.current);
    self->currentValue = value;
    if (lbl_831C4610.previous != lbl_831C4610.current)
        value = fn_824B58A8(self, key, lbl_831C4610.previous);
    self->previousValue = value;
    return 0.0f;
}
