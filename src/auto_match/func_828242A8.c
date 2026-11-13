int strcmp(const char *a, const char *b);

extern const char *lbl_83156E80[15];

int fn_828242A8(const char *name)
{
    unsigned int i;
    for (i = 0; i < 15; i++) {
        if (strcmp(name, lbl_83156E80[i]) == 0) {
            return 1;
        }
    }
    return 0;
}
