int strcmp(const char *a, const char *b);

typedef struct Entry_828000F0 {
    char name[0x24];
} Entry_828000F0;

extern Entry_828000F0 lbl_83156AF0[8];

unsigned short fn_828000F0(const char *name)
{
    unsigned short i;
    for (i = 0; i < 8; i++) {
        if (strcmp(lbl_83156AF0[i].name, name) == 0) {
            return i;
        }
    }
    return 0;
}
