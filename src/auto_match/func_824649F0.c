extern const float lbl_82193AD8[82];

void fn_824649F0(char *self, float delta)
{
    float value = *(float *)(self + 0x18);
    float tolerance = lbl_82193AD8[6];
    if (value >= (*(float *)(self + 0x1c)) - tolerance && value <= (*(float *)(self + 0x1c)) + tolerance) {
        return;
    }
    if (value > (*(float *)(self + 0x1c))) {
        value -= *(float *)(self + 0x20) * delta;
    } else {
        value += *(float *)(self + 0x20) * delta;
    }
    *(float *)(self + 0x18) = value;
}
