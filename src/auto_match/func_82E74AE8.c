#include <string.h>

typedef struct Status_82E74AE8 {
    unsigned int words[2];
    unsigned short fields[4];
} Status_82E74AE8;
typedef struct Device_82E74AE8 Device_82E74AE8;

typedef struct VTable_82E74AE8 {
    void *padding[10];
    int (*getStatus)(Device_82E74AE8 *, Status_82E74AE8 *);
} VTable_82E74AE8;

struct Device_82E74AE8 {
    VTable_82E74AE8 *vtable;
};

extern int fn_82E74818(void *self, int mode, int wait);
extern int fn_82E73A90(void *self, unsigned __int64 time);

int fn_82E74AE8(unsigned char *self)
{
    int result;
    Status_82E74AE8 status;
    unsigned __int64 time;
    unsigned int divisor;
    Device_82E74AE8 *device;
    while (*(unsigned int *)(self + 0x1c) > 0) {
        result = fn_82E74818(self, 0, 1);
        if (result < 0) {
            goto done;
        }
    }
    memset(&status, 0, sizeof(status));
    device = *(Device_82E74AE8 **)(self + 0x1d8);
    result = device->vtable->getStatus(device, &status);
    if (result >= 0 && status.fields[1] != 0) {
        time = 0;
        divisor = *(unsigned int *)(*(unsigned char **)(self + 0xc) + 0x68);
        if (divisor != 0) {
            time = (*(unsigned int *)(self + 4) * 80000000U) / divisor;
        }
        fn_82E73A90(self, time);
    }
done:
    return result;
}
