float fn_8301E260(float x0, float y0, float x1, float y1, float x)
{
    if (x <= x0) {
        return y0;
    }
    if (x >= x1) {
        return y1;
    }
    return (x - x0) / (x1 - x0) * (y1 - y0) + y0;
}
