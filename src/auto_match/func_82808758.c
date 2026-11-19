typedef struct Quat_82808758 {
    float x; /* 0x00 */
    float y; /* 0x04 */
    float z; /* 0x08 */
    float w; /* 0x0c */
} Quat_82808758;

extern float fn_82809558(float x);
extern void fn_8280DD78(const Quat_82808758 *from, const Quat_82808758 *to, Quat_82808758 *out, float t);
extern void fn_8280E418(const Quat_82808758 *in, Quat_82808758 *out);

void fn_82808758(Quat_82808758 *from, const Quat_82808758 *to, float t)
{
    Quat_82808758 start;
    Quat_82808758 end;
    float ww;

    start.x = from->x;
    start.y = from->y;
    start.z = from->z;
    ww = 1.0f - (from->x * from->x + from->y * from->y + from->z * from->z);
    if (ww <= 0.0f) {
        start.w = 0.0f;
    } else {
        start.w = fn_82809558(ww);
    }
    end.x = to->x;
    end.y = to->y;
    end.z = to->z;
    ww = 1.0f - (to->x * to->x + to->y * to->y + to->z * to->z);
    if (ww <= 0.0f) {
        end.w = 0.0f;
    } else {
        end.w = fn_82809558(ww);
    }
    fn_8280DD78(&start, &end, from, t);
    fn_8280E418(from, from);
}
