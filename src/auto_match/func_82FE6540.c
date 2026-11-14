extern unsigned int strlen(const char *s);

void fn_82FE6540(char *s)
{
    unsigned int len = strlen(s);
    unsigned int i;
    for (i = 0; i < len; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 0x20;
    }
}
