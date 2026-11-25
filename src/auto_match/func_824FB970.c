typedef struct Mix_824FB970 {
    unsigned int tag;
    float a;
    float b;
    int n1;
    float c;
    float d;
    int flag;
    int n2;
    float e;
    int z[5];
    char pad98[4];
    unsigned char pending;
    float gain;
    unsigned int output[6];
} Mix_824FB970;

typedef struct Object_824FB970 {
    char pad00[0xb60];
    Mix_824FB970 mix;
} Object_824FB970;

typedef struct Input_824FB970 {
    char pad00[0x5bc];
    unsigned int values[6];
} Input_824FB970;

static __forceinline void Configure(Mix_824FB970 *mix)
{
    mix->a = 1.0f;
    mix->b = 0.0f;
    mix->tag = 0x4d697850;
    mix->d = 0.0f;
    mix->n1 = 0x20;
    mix->c = 0.2f;
    mix->flag = 0;
    mix->e = 0.2f;
    mix->n2 = 0x40;
    mix->z[0] = 0;
    mix->z[3] = 0;
    mix->z[4] = 0;
    mix->z[1] = 0;
    mix->z[2] = 0;
}

int fn_824FB970(Object_824FB970 *self, const Input_824FB970 *input)
{
    self->mix.output[0] = input->values[0];
    self->mix.output[1] = input->values[1];
    self->mix.output[2] = input->values[2];
    self->mix.output[3] = input->values[3];
    self->mix.output[4] = input->values[4];
    self->mix.output[5] = input->values[5];
    Configure(&self->mix);
    self->mix.gain = 0.0f;
    self->mix.flag = 1;
    self->mix.pending = 0;
    return 1;
}
