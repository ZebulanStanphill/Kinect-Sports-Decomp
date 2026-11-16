typedef struct Ratio_82A53638 {
    char padding[0x148];
    int numerator;
    int denominator;
} Ratio_82A53638;

void fn_82A53638(Ratio_82A53638 *self, int numerator, int denominator)
{
    int second = denominator;
    int first = numerator;
    self->numerator = numerator;
    self->denominator = denominator;
    while (first > 0) {
        if (first < second) {
            int temporary = first;
            first = second;
            second = temporary;
        }
        first -= second;
    }
    if (second != 0) {
        self->numerator = numerator / second;
        self->denominator = denominator / second;
    }
}
