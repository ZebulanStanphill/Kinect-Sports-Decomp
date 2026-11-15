typedef struct Self_829E4030 {
    int unknown;
    void *context;            /* 0x04 */
    char first[0x1c];         /* 0x08 */
    char second[0xac - 0x24]; /* 0x24 */
    int initialized;          /* 0xac */
    char pad[0xe0 - 0xb0];
    float firstValue;
    int unknownE4;
    float secondValue;
} Self_829E4030;

extern int fn_829E5870(void *self);
extern int fn_829E59A8(void *self, void *source);

int fn_829E4030(Self_829E4030 *self, void *context)
{
    int result;
    if (context == 0)
        return 0x80070057;
    if (self->initialized != 0)
        return 0x8000ffff;
    result = fn_829E5870(self->first);
    if (result < 0)
        return result;
    result = fn_829E59A8(self->second, self->first);
    if (result < 0)
        return result;
    self->context = context;
    self->initialized = 1;
    self->firstValue = 120.0f;
    self->secondValue = 148.0f;
    return 0;
}
