extern float fn_82E92580(void *context, void *first, void *second, unsigned int count, int mode);
static const float quarter = 0.25f;
extern const double lbl_8215F708;

unsigned int fn_82E92718(unsigned char *self, unsigned char *other, unsigned int bytes, float *first,
                         float *second)
{
    unsigned int count = bytes >> 2;
    float value;
    *first = fn_82E92580(self, other + 0x418, self + 0x418, count, 1);
    value = fn_82E92580(self, other + 0x18, self + 0x18, count, 1);
    *second = value;
    if (*first > lbl_8215F708 || value > lbl_8215F708 || (*first > quarter && value > quarter)) {
        return 1;
    }
    return 0;
}
