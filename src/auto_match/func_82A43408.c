typedef struct Output_82A43408 Output_82A43408;

typedef struct OutputMethods_82A43408 {
    void *unused[2];
    void (*write)(Output_82A43408 *, int, void *, float *, unsigned int);
} OutputMethods_82A43408;

struct Output_82A43408 {
    OutputMethods_82A43408 *methods;
};

typedef struct Weights_82A43408 {
    Output_82A43408 *output; /* 0x00 */
    unsigned int width;      /* 0x04 */
    unsigned int height;     /* 0x08 */
    float *weights;          /* 0x0c */
    float scale;             /* 0x10 */
    float *input;            /* 0x14 */
    float *buffer;           /* 0x18 */
} Weights_82A43408;

void fn_82A43408(Weights_82A43408 *self, void *context)
{
    unsigned int column;
    unsigned int row;
    unsigned int index;
    for (column = 0; column < self->width; ++column) {
        for (row = 0; row < self->height; ++row) {
            index = row * self->width + column;
            self->buffer[index + 3] = self->input[index] * self->weights[column] * self->scale;
        }
    }
    self->output->methods->write(self->output, 0, context, self->buffer,
                                 (self->height * self->width + 3) * 4);
}
