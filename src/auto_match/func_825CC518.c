typedef struct Self_825CC518 {
    char pad0[0xc0];
    int target; /* 0xc0 */
} Self_825CC518;

extern void fn_8263CBB0(void *device, unsigned int index, void *resource, unsigned __int64 mask);
extern void fn_825453C0(int source, int target, float *min, float *max, int device);
extern void *fn_8263E9F0(void *device, unsigned int flags, void *a, int b, int c, int d, int e, int f, int g,
                         int h, float value, int i, int j);

void fn_825CC518(Self_825CC518 *self, void *device, void *resource, int arg)
{
    float min[2];
    float max[2];

    fn_8263CBB0(device, 0, resource, 0x80000000);
    min[0] = 0.0f;
    min[1] = 0.0f;
    max[0] = 1.0f;
    max[1] = 1.0f;
    fn_825453C0(self->target, self->target, min, max, (int)device);
    fn_8263E9F0(device, 0, 0, 0, 0, arg, 0, 0, 0, 0, 0.0f, 0, 0);
}
