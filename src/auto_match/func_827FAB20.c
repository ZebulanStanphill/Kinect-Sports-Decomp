typedef struct Quat_827FAB20 {
    float x;
    float y;
    float z;
    float w;
} Quat_827FAB20;

typedef struct Vec3_827FAB20 {
    float x;
    float y;
    float z;
} Vec3_827FAB20;

typedef struct Key_827FAB20 {
    Quat_827FAB20 rotation;    /* 0x00 */
    Vec3_827FAB20 translation; /* 0x10 */
    unsigned char flags;       /* 0x1c */
} Key_827FAB20;

extern void fn_8280DD50(Quat_827FAB20 *q);
extern void fn_8280E418(Quat_827FAB20 *out, Quat_827FAB20 *q);
extern void fn_8280D8E0(Quat_827FAB20 *a, Quat_827FAB20 *b, Quat_827FAB20 *out);
extern void fn_8280E180(const Quat_827FAB20 *a, const Quat_827FAB20 *b, Quat_827FAB20 *out, float t);

void fn_827FAB20(const Key_827FAB20 *base, const Key_827FAB20 *delta, Key_827FAB20 *out, float weight)
{
    Quat_827FAB20 baseRotation;
    Quat_827FAB20 deltaRotation;
    Quat_827FAB20 rotation;

    fn_8280DD50(&baseRotation);
    fn_8280DD50(&deltaRotation);
    if (base != 0) {
        baseRotation = base->rotation;
    }
    if (delta != 0) {
        deltaRotation = delta->rotation;
    }
    fn_8280E418(&baseRotation, &baseRotation);
    fn_8280E418(&deltaRotation, &deltaRotation);
    fn_8280D8E0(&baseRotation, &deltaRotation, &deltaRotation);
    fn_8280E180(&baseRotation, &deltaRotation, &rotation, weight);
    out->rotation = rotation;
    if (base != 0) {
        if (delta != 0) {
            out->translation.x = base->translation.x + delta->translation.x * weight;
            out->translation.y = base->translation.y + delta->translation.y * weight;
            out->translation.z = base->translation.z + delta->translation.z * weight;
            out->flags = base->flags | delta->flags;
        } else {
            out->translation.x = base->translation.x;
            out->translation.y = base->translation.y;
            out->translation.z = base->translation.z;
            out->flags = base->flags;
        }
    } else if (delta != 0) {
        out->translation.x = delta->translation.x * weight;
        out->translation.y = delta->translation.y * weight;
        out->translation.z = delta->translation.z * weight;
        out->flags = delta->flags;
    }
}
