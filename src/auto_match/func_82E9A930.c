int fn_82E9A930(int first, int second, int third, int fourth)
{
    int minimum;
    int maximum;
    maximum = minimum = first;
    if (second > maximum) {
        maximum = second;
    } else if (second < minimum) {
        minimum = second;
    }
    if (third > maximum) {
        maximum = third;
    } else if (third < minimum) {
        minimum = third;
    }
    if (fourth > maximum) {
        maximum = fourth;
    } else if (fourth < minimum) {
        minimum = fourth;
    }
    return (first + second + third + fourth - minimum - maximum) / 2;
}
