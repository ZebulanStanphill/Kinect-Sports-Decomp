typedef struct Channel_830776C8 Channel_830776C8;

typedef struct Mixer_830776C8 {
    char pad0[0x70b8];
    Channel_830776C8 *wetLeft;  /* 0x70b8 */
    Channel_830776C8 *wetRight; /* 0x70bc */
    char pad70C0[0x18];
    Channel_830776C8 *dryLeft;  /* 0x70d8 */
    Channel_830776C8 *dryRight; /* 0x70dc */
} Mixer_830776C8;

typedef struct Voice_830776C8 {
    char pad0[0x14];
    Mixer_830776C8 *mixer; /* 0x14 */
    char pad18[0xc];
    float rate; /* 0x24 */
    char pad28[0x50];
    float wetGain; /* 0x78 */
    float dryGain; /* 0x7c */
    char pad80[0x8];
    float gain;     /* 0x88 */
    float wetLevel; /* 0x8c */
    float dryLevel; /* 0x90 */
} Voice_830776C8;

extern const float lbl_82186E68;
extern float fn_8306E818(float a, float b, float t);
extern float fn_8306E7D8(float a, float b);
extern void fn_83078F10(Channel_830776C8 *channel, float scale);
extern void fn_83078F08(Channel_830776C8 *channel, float value);

void fn_830776C8(Voice_830776C8 *self, unsigned char wet, float from, float to, float limit)
{
    Channel_830776C8 *first = wet ? self->mixer->wetLeft : self->mixer->dryLeft;
    Channel_830776C8 *second = wet ? self->mixer->wetRight : self->mixer->dryRight;
    float level = wet ? self->wetLevel : self->dryLevel;
    float gain = self->gain * (wet ? self->wetGain : self->dryGain);
    float amount;
    float scale;
    float inverse;

    amount = fn_8306E818(gain, from, to);
    amount = fn_8306E7D8(amount, limit);
    amount = fn_8306E7D8(amount / self->rate, lbl_82186E68);
    scale = (amount - 1.0f) * 0.25f + 1.0f;
    fn_83078F10(first, scale / level);
    inverse = 1.0f / scale;
    fn_83078F08(second, inverse * amount);
    fn_83078F10(second, inverse);
}
