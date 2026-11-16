typedef struct Decoder_829BB3E8 Decoder_829BB3E8;

typedef struct Error_829BB3E8 {
    void (*fail)(Decoder_829BB3E8 *);
    char padding[16];
    int code;
} Error_829BB3E8;

typedef struct Memory_829BB3E8 {
    void *(*allocate)(Decoder_829BB3E8 *, int, unsigned int);
    void *unused;
    void *(*samples)(Decoder_829BB3E8 *, int, unsigned int, unsigned int);
} Memory_829BB3E8;

typedef struct Component_829BB3E8 {
    char padding[12];
    int verticalSampling;
    char padding10[12];
    unsigned int width;
    int height;
    int scaledSize;
    char padding28[44];
} Component_829BB3E8;

typedef struct Options_829BB3E8 {
    char padding[8];
    int enabled;
} Options_829BB3E8;

struct Decoder_829BB3E8 {
    Error_829BB3E8 *error;
    Memory_829BB3E8 *memory;
    char padding8[0x1c];
    int componentCount; /* 0x24 */
    char padding28[0xb4];
    Component_829BB3E8 *components; /* 0xdc */
    char paddingE0[0x60];
    int minimumScaledSize; /* 0x140 */
    char padding144[0x68];
    void *controller; /* 0x1ac */
    char padding1b0[0x18];
    Options_829BB3E8 *options; /* 0x1c8 */
};

typedef struct Controller_829BB3E8 {
    void (*start)(void);
    int unused;
    void *samples[18];
} Controller_829BB3E8;

extern void fn_829BB348(void);
extern void fn_829BAD00(Decoder_829BB3E8 *);

void fn_829BB3E8(Decoder_829BB3E8 *self, int fullBuffer)
{
    Controller_829BB3E8 *controller;
    int rows;
    int index;
    Component_829BB3E8 *component;
    controller = (Controller_829BB3E8 *)self->memory->allocate(self, 1, 0x50);
    self->controller = controller;
    controller->start = fn_829BB348;
    if (fullBuffer != 0) {
        self->error->code = 4;
        self->error->fail(self);
    }
    if (self->options->enabled != 0) {
        if (self->minimumScaledSize < 2) {
            self->error->code = 0x2f;
            self->error->fail(self);
        }
        fn_829BAD00(self);
        rows = self->minimumScaledSize + 2;
    } else {
        rows = self->minimumScaledSize;
    }
    for (index = 0, component = self->components; index < self->componentCount; index++, component++) {
        Memory_829BB3E8 *memory = self->memory;
        int scaledSize = component->scaledSize;
        int verticalSampling = component->verticalSampling;
        int minimumScaledSize = self->minimumScaledSize;
        int samples = verticalSampling * scaledSize;
        controller->samples[index] =
            memory->samples(self, 1, component->width * scaledSize, (samples / minimumScaledSize) * rows);
    }
}
