typedef struct Self_82DFB8F0 Self_82DFB8F0;

typedef struct Out_82DFB8F0 {
    float value;                /* 0x00 */
    float *results;             /* 0x04 */
} Out_82DFB8F0;

typedef struct {
    void *slot[4];
    void (*update)(Self_82DFB8F0 *self, void *a, void *b, void *c, Out_82DFB8F0 *out);  /* 0x10 */
} SelfVtbl_82DFB8F0;

struct Self_82DFB8F0 {
    SelfVtbl_82DFB8F0 *vt;
    char pad4[0xc];
    unsigned char *enabled;     /* 0x10 */
    int count;                  /* 0x14 */
};

void fn_82DFB8F0(Self_82DFB8F0 *self, void *a, void *b, void *c, Out_82DFB8F0 *out)
{
    int i;

    self->vt->update(self, a, b, c, out);
    for (i = 0; i < self->count; i++) {
        if (self->enabled[i])
            out->results[i] = out->value;
        else
            out->results[i] = 0.0f;
    }
}
