typedef struct Xform_8269A2C8 {
    float m[6];
} Xform_8269A2C8;

typedef struct Node_8269A2C8 {
    char pad[0x20];
    struct Node_8269A2C8 *parent;  /* 0x20 */
    char pad24[0x44 - 0x24];
    Xform_8269A2C8 local;          /* 0x44 */
} Node_8269A2C8;

extern void fn_8268CC00(Xform_8269A2C8 *m);
extern void fn_8268CEC0(Xform_8269A2C8 *m, const Xform_8269A2C8 *other);

void fn_8269A2C8(Node_8269A2C8 *node, Xform_8269A2C8 *out)
{
    if (node->parent != 0) {
        fn_8269A2C8(node->parent, out);
        fn_8268CEC0(out, &node->local);
    } else {
        Xform_8269A2C8 identity;
        fn_8268CC00(&identity);
        out->m[0] = identity.m[0];
        out->m[1] = identity.m[1];
        out->m[2] = identity.m[2];
        out->m[3] = identity.m[3];
        out->m[4] = identity.m[4];
        out->m[5] = identity.m[5];
    }
}
