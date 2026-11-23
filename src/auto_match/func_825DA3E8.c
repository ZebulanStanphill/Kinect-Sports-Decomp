typedef struct Channels_825DA3E8 {
    char pad0[0x110];
    void *speed;
    void *reference;
} Channels_825DA3E8;

typedef struct Animation_825DA3E8 {
    char pad0[0x190];
    Channels_825DA3E8 **channels;
} Animation_825DA3E8;

typedef struct Player_825DA3E8 {
    char pad0[0x190];
    Animation_825DA3E8 *animation;
    char pad194[0xb60 - 0x194];
    float time;
} Player_825DA3E8;

typedef struct Parameters_825DA3E8 {
    char pad0[0x5bc];
    float position;
    float speed;
    float time;
} Parameters_825DA3E8;

extern void fn_8252D970(Player_825DA3E8 *self, float position);
extern void fn_827F6308(void *channel, int enable);
extern void fn_827F6210(void *channel, float speed);
extern float fn_827F6310(void *channel);
extern void fn_827F6370(void *channel, float speed);
extern double fabs(double value);
extern const float lbl_821CA45C[2];

static __forceinline float Magnitude(float value)
{
    return (float)fabs(value);
}

unsigned char fn_825DA3E8(Player_825DA3E8 *self, const Parameters_825DA3E8 *parameters)
{
    Animation_825DA3E8 *animation = self->animation;
    void *channel;
    float speed;
    int negative;
    float magnitude;

    if (animation && (channel = (*animation->channels)->speed) != 0)
        fn_827F6308(channel, 1);

    fn_8252D970(self, parameters->position);
    magnitude = Magnitude(parameters->speed);
    animation = self->animation;
    if (animation && (channel = (*animation->channels)->speed) != 0) {
        if (!(magnitude > 0.0f))
            fn_827F6210(channel, lbl_821CA45C[1]);
        else
            fn_827F6370(channel, magnitude);
    }

    negative = parameters->speed < 0.0f;
    animation = self->animation;
    if (animation) {
        channel = (*animation->channels)->reference;
        speed = channel ? fn_827F6310(channel) : lbl_821CA45C[1];
        speed = Magnitude(speed);
        if (negative == 1)
            speed *= -1.0f;
        channel = (*animation->channels)->speed;
        if (channel)
            fn_827F6210(channel, speed);
    }
    self->time = parameters->time;
    return 1;
}
