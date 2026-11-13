char *strncpy(char *dst, const char *src, unsigned int n);

void fn_82817BE8(char **names, unsigned int which, char *dst, unsigned int n)
{
    const char *src;
    int found = 1;
    if (dst == 0) {
        return;
    }
    if (n == 0) {
        return;
    }
    if (names == 0) {
        return;
    }
    switch (which) {
    case 0:
        src = names[1];
        break;
    case 1:
        src = names[0];
        break;
    default:
        found = 0;
        break;
    }
    if (found)
        strncpy(dst, src, n);
    else
        *dst = 0;
}
