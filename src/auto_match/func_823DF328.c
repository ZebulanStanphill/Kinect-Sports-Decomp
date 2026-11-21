extern void fn_82359698(void *, int);
extern void fn_8236B4F0(void *, float);

void fn_823DF328(char *self, float delta)
{
    char *game = *(char **)(self + 8);
    if (*(unsigned int *)(game + 0xefc) != 0) {
        float remaining = *(float *)(game + 0xefc) - delta;
        *(float *)(game + 0xefc) = -remaining >= 0.0f ? 0.0f : remaining;
    }
    if (*(float *)(game + 0xefc) <= 0.0f) {
        fn_82359698(game, *(int *)(game + 0xef8));
        if (*(int *)(*(char **)(game + 0x4b0) + 0xd4) == 0) {
            fn_8236B4F0(game, 1.0f);
        }
    }
}
