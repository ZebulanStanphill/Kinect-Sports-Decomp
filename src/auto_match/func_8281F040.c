typedef struct Vec3 {
    float x, y, z;
} Vec3;

typedef struct Box {
    Vec3 min;
    Vec3 max;
} Box;

extern void fn_828107F0(const Vec3 *a, const Vec3 *b, Vec3 *out);
extern void fn_828107B0(const Vec3 *a, const Vec3 *b, Vec3 *out);

void fn_8281F040(Box *box, const Vec3 *pt)
{
    fn_828107F0(&box->max, pt, &box->max);
    fn_828107B0(&box->min, pt, &box->min);
}
