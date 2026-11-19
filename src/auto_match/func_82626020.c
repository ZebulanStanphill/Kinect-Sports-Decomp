typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Hit_82626020 {
    char pad0[0x10];
    __vector4 position; /* 0x10 */
    char pad20[0x23 - 0x20];
    unsigned char material; /* 0x23 */
    int object;             /* 0x24 */
} Hit_82626020;

typedef struct Results_82626020 {
    char pad0[4];
    Hit_82626020 *first; /* 0x4 */
} Results_82626020;

typedef struct Query_82626020 {
    int base; /* 0x0 */
    char pad4[0x10 - 0x4];
    Results_82626020 *results; /* 0x10 */
    char pad14[0x188 - 0x14];
    int offset;   /* 0x188 */
    int capacity; /* 0x18c */
    int size;     /* 0x190 */
    char pad194[0x19c - 0x194];
    unsigned short count; /* 0x19c */
} Query_82626020;

typedef struct LastHit_82626020 {
    int pad0;
    unsigned char material; /* 0x4 */
    int object;             /* 0x8 */
    int padC;
    __vector4 position; /* 0x10 */
} LastHit_82626020;

typedef struct World_82626020 {
    char pad0[0x6d0];
    void *collision; /* 0x6d0 */
} World_82626020;

extern LastHit_82626020 lbl_83274B10;
extern Query_82626020 *fn_82579288(void *collision);
extern int fn_825795A8(Query_82626020 *query, const __vector4 *start, const __vector4 *end, int mask);
extern int fn_82579688(Query_82626020 *query, const __vector4 *start, const __vector4 *end, float radius,
                       int mask, int a, int b);

void fn_82626020(World_82626020 *world, const __vector4 *start, const __vector4 *end, float radius)
{
    Query_82626020 *query = fn_82579288(world->collision);
    int hit;

    if (radius != 0.0f) {
        hit = fn_82579688(query, start, end, radius, 0x1000c, 0, 0);
    } else {
        hit = fn_825795A8(query, start, end, 0x1000c);
    }
    if (hit != 0) {
        Hit_82626020 *first = query->results->first;
        lbl_83274B10.material = first->material;
        lbl_83274B10.object = first->object;
        lbl_83274B10.position = first->position;
    }
    query->count = 0;
    {
        int *size = &query->size;
        *size = query->capacity;
    }
    *((unsigned char *)query->offset + query->base + 0x754) = 0;
}
