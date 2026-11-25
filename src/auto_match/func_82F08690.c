typedef struct Device_82F08690 {
    char pad0[0x204c];
    unsigned int format; /* 0x204c */
    char pad2050[0x6d54 - 0x2050];
    int altShaders; /* 0x6d54 */
    char pad6d58[0x7b40 - 0x6d58];
    void *context; /* 0x7b40 */
} Device_82F08690;

typedef struct Shader_82F08690 {
    int words[8];
} Shader_82F08690;

extern Shader_82F08690 lbl_831A9A10[22];
extern int fn_82ED3520(void *context, int a, int b, int c);

void fn_82F08690(Device_82F08690 *device, int flags, int a, int b, int c, int bits, Shader_82F08690 **out,
                 int unused8, int unused9, int unused10, int unused11, unsigned int format, int simple)
{
    if (simple != 0) {
        *out = 0;
        if ((flags & 8) != 0 && fn_82ED3520(device->context, a, b, c) == 0) {
            *out = &lbl_831A9A10[0];
        }
    } else {
        *out = 0;
        if ((flags & 8) == 0 || fn_82ED3520(device->context, a, b, c) != 0) {
            return;
        }
        if (device->altShaders == 0) {
            if (bits == 0x40) {
                *out = &lbl_831A9A10[9];
            } else if (bits == 0x20) {
                if (format == device->format) {
                    *out = &lbl_831A9A10[5];
                } else {
                    *out = &lbl_831A9A10[7];
                }
            } else {
                *out = &lbl_831A9A10[4];
            }
        } else if (bits == 0x40) {
            *out = &lbl_831A9A10[18];
        } else if (bits == 0x20) {
            if (format == device->format) {
                *out = &lbl_831A9A10[14];
            } else {
                *out = &lbl_831A9A10[16];
            }
        } else {
            *out = &lbl_831A9A10[13];
        }
    }
}
