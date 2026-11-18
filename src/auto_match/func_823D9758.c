typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern unsigned int fn_8265BF48(const char *name, int seed);
extern int fn_823D9828(void *self, unsigned int *ids, unsigned int count, int flags, __vector4 position);

int fn_823D9758(void *self, __vector4 position)
{
    unsigned int ids[6];

    ids[0] = fn_8265BF48("goalkick", 0);
    ids[1] = fn_8265BF48("goalkick2", 0);
    ids[2] = fn_8265BF48("centerpass", 0);
    ids[3] = fn_8265BF48("centerpass2", 0);
    ids[4] = fn_8265BF48("centerpass3", 0);
    ids[5] = fn_8265BF48("centershoot", 0);
    return fn_823D9828(self, ids, 6, 0, position);
}
