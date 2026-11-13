typedef struct Result_82859760 {
    int id;
    float radius;
    int hits;
} Result_82859760;

typedef struct Query_82859760 {
    char pad0[0x2c];
    int id;                /* 0x2c */
    float radius;          /* 0x30 */
} Query_82859760;

typedef struct Space_82859760 {
    char pad0[0x10];
    float toLocal[16];     /* 0x10 */
    float toLocal2[16];    /* 0x50 */
    char pad90[4];
    void *transform;         /* 0x94 */
} Space_82859760;

extern Result_82859760 lbl_83211314;
extern Space_82859760 *fn_8285A808(void);
extern void **fn_8285A830(Query_82859760 *query, void *key);
extern void fn_8280AD30(float *m, float *v, float *o);
extern void fn_82859550(void *tree, float *from, float *to, int flags);

int fn_82859760(Query_82859760 *query, void *key, float *from, float *to)
{
    Space_82859760 *space;
    int id;
    float radius;
    void **node;
    float localFrom[4];
    float localTo[4];

    id = query->id;
    radius = query->radius;
    lbl_83211314.id = id;
    lbl_83211314.radius = radius;
    lbl_83211314.hits = 0;
    space = fn_8285A808();
    node = fn_8285A830(query, key);
    if (space->transform != 0) {
        fn_8280AD30(space->toLocal2, from, localFrom);
        fn_8280AD30(space->toLocal, to, localTo);
        fn_82859550(*node, localFrom, localTo, 0);
    } else {
        fn_82859550(*node, from, to, 0);
    }
    return lbl_83211314.hits;
}
