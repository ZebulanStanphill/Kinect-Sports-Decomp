#include "xdk/vectorintrinsics.h"

typedef struct Matrix_824AAC40 {
    __vector4 rows[4];
} Matrix_824AAC40;

typedef struct Pose_824AAC40 {
    char pad00[0x40];
    Matrix_824AAC40 *bones; /* 0x40 */
} Pose_824AAC40;

typedef struct Track_824AAC40 Track_824AAC40;

typedef struct TrackVt_824AAC40 {
    void (*GetRange)(Track_824AAC40 *self, unsigned int *first, unsigned int *last);
    void (*GetPose)(Track_824AAC40 *self, unsigned int frame, Pose_824AAC40 **pose);
} TrackVt_824AAC40;

struct Track_824AAC40 {
    TrackVt_824AAC40 *vt;
};

typedef struct Skeleton_824AAC40 {
    char pad00[0x3c];
    int leftHanded; /* 0x3C */
} Skeleton_824AAC40;

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

float fn_824AAC40(Skeleton_824AAC40 *skeleton, Track_824AAC40 *track)
{
    unsigned int first;
    unsigned int last;
    unsigned int frame;
    int bone;
    float total;
    __vector4 position;

    track->vt->GetRange(track, &first, &last);
    total = 0.0f;
    first = (unsigned int)Max((float)first, (float)last - 9.0f);
    bone = skeleton->leftHanded != 0 ? 10 : 6;
    for (frame = first; frame <= last; frame++) {
        Pose_824AAC40 *pose;

        track->vt->GetPose(track, frame, &pose);
        position = pose->bones[bone].rows[1];
        total += position.vector4_f32[1];
    }
    return total / (float)(last - first + 1);
}
