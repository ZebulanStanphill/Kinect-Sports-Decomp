typedef union __declspec(intrin_type) __declspec(align(16)) __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct Matrix_826182E0 {
    __vector4 r[4];
} Matrix_826182E0;

typedef struct Target_826182E0 {
    char pad0[0x60];
    Matrix_826182E0 world; /* 0x60 */
    char padA0[0x40];
    unsigned char visible; /* 0xe0 */
    char pade1;
    unsigned char active; /* 0xe2 */
    unsigned char layer;  /* 0xe3 */
    int mode;             /* 0xe4 */
    char pade8[0x14];
    int color; /* 0xfc */
    char pad100[0x90];
    int state; /* 0x190 */
    char pad194[0x12];
    unsigned char done; /* 0x1a6 */
} Target_826182E0;

typedef struct Link_826182E0 {
    Target_826182E0 *target;
    int pad4;
    struct Link_826182E0 *next; /* 0x08 */
} Link_826182E0;

typedef struct Group_826182E0 {
    int pad0;
    Target_826182E0 *master; /* 0x04 */
    char pad8[8];
    float time;           /* 0x10 */
    int state;            /* 0x14 */
    Link_826182E0 *links; /* 0x18 */
} Group_826182E0;

void fn_826182E0(Group_826182E0 *group, float time)
{
    Target_826182E0 *master;
    Target_826182E0 *target;
    Link_826182E0 *link;
    unsigned char allDone;

    master = group->master;
    if (group->state != master->state) {
        for (link = group->links; link != 0; link = link->next) {
            link->target->state = group->master->state;
        }
        master = group->master;
        group->state = master->state;
    }
    if ((master->active != 0 || master->visible != 0) && master->state != 0) {
        allDone = 1;
        for (link = group->links; link != 0; link = link->next) {
            target = link->target;
            if (target->done == 0) {
                if (target->state != 0) {
                    allDone = 0;
                }
            }
            target->color = group->master->color;
            link->target->mode = group->master->mode;
            {
                Matrix_826182E0 *dst = &link->target->world;
                Matrix_826182E0 *src = &group->master->world;
                dst->r[0] = src->r[0];
                dst->r[1] = src->r[1];
                dst->r[2] = src->r[2];
                dst->r[3] = src->r[3];
            }
            link->target->layer = group->master->layer;
        }
        if (allDone) {
            group->master->done = 1;
        }
    }
    group->time = time;
}
