typedef struct ProfileList_829D9848 {
    char lock[0x1c];               /* 0x00 critical section */
    unsigned int count;            /* 0x1c */
    unsigned int capacity;         /* 0x20 */
    unsigned int pad24;            /* 0x24 */
    unsigned __int64 xuids[0x100]; /* 0x28 */
} ProfileList_829D9848;

typedef struct DeviceData_829D9848 {
    unsigned int deviceId; /* 0x00 */
    char rest[0x4c];
} DeviceData_829D9848;

typedef struct Profile_829D9848 {
    unsigned __int64 xuid; /* 0x00 */
    char rest[0x180];
} Profile_829D9848;

extern int fn_829D6D18(ProfileList_829D9848 *list);
extern void RtlEnterCriticalSection(void *lock);
extern void RtlLeaveCriticalSection(void *lock);
extern unsigned int XamContentCreateDeviceEnumerator(unsigned int contentType, unsigned int flags,
                                                     unsigned int count, unsigned int *bufferSize,
                                                     void **handle);
extern unsigned int XamEnumerate(void *handle, unsigned int flags, void *buffer, unsigned int bufferSize,
                                 unsigned int *itemsReturned, void *overlapped);
extern unsigned int XamProfileCreateEnumerator(unsigned int deviceId, void **handle);
extern unsigned int XamProfileEnumerate(void *handle, unsigned int flags, Profile_829D9848 *profile,
                                        void *overlapped);
extern unsigned char fn_82A1E658(void *handle);
extern void *memset(void *dst, int value, unsigned int size);

int fn_829D9848(ProfileList_829D9848 *list)
{
    unsigned int count;
    int hr;
    unsigned int result;
    void *deviceEnum;
    unsigned int itemsReturned;
    void *profileEnum;
    DeviceData_829D9848 device;
    Profile_829D9848 profile;

    count = 0;
    list->count = 0;
    hr = fn_829D6D18(list);
    if (hr < 0) {
        return hr;
    }
    RtlEnterCriticalSection(list);
    list->capacity = 0x100;
    if (XamContentCreateDeviceEnumerator(0xffffffff, 0, 1, 0, &deviceEnum) == 0) {
        while (XamEnumerate(deviceEnum, 2, &device, 0x50, &itemsReturned, 0) == 0) {
            if (itemsReturned == 0) {
                break;
            }
            if (XamProfileCreateEnumerator(device.deviceId, &profileEnum) == 0) {
                for (;;) {
                    memset(&profile, 0, sizeof(profile));
                    result = XamProfileEnumerate(profileEnum, 0, &profile, 0);
                    if (result == 0 && profile.xuid != 0) {
                        if (count >= 0x100) {
                            break;
                        }
                        list->xuids[count] = profile.xuid;
                        count++;
                    } else if (count >= 0x100 || result != 0) {
                        break;
                    }
                }
            }
            fn_82A1E658(profileEnum);
        }
        fn_82A1E658(deviceEnum);
    }
    RtlLeaveCriticalSection(list);
    return 0;
}
