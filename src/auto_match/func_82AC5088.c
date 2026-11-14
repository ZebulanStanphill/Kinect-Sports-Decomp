long fn_82AC5088(const char *str, unsigned int start, unsigned int end, unsigned int max)
{
    unsigned int i;
    unsigned int count;

    if (start != 0) {
        if (start > end)
            return 0x80004005;
        count = end - start;
        for (i = 0; i < count; i++) {
            if (i >= max)
                return 0x80004005;
            if (str[i] == 0)
                return 0;
        }
        return 0x80004005;
    }
    return 0;
}
