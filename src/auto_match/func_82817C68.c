char *strncpy(char *dst, const char *src, unsigned int n);

void fn_82817C68(char **names, char *dst, unsigned int n)
{
    if (dst == 0) {
        return;
    }
    if (n == 0) {
        return;
    }
    if (names == 0) {
        return;
    }
    strncpy(dst, names[0], n);
}
