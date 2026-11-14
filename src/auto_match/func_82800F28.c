typedef struct Quat_82800F28 { float x, y, z, w; } Quat_82800F28;
extern float fn_82809558(float v);

void fn_82800F28(Quat_82800F28 *q, int a, int b, int c, unsigned short *kind)
{
    float t = 1.0f - (q->x * q->x + q->y * q->y + q->z * q->z);

    if (t <= 0.0f)
        q->w = 0.0f;
    else
        q->w = fn_82809558(t);
    *kind = 4;
}
