unsigned int _CountLeadingZeros(unsigned int value);

#define MAX_OF(a, b) ((a) > (b) ? (a) : (b))

int fn_8263ABD0(unsigned int width, unsigned int height, int depth, int border)
{
    unsigned int largest;

    largest = MAX_OF(width - border * 2, MAX_OF(height - border * 2, MAX_OF(depth - border * 2, 1)));
    return 32 - _CountLeadingZeros(largest);
}
