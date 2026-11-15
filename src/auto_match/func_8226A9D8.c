typedef struct Area_8226A9D8 {
    int unknown;
    unsigned char inside; /* 0x04 */
    char pad05[0x30 - 5];
    float radius; /* 0x30 */
    float unknown34;
    float x; /* 0x38 */
    float y; /* 0x3c */
} Area_8226A9D8;

typedef struct Point_8226A9D8 {
    float x;
    float y;
    float z;
} Point_8226A9D8;

extern float lbl_821916FC;
extern int fn_827EC970(const Point_8226A9D8 *center, float radius, const void *point, const void *extent);

int fn_8226A9D8(const Area_8226A9D8 *self, const char *point)
{
    Point_8226A9D8 center;
    if (self->inside != 0)
        return 1;
    center.x = self->x;
    center.y = self->y;
    center.z = 0.0f;
    return fn_827EC970(&center, self->radius * lbl_821916FC, point, point + 0x10) == 0;
}
