typedef struct Bounds_82864700 {
    unsigned int x;
    unsigned int y;
    unsigned int width;
    unsigned int height;
    float nearPlane;
    float farPlane;
} Bounds_82864700;

extern void fn_82639EA8(void *self, const Bounds_82864700 *bounds);

void fn_82864700(const float *self, void *device)
{
    Bounds_82864700 bounds;
    unsigned int width = (unsigned int)self[0xec / 4];
    unsigned int height = (unsigned int)self[0xf0 / 4];
    unsigned int x = (unsigned int)self[0xe4 / 4];
    unsigned int y = (unsigned int)self[0xe8 / 4];
    bounds.x = x;
    bounds.nearPlane = self[0xf4 / 4];
    bounds.farPlane = self[0xf8 / 4];
    bounds.y = y;
    bounds.width = width;
    bounds.height = height;
    fn_82639EA8(device, &bounds);
}
