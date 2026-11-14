typedef struct Owner_8306F520 {
    char pad0[0x160];
    int states[20];
} Owner_8306F520;

extern void fn_83075D90(void *target, int index, float value);

void fn_8306F520(void *self, Owner_8306F520 *owner, void *target)
{
    int i;
    for (i = 0; i < 20; i++)
        fn_83075D90(target, i, owner->states[i] == 2 ? 1.0f : 0.1f);
}
