typedef struct Vec3_82526068 {
    float x; /* 0x00 */
    float y; /* 0x04 */
    float z; /* 0x08 */
} Vec3_82526068;

typedef struct Camera_82526068 {
    char pad00000[0x31984];
    int enabled;          /* 0x31984 */
    Vec3_82526068 offset; /* 0x31988 */
    float height;         /* 0x31994 */
    float b;              /* 0x31998 */
    float c;              /* 0x3199c */
    float d;              /* 0x319a0 */
    unsigned char flag;   /* 0x319a4 */
} Camera_82526068;

static __forceinline void SetVec3(Vec3_82526068 *v, float x, float y, float z)
{
    v->x = x;
    v->y = y;
    v->z = z;
}

void fn_82526068(Camera_82526068 *camera, unsigned char flag, float height, float b, float c, float d)
{
    camera->enabled = 1;
    camera->height = height;
    SetVec3(&camera->offset, 0.0f, height, 0.0f);
    camera->b = b;
    camera->c = c;
    camera->d = d;
    camera->flag = flag;
}
