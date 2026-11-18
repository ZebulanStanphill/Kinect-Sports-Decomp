extern char *lbl_832635C0;

int fn_82F71D98(void)
{
    int value;

    if (*lbl_832635C0 == 0) {
        return 0;
    }
    if (*lbl_832635C0 >= '0' && *lbl_832635C0 <= '9') {
        return *lbl_832635C0++ - '/';
    }
    value = 0;
    while (*lbl_832635C0 != '@') {
        if (*lbl_832635C0 == 0) {
            return 0;
        }
        if (*lbl_832635C0 < 'A' || *lbl_832635C0 > 'P') {
            return -1;
        }
        value = value * 16 + (*lbl_832635C0++ - 'A');
    }
    if (*lbl_832635C0++ == '@') {
        return value;
    }
    return -1;
}
