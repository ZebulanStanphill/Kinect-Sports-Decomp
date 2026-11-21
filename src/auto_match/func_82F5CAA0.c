/* Tests whether the left or right hand of a tracked skeleton is raised: the hand at or above its
   elbow and no more than 0.06 in front of its shoulder (the layout of a Kinect skeleton frame:
   tracking state at 0, the twenty joint positions from 0x20). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Skeleton_82F5CAA0 {
    int trackingState;            /* 0x00 */
    int trackingId;               /* 0x04 */
    int enrollmentIndex;          /* 0x08 */
    int userIndex;                /* 0x0c */
    __vector4 position;           /* 0x10 */
    __vector4 jointPositions[20]; /* 0x20 */
} Skeleton_82F5CAA0;

static __forceinline float GetY(__vector4 v)
{
    return v.vector4_f32[1];
}

static __forceinline float GetZ(__vector4 v)
{
    return v.vector4_f32[2];
}

int fn_82F5CAA0(void *self, __vector4 unused, Skeleton_82F5CAA0 *skeleton, int right)
{
    __vector4 *joints = skeleton->jointPositions;
    __vector4 hand = *(right == 0 ? &joints[7] : &joints[11]);
    __vector4 elbow = *(right == 0 ? &joints[5] : &joints[9]);
    __vector4 shoulder = *(right == 0 ? &joints[4] : &joints[8]);
    float shoulderZ = GetZ(shoulder);
    int above = GetY(hand) >= GetY(elbow);

    return hand.vector4_f32[2] <= shoulderZ + 0.06f && above;
}
