double fabs(double x);

typedef struct Skeleton_824B4AB8 Skeleton_824B4AB8;
typedef struct Source_824B4AB8 Source_824B4AB8;

typedef struct SourceVtbl_824B4AB8 {
    void (*GetUser)(Source_824B4AB8 *self, int *index, void **user);
    void (*GetSkeleton)(Source_824B4AB8 *self, void *user, Skeleton_824B4AB8 **skeleton);
} SourceVtbl_824B4AB8;

struct Source_824B4AB8 {
    SourceVtbl_824B4AB8 *vt;
};

typedef struct Range_824B4AB8 {
    float lo; /* 0x00 */
    float hi; /* 0x04 */
} Range_824B4AB8;

typedef struct Tracker_824B4AB8 {
    void *vt; /* 0x00 */
    char pad04[0x38];
    int alt; /* 0x3c */
    char pad40[0x8];
    float value;     /* 0x48 */
    float angles[3]; /* 0x4c */
} Tracker_824B4AB8;

extern Range_824B4AB8 lbl_831C48B0;
extern void fn_824B49D8(float *angles, Skeleton_824B4AB8 *skeleton, int from, int to);
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

float fn_824B4AB8(Tracker_824B4AB8 *self, Source_824B4AB8 *src)
{
    int alt = self->alt;
    int index;
    void *user;
    Skeleton_824B4AB8 *skeleton;
    float degrees;

    src->vt->GetUser(src, &index, &user);
    src->vt->GetSkeleton(src, user, &skeleton);
    fn_824B49D8(self->angles, skeleton, alt ? 6 : 10, alt ? 5 : 9);
    degrees = self->angles[1] * 57.295776f;
    self->value = -(fn_82539560(fabs(degrees), lbl_831C48B0.lo, lbl_831C48B0.hi, 0.0f, 1.0f) *
                    (degrees >= 0.0f ? 1.0f : -1.0f));
    return 0.0f;
}
