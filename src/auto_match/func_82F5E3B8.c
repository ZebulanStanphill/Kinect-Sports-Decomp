typedef struct Check_82F5E3B8 {
    int mode;
    float values[4];
    int count;
    float level;
} Check_82F5E3B8;

typedef struct State_82F5E3B8 {
    char pad0[0x6c];
    unsigned char enabled;
} State_82F5E3B8;

extern int fn_829C8658(int, int, int *);
extern unsigned char fn_82F5E338(void *, float);

unsigned char fn_82F5E3B8(State_82F5E3B8 *self, Check_82F5E3B8 *check)
{
    int mode = -1;
    int result = fn_829C8658(0, 0, &mode);
    unsigned char ok = (mode == check->mode) & (result == 0);
    int count;
    int actual;
    unsigned char success;

    if (mode == 0) {
        if (self->enabled != 0) {
            ok &= fn_82F5E338((void *)0, check->values[0]);
            ok &= fn_82F5E338((void *)6, check->values[1]);
            ok &= fn_82F5E338((void *)7, check->values[2]);
            ok &= fn_82F5E338((void *)8, check->values[3]);
            return ok;
        }
        return 0;
    }
    count = check->count;
    actual = count - 1;
    result = fn_829C8658(0, 2, &actual);
    success = result == 0;
    return fn_82F5E338((void *)5, check->level) & (actual == count) & success & ok;
}
