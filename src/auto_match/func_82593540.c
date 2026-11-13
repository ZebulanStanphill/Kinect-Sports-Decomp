unsigned int strlen(const char *s);

extern const char *lbl_831C08E8[];
extern int fn_82526AF8(int count, const char **names, const char *name);

int fn_82593540(const char *name)
{
    int index;

    if (strlen(name) == 0)
        return 0;
    index = fn_82526AF8(0x9d, &lbl_831C08E8[1], name);
    if (index == -1)
        return 0;
    return index + 1;
}
