typedef struct Name_82527168 {
    unsigned int id; /* 0x0 */
} Name_82527168;

typedef struct Plane_82527168 {
    float origin[2]; /* 0x00 */
    float normal[3]; /* 0x08 */
    float current;   /* 0x14 */
    float distance;  /* 0x18 */
    int active;      /* 0x1c */
    float nearLimit; /* 0x20 */
    float farLimit;  /* 0x24 */
    float scale;     /* 0x28 */
    float size;      /* 0x2c */
    float step;      /* 0x30 */
    float blend;     /* 0x34 */
    int enabled;     /* 0x38 */
} Plane_82527168;

typedef struct Hooks_82527168 {
    void *context;                          /* 0x0 */
    void (*beginLoad)(Name_82527168 *name); /* 0x4 */
    void (*endLoad)(void *resource);        /* 0x8 */
} Hooks_82527168;

typedef struct Entry_82527168 {
    void *resource; /* 0x0 */
    void *owner;    /* 0x4 */
} Entry_82527168;

typedef struct Pool_82527168 {
    char data[0xC];
} Pool_82527168;

typedef struct PoolSet_82527168 {
    Pool_82527168 pools[4]; /* 0x00 */
    int current;            /* 0x30 */
} PoolSet_82527168;

typedef struct Scene_82527168 {
    char pad0[0x7A4];
    char loader[4];         /* 0x7a4 */
    char resources[0xB4];   /* 0x7a8 */
    PoolSet_82527168 pools; /* 0x85c */
} Scene_82527168;

extern Plane_82527168 lbl_831C080C;
extern Hooks_82527168 lbl_8326AF28;

extern void fn_8265B648(Name_82527168 *name, unsigned int type);
extern void *fn_8251F720(Name_82527168 *name, int flags);
extern Entry_82527168 *fn_825A2410(Pool_82527168 *pool);
extern void **fn_8251E4D0(void *list);
extern int fn_8257ECD0(void *loader);

static __forceinline Pool_82527168 *Current(PoolSet_82527168 *set)
{
    return &set->pools[set->current];
}

void fn_82527168(Scene_82527168 *scene, Name_82527168 *name)
{
    unsigned int id = name->id;
    Name_82527168 local;
    void *resource;
    Entry_82527168 *entry;

    lbl_831C080C.active = 0;
    lbl_831C080C.enabled = 1;
    lbl_831C080C.origin[1] = 0.0f;
    lbl_831C080C.normal[1] = 0.0f;
    lbl_831C080C.origin[0] = 0.0f;
    lbl_831C080C.normal[0] = 0.0f;
    lbl_831C080C.normal[2] = 0.8f;
    lbl_831C080C.current = 0.0f;
    lbl_831C080C.distance = 0.0f;
    lbl_831C080C.nearLimit = 350.0f;
    lbl_831C080C.farLimit = 700.0f;
    lbl_831C080C.scale = 8.0f;
    lbl_831C080C.size = 32.0f;
    lbl_831C080C.step = 4.0f;
    lbl_831C080C.blend = 0.5f;
    if (id != 0) {
        local.id = id;
        fn_8265B648(&local, 0x19);
    } else {
        local.id = 0;
    }
    if (lbl_8326AF28.beginLoad != 0)
        lbl_8326AF28.beginLoad(&local);
    resource = fn_8251F720(&local, 0);
    if (resource != 0) {
        entry = fn_825A2410(Current(&scene->pools));
        entry->resource = resource;
        entry->owner = resource;
        *fn_8251E4D0(scene->resources) = resource;
        if (fn_8257ECD0(scene->loader) != 0)
            resource = 0;
    }
    if (lbl_8326AF28.endLoad != 0)
        lbl_8326AF28.endLoad(resource);
}
