typedef struct Quat_8281E188 {
    float x;
    float y;
    float z;
    float w;
} Quat_8281E188;

extern void fn_8280E418(const Quat_8281E188 *in, Quat_8281E188 *out);

void fn_8281E188(Quat_8281E188 *q, float x, float y, float z, float w)
{
    q->x = x;
    q->y = y;
    q->z = z;
    q->w = w;
    fn_8280E418(q, q);
}
