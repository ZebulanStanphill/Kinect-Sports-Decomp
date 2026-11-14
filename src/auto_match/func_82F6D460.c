unsigned int fn_82F6D460(const char *text, unsigned int maxCount)
{
    unsigned int count;

    for (count = 0; count < maxCount; count++) {
        if (*text == 0)
            break;
        text++;
    }
    return count;
}
