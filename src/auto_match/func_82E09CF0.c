int fn_82E09CF0(const int *data, int byteCount, int stride)
{
    int index;

    if (byteCount == 0) {
        return 0;
    }
    index = byteCount / 4;
    index -= index % stride;
    while (data[index] < 0) {
        index -= stride;
    }
    return index + stride;
}
