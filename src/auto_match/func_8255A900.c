extern const float lbl_82193C20[];
extern int fn_8255A780(float a, float b, float tolerance);

int fn_8255A900(const float *angles)
{
    return fn_8255A780(angles[0], 0.0f, lbl_82193C20[0x28]) &&
           fn_8255A780(angles[1], 0.0f, lbl_82193C20[0x28]) &&
           fn_8255A780(angles[2], 0.0f, lbl_82193C20[0x28]);
}
