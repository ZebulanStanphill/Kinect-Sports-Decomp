extern void *fn_82930318(unsigned int size);
extern int *fn_829304E0(void *memory, void *first, void *second, const char *name);
extern int *fn_82932F78(void *memory);
extern int fn_829B4AD0(void *self, int *state, int value, int first, int second, int **out);
extern void fn_82980C18(void *self, int code, int error, const char *message, ...);

int *fn_829B4D38(void *self, int **state)
{
    int *result;
    int *child;
    int *out[4];
    void *memory;

    if ((*state)[1] != 3) {
        fn_82980C18(self, 0, 3000, "invalid function call");
        goto failed;
    }
    memory = fn_82930318(0x14);
    result = memory != 0 ? fn_829304E0(memory, 0, 0, "States") : 0;
    if (result == 0) {
        goto failed;
    }
    memory = fn_82930318(0x18);
    child = memory != 0 ? fn_82932F78(memory) : 0;
    if (child == 0 || fn_829B4AD0(self, state[0], (int)state[1], 1, 1, out) < 0) {
        goto failed;
    }
    child[4] = out[0][1];
    child[5] = (int)state[1];
    result[2] = (int)child;
    state[1] = 0;
    state[0] = 0;
    goto done;
failed:
    result = 0;
done:
    return result;
}
