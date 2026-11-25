typedef struct Pose_8272E140 {
    int x;          /* 0x00 */
    int y;          /* 0x04 */
    double d8;      /* 0x08 */
    double d10;     /* 0x10 */
    double d18;     /* 0x18 */
    char sub[0x18]; /* 0x20 */
} Pose_8272E140;

typedef struct Obj_8272E140 Obj_8272E140;

typedef struct VT_8272E140 {
    void *slot0;
    void *slot4;
    unsigned char (*IsActive)(Obj_8272E140 *self);
} VT_8272E140;

struct Obj_8272E140 {
    VT_8272E140 *vt; /* 0x00 */
    char pad4[0x38];
    float scale; /* 0x3c */
};

typedef struct Out_8272E140 {
    double x;             /* 0x00 */
    double y;             /* 0x08 */
    double a;             /* 0x10 */
    double b;             /* 0x18 */
    double c;             /* 0x20 */
    double scale;         /* 0x28 */
    unsigned char active; /* 0x30 */
    unsigned char flags;  /* 0x31 */
} Out_8272E140;

extern void fn_82681930(Pose_8272E140 *pose);
extern void fn_8272DDC8(Obj_8272E140 *self, Pose_8272E140 *pose, unsigned char force);

void fn_8272E140(Obj_8272E140 *self, Out_8272E140 *out)
{
    Pose_8272E140 pose;
    double scale;
    double x;
    double y;
    double a;
    double b;
    double c;
    unsigned char active;

    fn_82681930(&pose);
    fn_8272DDC8(self, &pose, 0);
    a = pose.d18;
    b = pose.d8;
    c = pose.d10;
    x = pose.x * 0.05;
    scale = self->scale * 100.0f;
    y = pose.y * 0.05;
    active = self->vt->IsActive(self);
    out->x = x;
    out->y = y;
    out->active = active;
    out->a = a;
    out->b = b;
    out->c = c;
    out->flags |= 0x7f;
    out->scale = scale;
}
