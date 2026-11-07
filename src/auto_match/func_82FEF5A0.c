typedef struct Obj_82FEF5A0 {
    unsigned char pad[0x38];
    void *target;
} Obj_82FEF5A0;

extern void fn_83027348(void *target, float value);
extern void fn_83027358(void *target, float value);

int fn_82FEF5A0(Obj_82FEF5A0 *self, short id, float *value)
{
    void *target = self->target;
    if (target != 0) {
        float v = *value;
        switch (id) {
        case 0xe:
            fn_83027358(target, v);
            break;
        case 0xd:
            fn_83027348(target, v);
            break;
        }
    }
    return 1;
}
