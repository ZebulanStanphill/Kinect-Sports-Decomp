typedef struct Buffer_8305B068 {
    int *data; /* 0x0 */
    char pad4[8];
    unsigned short stride; /* 0xc */
    unsigned short count;  /* 0xe */
} Buffer_8305B068;

extern void fn_83059A80(void *state, int *in0, int *in2, int *in1, int *in3, int *in4, int *in5, int *out0,
                        int *out2, int *out1, int *out3, int *out4, int *out5, unsigned int count);

void fn_8305B068(void *unused, void *state, Buffer_8305B068 *in, Buffer_8305B068 *out)
{
    fn_83059A80(state, in->data, in->data + in->stride * 2, in->data + in->stride, in->data + in->stride * 3,
                in->data + in->stride * 4, in->data + in->stride * 5, out->data, out->data + out->stride * 2,
                out->data + out->stride, out->data + out->stride * 3, out->data + out->stride * 4,
                out->data + out->stride * 5, in->count);
}
