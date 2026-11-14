int fn_828EA290(int v)
{
    unsigned int u;
    if (v == (int)0x80000000) {
        u = 0x80000000;
    } else if (v < 0) {
        u = -v;
    } else {
        u = v + 1;
    }
    {
        int count = 1;
        u--;
        if (u) {
            do {
                u >>= 1;
                ++count;
            } while (u > 0);
        }
        return count;
    }
}
