extern unsigned int lbl_82169D64;
extern char lbl_832635A0[];

typedef struct Source_82F72808 {
    void *vt;
    signed char state;
} Source_82F72808;

typedef struct Node_82F72808 {
    void *vt;
    Source_82F72808 *source;
} Node_82F72808;

typedef struct Self_82F72808 {
    Node_82F72808 *node;
    unsigned char state;
    unsigned char f5;
} Self_82F72808;

extern Node_82F72808 *fn_82F72318(char *pool, int size, int flags);

Self_82F72808 *fn_82F72808(Self_82F72808 *self, Source_82F72808 *source)
{
    Node_82F72808 *mem;
    Node_82F72808 *n;

    if (source != 0) {
        mem = fn_82F72318(lbl_832635A0, 8, 0);
        if (mem != 0) {
            mem->vt = (void *)&lbl_82169D64;
            if (source->state == 2 || source->state == 3) {
                source = 0;
            }
            mem->source = source;
            n = mem;
        } else {
            n = 0;
        }
        self->node = n;
        self->state = n == 0 ? 3 : 0;
    } else {
        self->node = 0;
        self->state = 0;
    }
    self->f5 = 0;
    return self;
}
