typedef struct Xform_8269A240 {
    float m[6];
} Xform_8269A240;

typedef struct Node_8269A240 {
    char pad[0x20];
    struct Node_8269A240 *parent;  /* 0x20 */
    char pad24[0x44 - 0x24];
    Xform_8269A240 local;          /* 0x44 */
} Node_8269A240;

extern void fn_8268CEC0(Xform_8269A240 *m, const Xform_8269A240 *other);

static __forceinline void Xform_Copy_8269A240(Xform_8269A240 *d, const Xform_8269A240 *s)
{
    d->m[0] = s->m[0];
    d->m[1] = s->m[1];
    d->m[2] = s->m[2];
    d->m[3] = s->m[3];
    d->m[4] = s->m[4];
    d->m[5] = s->m[5];
}

void fn_8269A240(Node_8269A240 *node, Xform_8269A240 *out)
{
    if (node->parent != 0) {
        fn_8269A240(node->parent, out);
        fn_8268CEC0(out, &node->local);
    } else {
        Xform_Copy_8269A240(out, &node->local);
    }
}
