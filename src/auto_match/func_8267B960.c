struct Properties_8267B960 {
    unsigned int alignment;
    unsigned int unused04;
    unsigned int capacity; /* 0x08 */
    unsigned int unused0C;
    unsigned int unused10;
    unsigned int unused14;
};
struct Provider_8267B960;

struct Vtable_8267B960 {
    void (*getProperties)(struct Provider_8267B960 *self, struct Properties_8267B960 *properties);
};

struct Provider_8267B960 {
    struct Vtable_8267B960 *vtable;
};

struct Object_8267B960 {
    void *vtable;
    char localProvider[0x9c];
    struct Provider_8267B960 *provider; /* 0xa0 */
    void *activeProvider;
    unsigned int capacity;
    unsigned int alignment;
    int unused;
};

extern char lbl_82005520[];
extern void fn_82692DC0(void *provider);
extern void fn_82692DE8(void *provider, struct Provider_8267B960 *source);
extern void *memset(void *destination, int value, unsigned int size);

struct Object_8267B960 *fn_8267B960(struct Object_8267B960 *self, struct Provider_8267B960 *provider)
{
    struct Properties_8267B960 properties;
    void *local = self->localProvider;
    self->vtable = lbl_82005520;
    fn_82692DC0(local);
    self->provider = provider;
    self->capacity = 0x1000;
    {
        int *pUnused = &self->unused;
        *pUnused = 0;
    }
    self->activeProvider = provider;
    self->alignment = 1;
    memset(&properties, 0, sizeof(properties));
    provider->vtable->getProperties(provider, &properties);
    if (properties.capacity != 0) {
        fn_82692DE8(local, provider);
        self->activeProvider = local;
        self->capacity = properties.capacity;
    }
    if (self->alignment < properties.alignment) {
        self->alignment = properties.alignment;
    }
    return self;
}
