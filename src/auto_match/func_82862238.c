extern void fn_82810360(float *source, float *output);
extern void fn_828105C8(float *output, float x, float y, float z);
extern void fn_828102A8(float *source, float *output, float scale);

void fn_82862238(char *vertices, float scale, unsigned int format, int stride, int index, float *output)
{
    short *position;
    switch (format) {
    case 0:
        position = (short *)(vertices + index * 6);
        fn_828105C8(output, (float)position[0], (float)position[1], (float)position[2]);
        fn_828102A8(output, output, scale);
        break;
    case 1:
        fn_82810360((float *)(index * 12 + vertices), output);
        break;
    }
}
