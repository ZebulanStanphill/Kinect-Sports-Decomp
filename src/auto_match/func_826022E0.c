typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vaddfp(__vector4 a, __vector4 b);

typedef struct Pose_826022E0 {
    __vector4 rotation; /* 0x00 */
    float scale[3];     /* 0x10 */
    int pad1c;
    __vector4 rotation2; /* 0x20 */
    void *item;          /* 0x30 */
    int pad34[3];
    __vector4 position; /* 0x40 */
} Pose_826022E0;

typedef struct Actor_826022E0 {
    char pad0[0x80];
    __vector4 origin; /* 0x80 */
    int pad90;
    float scale[3]; /* 0x94 */
    char padA0[0x254 - 0xa0];
    int state; /* 0x254 */
    char pad258[0x294 - 0x258];
    void *target; /* 0x294 */
} Actor_826022E0;

extern void fn_82602058(Actor_826022E0 *self, __vector4 *rotation);
extern void fn_82601A00(Actor_826022E0 *self, __vector4 *rotation, __vector4 *position);
extern void fn_826267D0(Pose_826022E0 *pose, void *target);
extern void fn_8253D4E8(void *owner, void *context, void *item, int flag);

void fn_826022E0(Actor_826022E0 *self, Pose_826022E0 *pose, char *context)
{
    __vector4 rotation;
    __vector4 position;

    fn_82602058(self, &rotation);
    pose->rotation = rotation;
    pose->rotation2 = rotation;
    fn_82601A00(self, &rotation, &position);
    pose->position = position;
    pose->position = __vaddfp(pose->position, self->origin);
    pose->scale[0] = self->scale[0];
    pose->scale[1] = self->scale[1];
    pose->scale[2] = self->scale[2];
    if (self->state == 7) {
        fn_826267D0(pose, self->target);
        fn_8253D4E8(context + 0x1f0, context, pose->item, 0);
    }
}
