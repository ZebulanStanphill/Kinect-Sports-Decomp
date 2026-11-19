typedef struct String_82554E20 {
    union {
        char buffer[16];
        char *pointer;
    } data; /* 0x0 */

    unsigned int size;     /* 0x10 */
    unsigned int capacity; /* 0x14 */
} String_82554E20;

typedef struct Desc_82554E20 {
    int type;         /* 0x0 */
    int pad4[7];      /* 0x4 */
    const char *path; /* 0x20 */
    int pad24[9];     /* 0x24 */
} Desc_82554E20;

typedef struct Device_82554E20 Device_82554E20;

typedef struct DeviceVtbl_82554E20 {
    void *slots[12];
    void *(*getContext)(Device_82554E20 *self); /* 0x30 */
} DeviceVtbl_82554E20;

struct Device_82554E20 {
    DeviceVtbl_82554E20 *vt;
};

typedef struct Self_82554E20 {
    char pad0[0x18];
    void *resource; /* 0x18 */
} Self_82554E20;

extern void *memset(void *dst, int value, unsigned int size);
extern void *lbl_83265A24;
extern void *lbl_8320A898;
extern char *fn_825200F0(char *buffer, void *source);
extern void fn_827D78D0(String_82554E20 *out, void *table, const char *key, int length, int flags);
extern int fn_82526C70(char *buffer, unsigned int size, const char *format, ...);
extern void fn_82230300(String_82554E20 *string, int tidy, int size);
extern Device_82554E20 *fn_82864E90(void);
extern int fn_82BFF338(void *factory, void *context, Desc_82554E20 *desc, void **out);
extern int fn_82555040(Self_82554E20 *self, void *source);

int fn_82554E20(Self_82554E20 *self, void *source)
{
    String_82554E20 name;
    Desc_82554E20 desc;
    char key[32];
    char path[0x104];
    unsigned char found;
    Device_82554E20 *device;
    void *factory;

    fn_827D78D0(&name, lbl_83265A24, fn_825200F0(key, source), -1, 0);
    fn_82526C70(path, 0x104, "%s", name.capacity >= 0x10 ? name.data.pointer : name.data.buffer);
    found = name.size != 0;
    fn_82230300(&name, 1, 0);
    if (found) {
        memset(&desc, 0, sizeof(desc));
        desc.type = 1;
        desc.path = path;
        device = fn_82864E90();
        factory = lbl_8320A898;
        if (fn_82BFF338(factory, device->vt->getContext(device), &desc, &self->resource) >= 0) {
            return fn_82555040(self, source);
        }
    }
    return 0;
}
