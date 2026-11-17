typedef struct Input_83049320 {
    unsigned int first;
    unsigned int second;
    unsigned char flags;
} Input_83049320;

typedef struct Output_83049320 {
    unsigned int first;
    unsigned int second;
    unsigned char high;
    unsigned char low;
    unsigned char count;
} Output_83049320;

extern void fn_8307E4F8(void *, int, const Output_83049320 *);

void fn_83049320(char *self, const Input_83049320 *input, unsigned short count)
{
    int value;
    Output_83049320 output;
    if (count == 0 || count > 1) {
        output.first = input->first;
        output.second = input->second;
        output.high = input->flags >> 4;
        output.low = input->flags & 15;
        if (count == 0) {
            value = 255;
        } else {
            value = count - 1;
            if (value > 254) {
                value = 254;
            }
        }
        output.count = value;
        fn_8307E4F8(*(void **)(self + 0x28), 0, &output);
    } else {
        value = 0;
        output.first = 0;
        output.second = 0;
        output.high = 0;
        output.low = 1;
        output.count = value;
        fn_8307E4F8(*(void **)(self + 0x28), 0, &output);
    }
}
