extern void fn_827F9450(void *, unsigned int, void **);

void fn_827F9588(void *object, unsigned int index, const float *input)
{
    struct {
        char *element;
        unsigned int padding[3];
    } result;
    fn_827F9450(object, index, (void **)&result.element);
    *(float *)(result.element + 0x30) = input[0];
    *(float *)(result.element + 0x34) = input[1];
    *(float *)(result.element + 0x38) = input[2];
}
