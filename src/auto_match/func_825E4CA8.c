typedef struct Vector2_825E4CA8 {
    float x;
    float y;
} Vector2_825E4CA8;

extern int fn_8284C850(void *view);
extern int fn_8284C858(void *view);
extern void fn_825E4EB0(void *target, Vector2_825E4CA8 *offset, float time, const float *from,
                        const float *to, void *arg5, void *arg6);

void fn_825E4CA8(void *view, void *target, const float *scale, const float *from, const float *to, float time,
                 void *arg6, void *arg7)
{
    float offsetX;

    offsetX = scale[0] * ((float)fn_8284C850(view) * (to[0] - from[0]) * 0.5f);

    {
        Vector2_825E4CA8 offset;

        offset.x = offsetX;
        offset.y = scale[1] * ((float)fn_8284C858(view) * (to[1] - from[1]) * 0.5f);
        fn_825E4EB0(target, &offset, time, from, to, arg6, arg7);
    }
}
