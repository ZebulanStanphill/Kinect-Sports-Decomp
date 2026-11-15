extern const float lbl_821917A8[];
extern void fn_822A6F38(void *self, void *value, unsigned int first, unsigned int second, unsigned int mode,
                        float start, float end);

void fn_822A6998(unsigned char *self, unsigned int *value, unsigned int first, unsigned int second)
{
    float start = 0.0f;
    *(float *)(self + 0x528) = start;
    *(unsigned int *)(self + 0x110) = *value;
    if (*(int *)(self + 0x108) != 3) {
        *(int *)(self + 0x108) = 3;
        fn_822A6F38(self, self + 0x110, first, second, 1, start, lbl_821917A8[6]);
        *(int *)(self + 0x53c) = 1;
    } else {
        fn_822A6F38(self, self + 0x110, first, second, 1, start, lbl_821917A8[6]);
    }
    *(float *)(self + 0x528) = start;
}
