typedef struct Device_829C8668 {
    char pad0[0x60];
    int busy;
    char pad1[0x64c];
    unsigned int valid; // 0x6b0
    char pad2[0x10];
    int level; // 0x6c4
    char pad3[0x18];
    int values[3]; // 0x6e0
    int total;     // 0x6ec
} Device_829C8668;

extern int lbl_83214FFC;
extern Device_829C8668 lbl_83215000;
extern const float lbl_82054148;
extern int fn_829C7C30(int port);
extern float fn_829C7D80(int n);

int fn_829C8668(unsigned int port, unsigned int property, float *out)
{
    int status;
    Device_829C8668 *device = &lbl_83215000;

    if (lbl_83214FFC == 0)
        return (int)0x8000ffff;
    if (out == 0)
        return (int)0x80070057;
    *out = 0.0f;
    if (device->busy)
        return (int)0x8301000b;
    if (port >= 1)
        return (int)0x80070057;

    switch (property) {
    case 0:
        if ((device->valid & 1) == 0) {
            status = fn_829C7C30(0);
            if (status < 0)
                return status;
        }
        *out = (float)device->total * lbl_82054148;
        return 0;
    case 5:
        *out = (float)device->level * lbl_82054148;
        return 0;
    case 6:
        if ((device->valid & 2) == 0) {
            status = fn_829C7C30(0);
            if (status < 0)
                return status;
        }
        *out = fn_829C7D80(device->values[0]);
        return 0;
    case 7:
        if ((device->valid & 4) == 0) {
            status = fn_829C7C30(0);
            if (status < 0)
                return status;
        }
        *out = fn_829C7D80(device->values[1]);
        return 0;
    case 8:
        if ((device->valid & 8) == 0) {
            status = fn_829C7C30(0);
            if (status < 0)
                return status;
        }
        *out = fn_829C7D80(device->values[2]);
        return 0;
    default:
        return (int)0x80070057;
    }
}
