typedef struct View_8259F600 {
    char pad00[0x10];
    float position[3]; /* 0x10 */
    char pad1c[0x14];
    float direction[3]; /* 0x30 */
    char pad3c[0x24];
} View_8259F600;

typedef struct Player_8259F600 {
    char pad00[0x40];
    View_8259F600 view; /* 0x40 */
    int hasView;        /* 0xa0 */
    char padA4[0xc];
} Player_8259F600;

typedef struct Plane_8259F600 {
    char pad00[8];
    float normal[3]; /* 0x08 */
    float current;   /* 0x14 */
    float distance;  /* 0x18 */
    char pad1c[0x64];
} Plane_8259F600;

extern Plane_8259F600 lbl_831C080C;
extern Player_8259F600 lbl_83296BE0[2];
extern View_8259F600 lbl_83296890;

static __forceinline int HasNormal(Plane_8259F600 *plane)
{
    return plane->normal[0] != 0.0f && plane->normal[1] != 0.0f && plane->normal[2] != 0.0f;
}

static __forceinline View_8259F600 *GetView(int index)
{
    if (lbl_83296BE0[index].hasView)
        return &lbl_83296BE0[index].view;
    return &lbl_83296890;
}

int fn_8259F600(int index)
{
    Plane_8259F600 *plane = &lbl_831C080C;
    View_8259F600 *view;

    if (plane->current == plane->distance)
        return HasNormal(plane);
    if (!HasNormal(plane))
        return 0;
    view = GetView(index);
    if (-(view->direction[2] * view->position[2] + view->direction[1] * view->position[1] +
          view->direction[0] * view->position[0]) < plane->distance)
        return 0;
    return 1;
}
