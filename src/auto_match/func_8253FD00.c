typedef struct Entry_8253FD00 {
  float a;
  float numerator;
  float defaultValue;
} Entry_8253FD00;

extern Entry_8253FD00 lbl_831C1E74[];
extern const float lbl_82192680;
extern const float lbl_821916FC;
extern const float lbl_821954B0[];
extern float fn_82809400(float x);

void fn_8253FD00(int index, float *out, float value)
{
  float num = lbl_831C1E74[index].numerator;
  *out = fn_82809400(num / ((value == lbl_82192680 ? lbl_831C1E74[index].defaultValue : value) * lbl_821916FC)) * lbl_821954B0[0x80];
}
