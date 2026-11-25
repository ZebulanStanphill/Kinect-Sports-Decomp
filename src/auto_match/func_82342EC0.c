typedef struct SharedRef_82342EC0 {
    void *ptr; /* 0x00 */
    void *rep; /* 0x04 */
} SharedRef_82342EC0;

typedef struct Items_82342EC0 {
    void *begin;    /* 0x00 */
    void *end;      /* 0x04 */
    void *capacity; /* 0x08 */
} Items_82342EC0;

typedef struct Settings_82342EC0 {
    int id;               /* 0x00 */
    int f04;              /* 0x04 */
    float f08;            /* 0x08 */
    float f0C;            /* 0x0C */
    float f10;            /* 0x10 */
    float f14;            /* 0x14 */
    int f18;              /* 0x18 */
    unsigned char f1C;    /* 0x1C */
    int f20;              /* 0x20 */
    int f24;              /* 0x24 */
    int f28;              /* 0x28 */
    float f2C;            /* 0x2C */
    float f30;            /* 0x30 */
    float f34;            /* 0x34 */
    float f38;            /* 0x38 */
    float f3C;            /* 0x3C */
    float f40;            /* 0x40 */
    float f44;            /* 0x44 */
    int f48;              /* 0x48 */
    Items_82342EC0 items; /* 0x4C */
    int f58;              /* 0x58 */
} Settings_82342EC0;

typedef struct Object_82342EC0 {
    void *vtable;                /* 0x00 */
    int base[3];                 /* 0x04 */
    void *model;                 /* 0x10 */
    Settings_82342EC0 *settings; /* 0x14 */
} Object_82342EC0;

extern SharedRef_82342EC0 *fn_82365BD8(SharedRef_82342EC0 *out, SharedRef_82342EC0 *src);
extern void fn_82341008(Object_82342EC0 *self, int a, int b, int c);
extern void *fn_82347890(void *mem, SharedRef_82342EC0 *ref);
extern void fn_822315A0(void *rep);
extern void *fn_8265C9E0(unsigned int size);
extern char lbl_821B1BD0[];
extern char lbl_821B1980[];

static __forceinline void InitItems(Items_82342EC0 *items)
{
    items->begin = 0;
    items->end = 0;
    items->capacity = 0;
}

static __forceinline Settings_82342EC0 *InitSettings(Settings_82342EC0 *settings)
{
    settings->f04 = 0;
    settings->f18 = 0;
    settings->f1C = 0;
    settings->f20 = 0;
    settings->f24 = 0;
    settings->f28 = 0;
    settings->f48 = 0;
    settings->id = -1;
    settings->f08 = 0.0f;
    settings->f0C = 1.0f;
    settings->f10 = 0.0f;
    settings->f14 = 1.0f;
    settings->f2C = 7.5f;
    settings->f30 = 1.2f;
    settings->f34 = 15.0f;
    settings->f38 = 2.0f;
    settings->f3C = 1.0f;
    settings->f40 = 0.5f;
    settings->f44 = -0.25f;
    InitItems(&settings->items);
    return settings;
}

static __forceinline void InitMid(Object_82342EC0 *self, int a, int b, SharedRef_82342EC0 *ref)
{
    SharedRef_82342EC0 modelRef;
    void *mem;
    void *model;

    fn_82341008(self, a, b, 8);
    self->vtable = lbl_821B1BD0;
    mem = fn_8265C9E0(0xe0);
    if (mem != 0) {
        model = fn_82347890(mem, fn_82365BD8(&modelRef, ref));
    } else {
        model = 0;
    }
    self->model = model;
    if (ref->rep != 0) {
        fn_822315A0(ref->rep);
    }
}

Object_82342EC0 *fn_82342EC0(Object_82342EC0 *self, int a, int b, SharedRef_82342EC0 *ref)
{
    SharedRef_82342EC0 midRef;
    Settings_82342EC0 *mem;
    Settings_82342EC0 *settings;

    InitMid(self, a, b, fn_82365BD8(&midRef, ref));
    self->vtable = lbl_821B1980;
    mem = (Settings_82342EC0 *)fn_8265C9E0(0x5c);
    if (mem != 0) {
        settings = InitSettings(mem);
    } else {
        settings = 0;
    }
    self->settings = settings;
    if (ref->rep != 0) {
        fn_822315A0(ref->rep);
    }
    return self;
}
