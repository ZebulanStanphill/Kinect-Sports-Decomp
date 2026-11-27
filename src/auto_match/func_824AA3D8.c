#include "xdk/vectorintrinsics.h"

typedef struct Vector_824AA3D8 {
    __vector4 v;
} Vector_824AA3D8;

typedef struct Matrix_824AA3D8 {
    __vector4 rows[4];
} Matrix_824AA3D8;

typedef struct Pose_824AA3D8 {
    char pad00[0x40];
    Matrix_824AA3D8 *bones; /* 0x40 */
} Pose_824AA3D8;

typedef struct Track_824AA3D8 Track_824AA3D8;

typedef struct TrackVt_824AA3D8 {
    void (*GetRange)(Track_824AA3D8 *self, unsigned int *first, unsigned int *last);
    void (*GetPose)(Track_824AA3D8 *self, unsigned int frame, Pose_824AA3D8 **pose);
} TrackVt_824AA3D8;

struct Track_824AA3D8 {
    TrackVt_824AA3D8 *vt;
};

typedef struct Skeleton_824AA3D8 {
    char pad00[0x3c];
    int leftHanded; /* 0x3C */
} Skeleton_824AA3D8;

typedef __vector4 (*SegmentCallback_824AA3D8)(__vector4 from, __vector4 to);

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

Vector_824AA3D8 fn_824AA3D8(Skeleton_824AA3D8 *skeleton, Track_824AA3D8 *track, unsigned int frames,
                            SegmentCallback_824AA3D8 callback)
{
    Vector_824AA3D8 result;
    unsigned int first;
    unsigned int last;
    unsigned int frame;
    int bone;
    __vector4 previous;
    __vector4 current;

    track->vt->GetRange(track, &first, &last);
    previous = __VMXGetReg(77);
    first = (unsigned int)Max((float)first, (float)(last - frames + 1));
    bone = skeleton->leftHanded != 0 ? 6 : 10;
    for (frame = first; frame <= last; frame++) {
        Pose_824AA3D8 *pose;

        track->vt->GetPose(track, frame, &pose);
        current = pose->bones[bone].rows[1];
        if (frame != first) {
            current = callback(current, previous);
        }
        previous = current;
    }
    result.v = previous;
    return result;
}
