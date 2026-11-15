extern int strcmp(const char *first, const char *second);
extern const char lbl_82031778[];
extern const char lbl_82031774[];

int fn_829355C0(const char *text)
{
    char prefix = *text++;
    if (prefix != 'o' && prefix != 'r' && prefix != 'e')
        goto invalid;
    if (prefix == 'o') {
        if (strcmp(text, lbl_82031778) == 0)
            return 1;
        if (strcmp(text, lbl_82031774) == 0)
            return 1;
        if (*text == 'C')
            ++text;
    } else if (prefix == 'e') {
        prefix = *text++;
        if (prefix == 'A')
            return *text == 0;
        if (prefix != 'M')
            goto invalid;
    }
    {
        char digit;
        while ((digit = *text) != 0) {
            ++text;
            if (digit < '0' || digit > '9')
                goto invalid;
        }
    }
    return 1;
invalid:
    return 0;
}
