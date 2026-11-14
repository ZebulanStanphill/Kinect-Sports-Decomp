typedef struct Locator_8240EC28 {
    char pad0[0x190];
    int active;                 /* 0x190 */
} Locator_8240EC28;

typedef struct Found_8240EC28 {
    int pad0;
    Locator_8240EC28 *locator;  /* 0x4 */
} Found_8240EC28;

typedef struct Model_8240EC28 {
    char pad0[0x128];
    char nodes[4];              /* 0x128 */
} Model_8240EC28;

typedef struct World_8240EC28 {
    char pad0[0x93c];
    void *trails;               /* 0x93c */
} World_8240EC28;

typedef struct Owner_8240EC28 {
    char pad0[0x4c];
    World_8240EC28 *world;      /* 0x4c */
    char pad50[0x8c0 - 0x50];
    Model_8240EC28 *model;      /* 0x8c0 */
} Owner_8240EC28;

typedef struct Self_8240EC28 {
    char pad0[0x28];
    Owner_8240EC28 *owner;      /* 0x28 */
    char pad2c[0x1f0 - 0x2c];
    char trail[0x68];           /* 0x1f0 */
    int registered;             /* 0x258 */
    float time;                 /* 0x25c */
    int count;                  /* 0x260 */
    void *effect;               /* 0x264 */
} Self_8240EC28;

extern Found_8240EC28 *fn_825735B8(void *nodes, const char *name);
extern void fn_82573868(Owner_8240EC28 *owner, void *trail);
extern void fn_82575DF0(void *trails, void *effect);
extern void XMemSet(void *p, int value, unsigned int size);
extern void fn_824106F8(void *self, int flag, int world);

void fn_8240EC28(Self_8240EC28 *self)
{
    void *nodes = self->owner->model->nodes;
    if (nodes != 0) {
        Found_8240EC28 *found = fn_825735B8(nodes, "trailLocator1");
        if (found != 0) {
            found->locator->active = 0;
        }
    }
    self->count = 0;
    self->time = 0.0f;
    if (self->registered != 0) {
        fn_82573868(self->owner, self->trail);
    }
    XMemSet(self->trail, 0, 0x68);
    self->registered = 0;
    if (self->effect != 0) {
        fn_82575DF0(self->owner->world->trails, self->effect);
        self->effect = 0;
    }
    if ((int)self->owner->world != 0) {
        fn_824106F8(self, 0, (int)self->owner->world);
    }
}
