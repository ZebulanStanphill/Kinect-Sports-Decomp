int fn_82CAB3D0(int a, int b, int c, int d, int e, int f, int threshold)
{
    int low;
    int high;

    if (a >= f) {
        low = f;
        high = a;
    } else {
        low = a;
        high = f;
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
    return high - low < threshold;
}
