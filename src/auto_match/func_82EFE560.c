double fn_82EFE560(void *self, double value, int reference, int current)
{
    int delta = current - reference;
    double ratio;
    double result;
    double limit;

    if (delta < 0) {
        ratio = -((double)delta / (double)current);
        result = ratio * value * 0.1;
        if (ratio <= 1.0) {
            return result;
        }
        return result + 1.0;
    }
    result = (double)delta / (double)reference * value * -0.2;
    limit = value * -0.25;
    if (result >= limit) {
        return result;
    }
    return limit;
}
