typedef struct Vec3_827F6698 {
    float x;
    float y;
    float z;
} Vec3_827F6698;

typedef __declspec(align(16)) struct Quat_827F6698 {
    float v[4];
} Quat_827F6698;

typedef struct Pose_827F6698 {
    char pad0[0xc];
    float rotation[4];             /* 0x0c */
} Pose_827F6698;

typedef struct Self_827F6698 {
    char pad0[0x24];
    char bone[1];                  /* 0x24 */
} Self_827F6698;

extern void fn_827FEF40(void *bone, Pose_827F6698 **out);
extern void fn_8280E168(Quat_827F6698 *out, float x, float y, float z, float w);
extern void fn_8280DF98(Quat_827F6698 *q, const Vec3_827F6698 *v, Vec3_827F6698 *out);
extern float fn_82809D40(float x, float z);

extern const Vec3_827F6698 lbl_8219609C;

float fn_827F6698(Self_827F6698 *self)
{
    Pose_827F6698 *pose;
    Quat_827F6698 q;
    Vec3_827F6698 dir;

    fn_827FEF40(self->bone, &pose);
    fn_8280E168(&q, pose->rotation[0], pose->rotation[1], pose->rotation[2], pose->rotation[3]);
    fn_8280DF98(&q, &lbl_8219609C, &dir);
    return fn_82809D40(dir.x, dir.z);
}
