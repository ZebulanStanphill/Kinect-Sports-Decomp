/* Sampler state setter: stores a float value scaled by a constant (32.0f) and truncated into a
   10-bit field of sampler `index`'s second word, then marks the sampler dirty (bit index + 32
   from the MSB). */
typedef struct Sampler_826398E8 {
    unsigned int w[6];
} Sampler_826398E8;

typedef struct State_826398E8 {
    char pad0[0x18];
    unsigned __int64 dirty; /* 0x18 */
    char pad20[0x480 - 0x20];
    Sampler_826398E8 samplers[1]; /* 0x480 */
} State_826398E8;

void fn_826398E8(State_826398E8 *self, int index, unsigned int value)
{
    Sampler_826398E8 *s = &self->samplers[index];
    unsigned int v = (unsigned int)(*(float *)&value * 32.0f);
    s->w[4] = (v & 0x3ff) << 12 | s->w[4] & 0xffc00fff;
    self->dirty = 0x8000000000000000ULL >> (unsigned int)(index + 32) | self->dirty;
}
