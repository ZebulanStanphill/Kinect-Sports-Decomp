#include "xdk/vectorintrinsics.h"

typedef struct Box_825BC0E0 {
    unsigned short kind; /* 0x00 */
    unsigned int flags;  /* 0x04 */
    char pad8[0x18];
    __vector4 center; /* 0x20 */
    float halfX;      /* 0x30 */
    float halfY;      /* 0x34 */
    float halfZ;      /* 0x38 */
    float angle;      /* 0x3c */
} Box_825BC0E0;

extern __vector4 fn_8255AE78(__vector4 v, float angle);
#include <math.h>

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

/* Distance from a point to a box rotated about Y; returns 1 when the point is inside. */
int fn_825BC0E0(Box_825BC0E0 *box, __vector4 *point, float *outDist)
{
    int checkY = 1;
    float dist = 0.0f;
    int inside;
    __vector4 local;
    float outX;
    float outZ;
    float overX;
    float overZ;
    float halfY;
    float overY;
    float overYClamped;
    float absY;
    int insideY;

    if (box->flags & 0x80) {
        checkY = 0;
    }
    local = __vsubfp(*point, box->center);
    if (box->angle != 0.0f) {
        local = fn_8255AE78(local, -box->angle);
    }
    overX = local.vector4_f32[0] - box->halfX;
    overZ = local.vector4_f32[2] - box->halfZ;
    inside = 1;
    outX = -box->halfX - local.vector4_f32[0];
    outZ = -box->halfZ - local.vector4_f32[2];
    if (outX > 0.0f || overX > 0.0f || outZ > 0.0f || overZ > 0.0f) {
        inside = 0;
        outX = Max(outX, 0.0f);
        overX = Max(overX, outX);
        outZ = Max(outZ, 0.0f);
        overZ = Max(overZ, outZ);
        dist = sqrtf(overZ * overZ + overX * overX);
    }
    if (checkY) {
        overYClamped = 0.0f;
        local = __vsubfp(*point, box->center);
        absY = fabsf(local.vector4_f32[1]);
        halfY = box->halfY;
        if (halfY == 0.0f) {
            halfY = Max(box->halfX, box->halfZ);
        }
        overY = absY - halfY;
        if (overY > 0.0f) {
            overYClamped = overY;
            insideY = 0;
        } else {
            insideY = 1;
        }
        if (inside && insideY) {
            return 1;
        }
        dist = Max(dist, 0.0f);
        overYClamped = Max(overYClamped, 0.0f);
        *outDist = sqrtf(overYClamped * overYClamped + dist * dist);
        return 0;
    }
    *outDist = dist;
    return inside;
}
