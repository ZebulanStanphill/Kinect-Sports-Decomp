int strcmp(const char *a, const char *b);
char *strncpy(char *dst, const char *src, unsigned int n);

typedef struct Entry_828004B0 {
    char name[0x18];
    int value;           /* 0x18 */
    char pad1c[8];
} Entry_828004B0;

extern Entry_828004B0 lbl_83156AF0[8];
extern char lbl_8201DEC8[];

unsigned short fn_828004B0(const char *name, int value)
{
    unsigned short i;
    for (i = 0; i < 8; i++) {
        if (strcmp(lbl_83156AF0[i].name, lbl_8201DEC8) == 0) {
            strncpy(lbl_83156AF0[i].name, name, 0x15);
            lbl_83156AF0[i].value = value;
            return i;
        }
    }
    return 0;
}
