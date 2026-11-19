typedef struct Vec3_8285D840 {
    float x;
    float y;
    float z;
} Vec3_8285D840;

typedef struct Vec4_8285D840 {
    float x;
    float y;
    float z;
    float w;
} Vec4_8285D840;

typedef struct Limit_8285D840 {
    char pad00[0x8];
    float tolerance; /* 0x8 */
} Limit_8285D840;

typedef struct Manager_8285D840 {
    char pad000[0x188];
    Vec4_8285D840 planes[6]; /* 0x188 */
    Vec3_8285D840 eye;       /* 0x1E8 */
    char pad1F4[0x48];
    int filter;           /* 0x23C */
    int type;             /* 0x240 */
    float scale;          /* 0x244 */
    unsigned short count; /* 0x248 */
    char pad24A[0x2];
    Vec3_8285D840 *points; /* 0x24C */
    char pad250[0xC];
    int table; /* 0x25C */
    char pad260[0x6];
    unsigned char checkOcclusion; /* 0x266 */
    char pad267[0x1];
    Limit_8285D840 *limit; /* 0x268 */
    char pad26C[0x4];
} Manager_8285D840;

typedef struct Object_8285D840 {
    char pad00[0x4];
    Vec3_8285D840 center; /* 0x04 */
    float radius;         /* 0x10 */
    int handle;           /* 0x14 */
    unsigned short count; /* 0x18 */
} Object_8285D840;

typedef struct Extra_8285D840 {
    char pad00[0x44];
    unsigned int list; /* 0x44 */
} Extra_8285D840;

typedef struct Owner_8285D840 {
    char pad00[0x40];
    Extra_8285D840 *extra; /* 0x40 */
} Owner_8285D840;

typedef struct Self_8285D840 {
    char pad00[0x44];
    int id; /* 0x44 */
} Self_8285D840;

extern Manager_8285D840 lbl_83211340;
extern char lbl_832115B0[];

extern int fn_828116B8(int table, int id);
extern int fn_8285ABD8(Object_8285D840 *object, int filter);
extern void fn_8285A980(int handle, unsigned short count, unsigned int type, float scale, unsigned int index,
                        Vec3_8285D840 *point);
extern void fn_82810328(Vec3_8285D840 *a, Vec3_8285D840 *b, Vec3_8285D840 *out);
extern float fn_82810280(Vec3_8285D840 *a, Vec3_8285D840 *b);
extern unsigned char fn_82862A60(void *set, Vec3_8285D840 *direction, Vec3_8285D840 *points, float *out);
extern int fn_8285C670(Vec4_8285D840 *planes, unsigned char numPlanes, Vec3_8285D840 *center, float radius,
                       int flags);
extern int fn_8285C730(Vec4_8285D840 *planes, unsigned char numPlanes, Vec3_8285D840 *points,
                       unsigned short numPoints, int flags);
extern int fn_8285D6E8(Vec4_8285D840 *planes, unsigned char numPlanes, Vec3_8285D840 *points,
                       unsigned short numPoints, float tolerance);
extern int fn_8285CA00(Object_8285D840 *object, unsigned int list, int b);

int fn_8285D840(Self_8285D840 *self, Object_8285D840 *object, Vec3_8285D840 *direction, Owner_8285D840 *owner,
                int flags, int c)
{
    Vec3_8285D840 toEye;
    float distance;
    int i;
    unsigned short count;
    int result;

    if (fn_828116B8(lbl_83211340.table, self->id) != 0) {
        return 0;
    }
    if (fn_8285ABD8(object, lbl_83211340.filter) == 0) {
        return 0;
    }
    fn_8285A980(object->handle, object->count, lbl_83211340.type, lbl_83211340.scale, 0, lbl_83211340.points);
    fn_82810328(&lbl_83211340.eye, lbl_83211340.points, &toEye);
    if (fn_82810280(direction, &toEye) < 0.0f) {
        return 0;
    }
    if (lbl_83211340.checkOcclusion &&
        !fn_82862A60(lbl_832115B0, direction, lbl_83211340.points, &distance)) {
        return 0;
    }
    count = object->count;
    for (i = 1; i < count; i++) {
        fn_8285A980(object->handle, count, lbl_83211340.type, lbl_83211340.scale, i, &lbl_83211340.points[i]);
        count = object->count;
    }
    lbl_83211340.count = count;
    result = fn_8285C670(lbl_83211340.planes, 6, &object->center, object->radius, flags);
    if (result == 2) {
        return 2;
    }
    if (result == 1) {
        result = fn_8285C730(lbl_83211340.planes, 6, lbl_83211340.points, lbl_83211340.count, flags);
        if (result == 2) {
            return 2;
        }
        if (result == 1) {
            if (lbl_83211340.limit == 0) {
                return 2;
            }
            if (fn_8285D6E8(lbl_83211340.planes, 6, lbl_83211340.points, lbl_83211340.count,
                            lbl_83211340.limit->tolerance) != 0) {
                return 2;
            }
        }
    }
    if (owner->extra != 0 && owner->extra->list != 0 && fn_8285CA00(object, owner->extra->list, c) != 0) {
        return 0;
    }
    return 1;
}
