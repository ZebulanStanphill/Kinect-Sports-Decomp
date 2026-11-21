void fn_82C41C38(void *unused, const int *second, const int *first, int *out, int count)
{
    int half = count / 2;
    int i;

    for (i = 1; i <= half; i++) {
        out[i - 1] = -((second[i] >> 1) + (first[i] >> 1));
        out[count - i] = (first[i] >> 1) - (second[i] >> 1);
    }
}
