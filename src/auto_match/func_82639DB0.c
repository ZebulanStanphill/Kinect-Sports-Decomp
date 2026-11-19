typedef struct Rect_82639DB0 {
    int left;
    int top;
    int right;
    int bottom;
} Rect_82639DB0;

typedef struct PackedPoint_82639DB0 {
    unsigned int flagY : 1;
    int y : 15;
    unsigned int flagX : 1;
    int x : 15;
} PackedPoint_82639DB0;

typedef struct Device_82639DB0 {
    char pad0[0x28c4];
    PackedPoint_82639DB0 topLeft;     /* 0x28c4 */
    PackedPoint_82639DB0 bottomRight; /* 0x28c8 */
    char pad28cc[0x634];
    int clipToViewport; /* 0x2f00 */
    char pad2f04[0x314];
    float viewportX;      /* 0x3218 */
    float viewportY;      /* 0x321c */
    float viewportWidth;  /* 0x3220 */
    float viewportHeight; /* 0x3224 */
    char pad3228[0xc];
    Rect_82639DB0 scissor; /* 0x3234 */
} Device_82639DB0;

extern void fn_82637550(Device_82639DB0 *device, int left, int top, int right, int bottom);

void fn_82639DB0(Device_82639DB0 *device, const Rect_82639DB0 *rect)
{
    int left = (int)device->viewportX;
    int right = (int)device->viewportWidth + left;
    int top = (int)device->viewportY;
    int bottom = (int)device->viewportHeight + top;
    int clipLeft = rect->left;
    int clipTop = rect->top;
    int clipRight = rect->right;
    int clipBottom = rect->bottom;

    device->scissor.left = clipLeft;
    device->scissor.top = clipTop;
    device->scissor.right = clipRight;
    device->scissor.bottom = clipBottom;
    if (device->clipToViewport != 0) {
        if (left <= clipLeft) {
            left = clipLeft;
        }
        if (top <= clipTop) {
            top = clipTop;
        }
        if (right >= clipRight) {
            right = clipRight;
        }
        if (bottom >= clipBottom) {
            bottom = clipBottom;
        }
    }
    device->topLeft.x = left;
    device->topLeft.y = top;
    device->bottomRight.x = right;
    device->bottomRight.y = bottom;
    fn_82637550(device, left, top, right, bottom);
}
