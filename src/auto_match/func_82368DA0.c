#include "xdk/vectorintrinsics.h"

typedef struct Camera_82368DA0 {
    char pad000[0x50];
    __vector4 position; /* 0x050 */
    char pad060[0x40];
    float width; /* 0x0a0 */
    char pad0a4[0x4];
    float height; /* 0x0a8 */
    char pad0ac[0x1d4];
    float fovScale; /* 0x280 */
    char pad284[0x638];
    float zoom; /* 0x8bc */
    char pad8c0[0x300];
    __vector4 direction; /* 0xbc0 */
} Camera_82368DA0;

typedef struct View_82368DA0 {
    char pad000[0xe10];
    Camera_82368DA0 *camera; /* 0xe10 */
} View_82368DA0;

void fn_82368DA0(View_82368DA0 *self, __vector4 *position, __vector4 *direction, float *fov)
{
    Camera_82368DA0 *camera;
    float zoom;
    float height;
    float width;

    if (position != 0) {
        *position = self->camera->position;
    }
    if (direction != 0) {
        *direction = self->camera->direction;
    }
    if (fov == 0) {
        return;
    }
    camera = self->camera;
    zoom = camera->zoom;
    height = camera->height * zoom;
    width = camera->width * zoom;
    *fov = (width - height >= 0.0f ? width : height) * camera->fovScale;
}
