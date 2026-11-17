extern float lbl_82014C48;
extern unsigned char lbl_831F1348;

float fn_827669E8(char *self, unsigned int index)
{
    if (index == -1) {
        return lbl_82014C48;
    }
    if (*(unsigned int *)(self + 0x34) == 0) {
        if (lbl_831F1348 == 0) {
            lbl_831F1348 = 1;
        }
        return lbl_82014C48;
    }
    if (index < *(unsigned int *)(self + 0x34)) {
        return *(float *)(*(char **)(self + 0x30) + index * 12);
    }
    return 0.0f;
}
