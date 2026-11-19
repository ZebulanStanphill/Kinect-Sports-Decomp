extern void fn_82631450(unsigned int dst, unsigned int src);
extern void fn_82631738(unsigned int dst, unsigned int src);
extern unsigned int fn_82631BF8(unsigned int src);

struct Bindings_82839050 {
    unsigned int **inputTargets;  /* 0x00 */
    unsigned int *inputSources;   /* 0x04 */
    int inputCount;               /* 0x08 */
    unsigned int **outputTargets; /* 0x0c */
    unsigned int *outputSources;  /* 0x10 */
    int outputCount;              /* 0x14 */
    unsigned int **resultTargets; /* 0x18 */
    unsigned int *resultSources;  /* 0x1c */
    int resultCount;              /* 0x20 */
};

void fn_82839050(struct Bindings_82839050 *bindings)
{
    /* never used, but it has a stack slot in the original frame */
    struct Bindings_82839050 *scratch;
    struct Bindings_82839050 *self = bindings;
    int i;

    for (i = 0; i < self->inputCount; i++) {
        fn_82631450(*self->inputTargets[i], self->inputSources[i]);
    }
    for (i = 0; i < self->resultCount; i++) {
        *self->resultTargets[i] = fn_82631BF8(self->resultSources[i]);
    }
    for (i = 0; i < self->outputCount; i++) {
        fn_82631738(*self->outputTargets[i], self->outputSources[i]);
    }
}
