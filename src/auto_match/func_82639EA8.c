typedef struct Bounds_82639EA8 {
    unsigned int x;
    unsigned int y;
    unsigned int width;
    unsigned int height;
    float nearPlane;
    float farPlane;
} Bounds_82639EA8;

extern void fn_82637840(void *self, float x, float y, float width, float height, float nearPlane,
                        float farPlane);

void fn_82639EA8(void *self, const Bounds_82639EA8 *bounds)
{
    fn_82637840(self, (float)bounds->x, (float)bounds->y, (float)bounds->width, (float)bounds->height,
                bounds->nearPlane, bounds->farPlane);
}
