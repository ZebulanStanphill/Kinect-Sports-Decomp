typedef struct {
    unsigned short format;
    unsigned short channels;
    unsigned int rate;
    unsigned int reserved;
    unsigned short blockSize; /* 0x0c */
    unsigned char data[0x1a];
} Format_82A77860;

typedef struct {
    Format_82A77860 *format;
    unsigned int samples;
} Stream_82A77860;

typedef struct Filter_82A77860 Filter_82A77860;

typedef struct {
    void *methods[8];
    int (*prepare)(Filter_82A77860 *, int, Stream_82A77860 *, int, Stream_82A77860 *);
    void (*reset)(Filter_82A77860 *);
} Vtable_82A77860;

struct Filter_82A77860 {
    const Vtable_82A77860 *vtable;
};

typedef struct {
    unsigned char pad[0x2c];
    Format_82A77860 *format; /* 0x2c */
    unsigned int reserved;
    unsigned int bytes; /* 0x34 */
} Source_82A77860;

typedef struct {
    unsigned char pad[0x21c];
    unsigned int outputBytes; /* 0x21c */
    unsigned int reserved[2];
    unsigned int middleBytes; /* 0x228 */
} Buffers_82A77860;

typedef struct {
    unsigned int reserved;
    Buffers_82A77860 *buffers; /* 0x04 */
    Filter_82A77860 *output;
    unsigned char pad0[0x44];
    Source_82A77860 **source; /* 0x50 */
    unsigned char pad1[0x24];
    Format_82A77860 *format; /* 0x78 */
    unsigned char pad2[0x80];
    Filter_82A77860 *input; /* 0xfc */
} Pipeline_82A77860;

extern unsigned int fn_82A49C98(Format_82A77860 *, int);
extern void fn_82A49DF8(Format_82A77860 *, unsigned int, unsigned short, unsigned short, unsigned int,
                        unsigned short, unsigned short, unsigned int, unsigned short);
extern unsigned int fn_82A77308(Pipeline_82A77860 *, Filter_82A77860 *, unsigned int);

int fn_82A77860(Pipeline_82A77860 *self)
{
    int hr = 0;
    Source_82A77860 *source = self->source != 0 ? *self->source : 0;

    struct {
        Stream_82A77860 middle;
        Stream_82A77860 output;
        Stream_82A77860 input;
    } streams;

    Format_82A77860 temp;
    unsigned int samples;
    unsigned int bytes;

    streams.middle.format = 0;
    streams.output.format = self->format;
    streams.input.format = source->format;
    streams.input.samples = source->bytes / source->format->blockSize;
    samples = streams.input.samples;
    streams.middle.samples = samples;
    streams.output.samples = samples;
    if (self->output != 0 && self->input != 0) {
        unsigned int channels = fn_82A49C98(streams.output.format, 1);
        fn_82A49DF8(&temp, sizeof(temp), 1, streams.output.format->channels, streams.output.format->rate, 16,
                    16, channels, 0x80);
        streams.middle.format = &temp;
    } else if (self->input != 0) {
        streams.middle.format = streams.output.format;
    } else if (self->output != 0) {
        streams.middle.format = streams.input.format;
    }
    if (self->input != 0) {
        hr = self->input->vtable->prepare(self->input, 1, &streams.middle, 1, &streams.input);
        streams.output.samples = streams.middle.samples =
            fn_82A77308(self, self->input, streams.input.samples);
        if (hr < 0)
            goto failed;
    }
    if (self->output != 0) {
        hr = self->output->vtable->prepare(self->output, 1, &streams.output, 1, &streams.middle);
        streams.output.samples = fn_82A77308(self, self->output, streams.middle.samples);
    }
    if (hr >= 0) {
        bytes = self->format->blockSize * streams.output.samples;
        if (bytes > self->buffers->outputBytes)
            self->buffers->outputBytes = bytes;
        if (self->output != 0 && self->input != 0) {
            bytes = streams.middle.format->blockSize * streams.middle.samples;
            if (bytes > self->buffers->middleBytes)
                self->buffers->middleBytes = bytes;
        }
        return hr;
    }
failed:
    if (self->output != 0)
        self->output->vtable->reset(self->output);
    if (self->input != 0)
        self->input->vtable->reset(self->input);
    return hr;
}
