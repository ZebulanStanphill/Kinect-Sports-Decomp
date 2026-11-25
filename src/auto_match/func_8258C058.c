typedef struct String_8258C058 {
    char storage[0x1c];
} String_8258C058;

typedef struct Entry_8258C058 {
    int f00;         /* 0x00 */
    int f04;         /* 0x04 */
    char name[0x40]; /* 0x08 */
    int value;       /* 0x48 */
} Entry_8258C058;

typedef struct Resource_8258C058 {
    Entry_8258C058 *data; /* 0x00 */
    int f04;              /* 0x04 */
} Resource_8258C058;

typedef struct AdConfig_8258C058 {
    const char *title;    /* 0x00 */
    const char *version;  /* 0x04 */
    unsigned short flags; /* 0x08 */
    char pad0A[0xa];
    int timeout;            /* 0x14 */
    const char *sdkVersion; /* 0x18 */
} AdConfig_8258C058;

typedef struct StateDesc_8258C058 {
    unsigned short f00;  /* 0x00 */
    unsigned short f02;  /* 0x02 */
    int format;          /* 0x04 */
    unsigned char f08;   /* 0x08 */
    unsigned char f09;   /* 0x09 */
    unsigned char f0A;   /* 0x0A */
    unsigned short mask; /* 0x0C */
    unsigned short f0E;  /* 0x0E */
    int f10;             /* 0x10 */
    unsigned char f14;   /* 0x14 */
    unsigned char f15;   /* 0x15 */
    unsigned char f16;   /* 0x16 */
} StateDesc_8258C058;

typedef struct Debug_8258C058 {
    char pad000[0x1c0];
    char ids[0x34]; /* 0x1C0 */
    int adsReady;   /* 0x1F4 */
    char pad1F8[0x15c];
    int cells[4]; /* 0x354 */
    char pad364[0xc8c];
    void *vertexShader; /* 0xFF0 */
    void *state;        /* 0xFF4 */
    float lineWidth;    /* 0xFF8 */
} Debug_8258C058;

extern void fn_82520158(const char *name, Resource_8258C058 *out, int flags);
extern Entry_8258C058 *fn_8251F720(Resource_8258C058 *resource, int index);
extern unsigned int fn_8251FBA8(Entry_8258C058 *data);
extern void fn_8251FA58(Entry_8258C058 *data);
extern String_8258C058 *fn_82230110(String_8258C058 *self, const char *text);
extern void fn_82230300(String_8258C058 *self, int built, unsigned int size);
extern int *fn_8258E568(void *map, String_8258C058 *key);
extern void fn_82BA02A8(void (*callback)(void));
extern void fn_82BE28A8(void (*first)(void), void (*second)(void));
extern unsigned int fn_82BE3778(AdConfig_8258C058 *config);
extern void *fn_82631830(Entry_8258C058 *data);
extern void *fn_82631BF8(StateDesc_8258C058 *desc);
extern void fn_8258D2B8(void);
extern void fn_8258CEE8(void);
extern void fn_825B1970(void);
extern void fn_824B4280(void);

void *memset(void *dst, int value, unsigned int size);

void fn_8258C058(Debug_8258C058 *self)
{
    Resource_8258C058 resource;
    StateDesc_8258C058 desc;
    AdConfig_8258C058 config;
    String_8258C058 key;
    Entry_8258C058 *entries;
    Entry_8258C058 *data;
    unsigned int result;

    self->adsReady = 0;
    fn_82520158("massive_configuration", &resource, 0);
    if (resource.data == 0) {
        return;
    }
    entries = fn_8251F720(&resource, 0);
    if (entries->value == 0) {
        return;
    }
    {
        unsigned int size = fn_8251FBA8(entries);

        if (size != 0) {
            unsigned int count = (size - sizeof(Entry_8258C058)) / sizeof(Entry_8258C058);

            if (count != 0) {
                Entry_8258C058 *entry = &entries[1];
                unsigned int i;

                for (i = 0; i < count; i++) {
                    fn_82230110(&key, entry[i].name);
                    *fn_8258E568(self->ids, &key) = entry[i].value;
                    fn_82230300(&key, 1, 0);
                }
            }
        }
    }
    fn_82BA02A8(fn_8258D2B8);
    fn_82BA02A8(fn_8258CEE8);
    fn_82BE28A8(fn_825B1970, fn_824B4280);
    memset(&config, 0, sizeof(config));
    config.version = "0.0";
    config.sdkVersion = "4.0.0.0";
    config.title = entries->name;
    config.timeout = 30000;
    config.flags = 0x20;
    result = fn_82BE3778(&config);
    if (result == 0 || result == 0xc9) {
        self->adsReady = 1;
    }
    fn_82520158("fxDebugMeshVertexShader", &resource, 0);
    data = fn_8251F720(&resource, 0);
    self->vertexShader = fn_82631830(data);
    fn_8251FA58(data);
    desc.f00 = 0;
    desc.f02 = 0;
    desc.f08 = 0;
    desc.format = 0x2a23b9;
    desc.f09 = 0;
    desc.f0A = 0;
    desc.mask = 0xff;
    desc.f0E = 0;
    desc.f10 = -1;
    desc.f14 = 0;
    desc.f15 = 0;
    desc.f16 = 0;
    self->state = fn_82631BF8(&desc);
    self->lineWidth = 0.003f;
    {
        int i;

        for (i = 0; i < 4; i++) {
            self->cells[i] = -10;
        }
    }
}
