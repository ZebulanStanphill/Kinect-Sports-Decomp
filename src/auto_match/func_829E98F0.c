/* Applies an address mode to a coordinate in [low, high): 0 clamps and zeroes the
   weight of a coordinate outside, 2 clamps, 4 mirrors; other modes return the
   coordinate unchanged. */
int fn_829E98F0(int coord, int low, int high, int mode, float *weight)
{
    int size;

    switch (mode) {
    case 0:
        if (coord < low) {
            if (weight != 0) {
                *weight = 0.0f;
            }
            return low;
        }
        if (coord < high) {
            return coord;
        }
        if (weight != 0) {
            *weight = 0.0f;
        }
        return high - 1;
    case 2:
        if (coord < low) {
            return low;
        }
        if (coord < high) {
            return coord;
        }
        return high - 1;
    case 4:
        size = high - low;
        coord -= low;
        while (coord < 0 || coord >= size) {
            if (coord < 0) {
                coord = -1 - coord;
            } else {
                coord = size * 2 - coord - 1;
            }
        }
        return coord + low;
    }
    return coord;
}
