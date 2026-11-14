typedef struct Vec3_8305D8F0 {
    float x;
    float y;
    float z;
} Vec3_8305D8F0;

typedef struct Path_8305D8F0 {
    char pad0[0x2c];
    int *points;                /* 0x2c */
    int count;                  /* 0x30 */
    Vec3_8305D8F0 direction;    /* 0x34 */
} Path_8305D8F0;

extern void fn_82810530(const Vec3_8305D8F0 *src, Vec3_8305D8F0 *dst);

void fn_8305D8F0(Path_8305D8F0 *self)
{
    int i;

    fn_82810530(&self->direction, &self->direction);
    for (i = 0; i < self->count / 2; i++) {
        int tmp = self->points[i];
        self->points[i] = self->points[self->count - i - 1];
        self->points[self->count - i - 1] = tmp;
    }
}
