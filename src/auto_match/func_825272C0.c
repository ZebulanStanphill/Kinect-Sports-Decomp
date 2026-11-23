typedef struct Plane_825272C0 {
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
} Plane_825272C0;

typedef struct Hooks_825272C0 {
    void *context;           /* 0x0 */
    void (*beginLoad)(void); /* 0x4 */
    void (*endLoad)(void);   /* 0x8 */
    void (*unload)(void);    /* 0xc */
} Hooks_825272C0;

typedef struct Pool_825272C0 {
    void *resource; /* 0x0 */
    void *owner;    /* 0x4 */
    int pad8;
} Pool_825272C0;

typedef struct PoolSet_825272C0 {
    Pool_825272C0 pools[4]; /* 0x00 */
    int current;            /* 0x30 */
} PoolSet_825272C0;

typedef struct Link_825272C0 {
    struct Link_825272C0 *prev; /* 0x0 */
    struct Link_825272C0 *next; /* 0x4 */
} Link_825272C0;

typedef struct Scene_825272C0 {
    char pad0[0x304];
    Link_825272C0 *links; /* 0x304 */
    char pad308[0x85C - 0x308];
    PoolSet_825272C0 pools; /* 0x85c */
} Scene_825272C0;

extern Plane_825272C0 lbl_831C080C;
extern Hooks_825272C0 lbl_8326AF28;

extern void fn_82522ED8(void *block);

void fn_825272C0(Scene_825272C0 *scene)
{
    PoolSet_825272C0 *set;
    Link_825272C0 *link;
    Link_825272C0 *next;
    Pool_825272C0 *pool;

    set = &scene->pools;
    while (set->current >= 0) {
        if (set->pools[set->current].resource != 0) {
            fn_82522ED8(set->pools[set->current].resource);
            set->pools[set->current].resource = 0;
        }
        pool = &set->pools[set->current];
        if (pool->owner != 0) {
            fn_82522ED8(pool->owner);
            pool->owner = 0;
        }
        set->current--;
    }
    link = scene->links;
    while (link != 0) {
        next = link->next;
        if (link->prev != 0)
            link->prev->next = link->next;
        if (link->next != 0)
            link->next->prev = link->prev;
        link->prev = 0;
        link->next = 0;
        fn_82522ED8(link);
        link = next;
    }
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
    if (lbl_8326AF28.unload != 0)
        lbl_8326AF28.unload();
}
