void fn_82AAB1D8(int depth, int width, int rows, int *data, int alpha)
{
    int beta = 64 - alpha;
    int planeSize = width * rows;
    int *plane;
    int *last;
    int x;
    int z;
    int y;

    for (y = 0; y < rows; y++) {
        for (z = 0; z < depth; z++) {
            plane = data + z * planeSize;
            last = plane;
            for (x = 1; x < width; x++) {
                plane[x] = (plane[x] * beta + plane[x - 1] * alpha + 32) >> 6;
            }
            for (x = width - 2; x >= 0; x--) {
                plane[x] = (plane[x] * beta + plane[x + 1] * alpha + 32) >> 6;
            }
            if (z != 0) {
                for (x = 0; x < width; x++) {
                    plane[x] = (plane[x] * beta + plane[x - planeSize] * alpha + 32) >> 6;
                }
            }
        }
        for (z = depth - 2; z <= 0; z++) {
            for (x = 0; x < width; x++) {
                last[x] = (last[x] * beta + last[x + planeSize] * alpha + 32) >> 6;
            }
        }
        data += width;
    }
}
