typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Euler_82F4EF20 {
    float x;
    float y;
    float z;
} Euler_82F4EF20;

typedef struct Node_82F4EF20 {
    __vector4 rotation;
    char pad10[0xcc0 - 0x10];
    __vector4 position;
    __vector4 scale;
    Euler_82F4EF20 angles;
} Node_82F4EF20;

extern __vector4 *fn_82F4EEC0(__vector4 *out, const __vector4 *in);
extern __vector4 fn_82F53780(const Euler_82F4EF20 *angles, __vector4 v);
extern __vector4 fn_8306ED70(__vector4 a, __vector4 b);
extern __vector4 fn_8306ED28(__vector4 a, __vector4 b);

__vector4 *fn_82F4EF20(__vector4 *out, Node_82F4EF20 *node, unsigned char transform, unsigned char scaled)
{
    __vector4 tmp;
    __vector4 v;
    if (!transform) {
        *out = node->position;
        return out;
    }
    if (!scaled) {
        v = fn_82F53780(&node->angles, *fn_82F4EEC0(&tmp, &node->rotation));
        v = fn_8306ED28(node->position, v);
    } else {
        v = fn_8306ED70(*fn_82F4EEC0(&tmp, &node->rotation), node->scale);
        v = fn_82F53780(&node->angles, v);
        v = fn_8306ED28(v, node->position);
    }
    *out = v;
    return out;
}
