int fn_82F64268(const unsigned char *string, const unsigned char *control)
{
    const unsigned char *ctrl = control;
    unsigned char map[32];
    int count;

    for (count = 0; count < 32; count++) {
        map[count] = 0;
    }
    while (*ctrl) {
        map[*ctrl >> 3] |= (1 << (*ctrl & 7));
        ctrl++;
    }
    map[0] |= 1;
    count = 0;
    while (!(map[string[count] >> 3] & (1 << (string[count] & 7)))) {
        count++;
    }
    return count;
}
