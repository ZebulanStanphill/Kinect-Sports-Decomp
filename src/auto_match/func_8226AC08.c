typedef struct Vec_8226AC08 {
    char pad0[0x10];
    float x;   /* 0x10 */
    float y;   /* 0x14 */
} Vec_8226AC08;

typedef struct Self_8226AC08 {
    int unk0;
    unsigned char inside;   /* 0x04 */
    char pad5[0x23];
    float radius;           /* 0x28 */
    float unk2c;
    float margin;           /* 0x30 */
} Self_8226AC08;

extern float fn_82809558(float v);

int fn_8226AC08(Self_8226AC08 *self, const Vec_8226AC08 *p)
{
    float d;
    if (self->inside != 0)
        return 1;
    d = fn_82809558(p->x * p->x + p->y * p->y);
    return self->margin + self->radius > d;
}
