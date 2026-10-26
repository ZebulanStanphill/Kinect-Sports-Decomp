int strncmp(const char *a, const char *b, unsigned int n);

int fn_827DA358(char *param_1, const char *param_2)
{
    int i;
    char *p;

    i = 0;
    p = param_1 + 0x54;
    do {
        if (strncmp(p, param_2, 0x20) == 0) {
            return i;
        }
        i++;
        p += 0x28;
    } while (i < 0x40);
    return -1;
}
