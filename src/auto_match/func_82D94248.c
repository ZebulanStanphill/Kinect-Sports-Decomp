typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Transform_82D94248 {
    __vector4 columns[4]; /* 0x00 */
} Transform_82D94248;

typedef struct Collection_82D94248 {
    int reserved00[2]; /* 0x00 */
    char **bodies;     /* 0x08 */
    int bodyCount;     /* 0x0c */
    int reserved10;    /* 0x10 */
    void **systems;    /* 0x14 */
    int systemCount;   /* 0x18 */
    int reserved1c[4]; /* 0x1c */
    void **children;   /* 0x2c */
    int childCount;    /* 0x30 */
} Collection_82D94248;

extern void fn_82CE68B8(Transform_82D94248 *, const void *);
extern void fn_82D8BC78(int, const Transform_82D94248 *);
extern void fn_82D95BE0(void *, const Transform_82D94248 *);
extern void fn_82D94138(void *, const Transform_82D94248 *);

void fn_82D94248(Collection_82D94248 *self, const Transform_82D94248 *transform)
{
    int index;
    for (index = 0; index < self->bodyCount; ++index) {
        Transform_82D94248 copy;
        copy.columns[0] = transform->columns[0];
        copy.columns[1] = transform->columns[1];
        copy.columns[2] = transform->columns[2];
        copy.columns[3] = transform->columns[3];
        fn_82CE68B8(&copy, self->bodies[index] + 0xf0);
        fn_82D8BC78(self->bodies[index], &copy);
    }
    for (index = 0; index < self->systemCount; ++index) {
        fn_82D95BE0(self->systems[index], transform);
    }
    for (index = 0; index < self->childCount; ++index) {
        fn_82D94138(self->children[index], transform);
    }
}
