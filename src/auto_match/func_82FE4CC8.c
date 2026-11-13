// Computes a shared gain from the fourth band (fn_82FE4C08) and sets up the four band
// filters (12-byte outputs at +0x30) with it.
typedef struct Band_82FE4CC8 {
    unsigned int frequency;
    int unk4;
    int unk8;
} Band_82FE4CC8;

typedef struct Filter_82FE4CC8 {
    int coef[3];
} Filter_82FE4CC8;

typedef struct Eq_82FE4CC8 {
    Band_82FE4CC8 bands[4];         /* 0x00 */
    Filter_82FE4CC8 filters[4];     /* 0x30 */
} Eq_82FE4CC8;

extern double fn_82FE4C08(unsigned int frequency, double q, double gain, unsigned int sampleRate);
extern void fn_82FE4B20(Filter_82FE4CC8 *out, double q, double gain, unsigned int sampleRate, unsigned int frequency);

void fn_82FE4CC8(Eq_82FE4CC8 *self, double q, double gain, unsigned int sampleRate)
{
    double g = fn_82FE4C08(self->bands[3].frequency, q, gain, sampleRate);
    fn_82FE4B20(&self->filters[0], q, g, sampleRate, self->bands[0].frequency);
    fn_82FE4B20(&self->filters[1], q, g, sampleRate, self->bands[1].frequency);
    fn_82FE4B20(&self->filters[2], q, g, sampleRate, self->bands[2].frequency);
    fn_82FE4B20(&self->filters[3], q, g, sampleRate, self->bands[3].frequency);
}
