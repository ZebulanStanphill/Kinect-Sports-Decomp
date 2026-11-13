/* Stores the raw value from fn_824AAC40 remapped (fn_82539560) from [lbl_821916FC, lbl_82192438[18]]
   to [0, 1] at offset 0x30. */
typedef struct Self_824AABD8 {
    char pad0[0x30];
    float value;             /* 0x30 */
} Self_824AABD8;

extern float lbl_821916FC;
extern float lbl_82192438[];
extern float lbl_821CA45C[];
extern float fn_824AAC40(Self_824AABD8 *self, void *source);
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

void fn_824AABD8(Self_824AABD8 *self, void *source)
{
    float hi = lbl_82192438[18];
    float x = fn_824AAC40(self, source);
    float lo = lbl_821916FC;
    self->value = fn_82539560(x, lo, hi, 0.0f, lbl_821CA45C[1]);
}
