int fn_82CAB2D8(int a, int b, int c, int d, int e, int f, int g, int h, int threshold)
{
    int low;
    int high;

    if (a >= h) {
        low = h;
        high = a;
    } else {
        low = a;
        high = h;
    }
    if (low > c) {
        low = c;
    } else if (c > high) {
        high = c;
    }
    if (low > e) {
        low = e;
    } else if (e > high) {
        high = e;
    }
    if (high - low >= threshold) {
        return 0;
    }
    if (low > b) {
        low = b;
    } else if (b > high) {
        high = b;
    }
    if (low > d) {
        low = d;
    } else if (d > high) {
        high = d;
    }
    if (low > f) {
        low = f;
    } else if (f > high) {
        high = f;
    }
    if (low > g) {
        low = g;
    } else if (g > high) {
        high = g;
    }
    return high - low < threshold;
}
