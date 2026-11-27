#include "xdk/vectorintrinsics.h"

typedef struct Camera_825B3240 {
    char pad0[0x64];
    float nearPlane; /* 0x64 */
    float farPlane;  /* 0x68 */
} Camera_825B3240;

typedef struct View_825B3240 {
    char pad0[0x250];
    Camera_825B3240 *camera; /* 0x250 */
} View_825B3240;

typedef struct Fog_825B3240 {
    char pad0[0x1bc];
    float nearStart; /* 0x1bc */
    float nearEnd;   /* 0x1c0 */
    float farStart;  /* 0x1c4 */
    float farEnd;    /* 0x1c8 */
} Fog_825B3240;

extern View_825B3240 lbl_83296890;
extern Fog_825B3240 lbl_8326C070;

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

static __forceinline float Min(float a, float b)
{
    return b - a >= 0.0f ? a : b;
}

/* Maps a view distance to the projected depth of the camera's planes. */
static __forceinline float ProjectDepth(float z, float nearPlane, float farPlane)
{
    return (1.0f - farPlane / Max(z, nearPlane)) * (nearPlane / (nearPlane - farPlane));
}

__vector4 fn_825B3240(void)
{
    Camera_825B3240 *camera = lbl_83296890.camera;
    float nearPlane = camera->nearPlane;
    float farPlane = camera->farPlane;
    float nearEnd = ProjectDepth(lbl_8326C070.nearEnd, nearPlane, farPlane);
    float nearStart = ProjectDepth(lbl_8326C070.nearStart, nearPlane, farPlane);
    float farEnd = ProjectDepth(lbl_8326C070.farEnd, nearPlane, farPlane);
    float farStart = ProjectDepth(lbl_8326C070.farStart, nearPlane, farPlane);
    float nearRange = nearEnd - nearStart;
    float farRange = farEnd - farStart;
    float nearScale = 1.0f / Min(-1.0e-06f, nearRange);
    float farScale = 1.0f / Min(-1.0e-06f, farRange);
    float nearOffset = -(nearScale * nearStart);
    float farOffset = -(farScale * farStart);
    __vector4 result;
    __vector4 farPart;

    result = __lvlx(&nearScale, 0);
    result = __vrlimi(result, __lvlx(&nearOffset, 0), 4, 3);
    farPart = __lvlx(&farScale, 0);
    farPart = __vrlimi(farPart, __lvlx(&farOffset, 0), 4, 3);
    result = __vrlimi(result, farPart, 3, 2);
    return result;
}
