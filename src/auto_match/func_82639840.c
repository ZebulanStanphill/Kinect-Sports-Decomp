/* Sampler state setter: stores a float value scaled by a constant (-8.0f) and truncated into a
   4-bit field of sampler `index`'s third word, then marks the sampler dirty (bit index + 32
   from the MSB). */
typedef struct Sampler_82639840 {
    unsigned int w[6];
} Sampler_82639840;

typedef struct State_82639840 {
    char pad0[0x18];
    unsigned __int64 dirty; /* 0x18 */
    char pad20[0x480 - 0x20];
    Sampler_82639840 samplers[1]; /* 0x480 */
} State_82639840;

void fn_82639840(State_82639840 *self, int index, unsigned int value)
{
    Sampler_82639840 *s = &self->samplers[index];
    unsigned int v = (unsigned int)(*(float *)&value * -8.0f);
    s->w[5] = (v & 0xf) << 5 | s->w[5] & 0xfffffe1f;
    self->dirty = 0x8000000000000000ULL >> (unsigned int)(index + 32) | self->dirty;
}
