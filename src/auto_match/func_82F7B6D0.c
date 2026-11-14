unsigned int fn_82F7B6D0(const unsigned short *text, unsigned int maxCount)
{
    unsigned int count;

    for (count = 0; count < maxCount; count++) {
        if (*text == 0)
            break;
        text++;
    }
    return count;
}
