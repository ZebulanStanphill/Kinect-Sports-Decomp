typedef struct Body_82D95350 {
    char pad0[0x10];
    char motion[0x130]; /* 0x10 */
    char center[0x10];  /* 0x140 */
} Body_82D95350;

typedef struct Shape_82D95350 {
    char pad0[0xf];
    unsigned char flags; /* 0xf */
} Shape_82D95350;

typedef struct Input_82D95350 {
    unsigned int which;    /* 0x0 */
    Body_82D95350 *bodyA;  /* 0x4 */
    Body_82D95350 *bodyB;  /* 0x8 */
    char *info;            /* 0xc */
    int state;             /* 0x10 */
    void *direction;       /* 0x14 */
    Shape_82D95350 *shape; /* 0x18 */
    int pad1c;
    float *distance; /* 0x20 */
    float *time;     /* 0x24 */
} Input_82D95350;

typedef struct Query_82D95350 {
    char *motionA;           /* 0x0 */
    char *motionB;           /* 0x4 */
    Body_82D95350 *selected; /* 0x8 */
    void *direction;         /* 0xc */
    Shape_82D95350 *shape;   /* 0x10 */
    float time;              /* 0x14 */
    float distance;          /* 0x18 */
    int started;             /* 0x1c */
    char *info;              /* 0x20 */
} Query_82D95350;

typedef struct Solver_82D95350 Solver_82D95350;

typedef struct SolverVtbl_82D95350 {
    void *slots[7];
    void (*solve)(Solver_82D95350 *self, Query_82D95350 *query); /* 0x1c */
} SolverVtbl_82D95350;

struct Solver_82D95350 {
    SolverVtbl_82D95350 *vtbl;
};

extern float fn_82D95480(Body_82D95350 *bodyA, Body_82D95350 *bodyB, char *centerA, char *centerB,
                         void *direction);

void fn_82D95350(Solver_82D95350 *self, Input_82D95350 *in)
{
    Query_82D95350 query;
    float time;
    float distance;
    int started;

    if ((in->shape->flags & 1) == 0) {
        return;
    }
    if (in->state == 3) {
        return;
    }
    if (in->state <= 0) {
        started = 0;
        time = *in->time;
    } else {
        started = 1;
        time = 0.0f;
    }
    if (in->distance != 0) {
        distance = *in->distance;
    } else {
        distance = fn_82D95480(in->bodyA, in->bodyB, in->bodyA->center, in->bodyB->center, in->direction);
    }
    query.motionA = in->bodyA->motion;
    query.motionB = in->bodyB->motion;
    query.direction = in->direction;
    query.shape = in->shape;
    query.time = time;
    query.distance = distance;
    query.started = started;
    query.info = in->info + 0x14;
    switch (in->which) {
    case 0:
        query.selected = in->bodyA;
        break;
    case 1:
        query.selected = in->bodyB;
        break;
    default:
        query.selected = 0;
        break;
    }
    self->vtbl->solve(self, &query);
    *in->distance = query.distance;
    if (in->state <= 0) {
        *in->time = query.time;
    }
}
