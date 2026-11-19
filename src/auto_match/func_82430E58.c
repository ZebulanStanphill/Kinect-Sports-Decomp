typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int index);
__vector4 __vaddfp(__vector4 a, __vector4 b);

typedef struct Object_82430E58 {
    char pad0[0x80];
    __vector4 position; /* 0x80 */
} Object_82430E58;

typedef struct Motion_82430E58 {
    char pad0[0x8];
    int type;    /* 0x8 */
    int subtype; /* 0xc */
    char pad10[0x20];
    float speed; /* 0x30 */
} Motion_82430E58;

typedef struct Self_82430E58 {
    char pad0[0x10];
    int id; /* 0x10 */
    char pad14[0x240 - 0x14];
    void *objects;           /* 0x240 */
    Motion_82430E58 *motion; /* 0x244 */
} Self_82430E58;

extern Object_82430E58 *fn_82359558(void *objects, int id);
extern float fn_82337C80(Object_82430E58 *object);
extern __vector4 fn_8255AE78(__vector4 v, float angle);

__vector4 *fn_82430E58(__vector4 *out, Self_82430E58 *self, float time)
{
    Object_82430E58 *object = fn_82359558(self->objects, self->id);
    __vector4 position = object->position;
    float heading = fn_82337C80(object);
    Motion_82430E58 *motion = self->motion;
    __vector4 offset = __VMXGetReg(77);
    float speed = 0.0f;
    switch (motion->type) {
    case 1:
    case 2:
        switch (motion->subtype) {
        case 8:
        case 9:
        case 10:
        case 12:
        case 13:
        case 14:
        case 18:
            speed = motion->speed;
            break;
        }
        break;
    case 3:
    case 5:
        switch (motion->subtype) {
        case 8:
        case 9:
        case 10:
        case 12:
        case 13:
        case 14:
            speed = motion->speed;
            break;
        }
        break;
    }
    offset.vector4_f32[2] = speed * time;
    *out = __vaddfp(position, fn_8255AE78(offset, heading));
    return out;
}
