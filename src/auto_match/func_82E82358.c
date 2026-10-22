extern int fn_82F65350(void);

typedef struct S {
    char pad0[0x314];
    int f314;
    char pad318[0x4fc - 0x318];
    int f4fc;
    char pad500[0x594 - 0x500];
    int f594;
    int f598;
    int f59c;
    int f5a0;
    char pad5a4[0x644 - 0x5a4];
    int f644;
    int f648;
    char pad64c[0x920 - 0x64c];
    int f920;
    char pad924[0x978 - 0x924];
    int f978;
    char pad97c[0x7904 - 0x97c];
    int m7904;
    int m7908;
    int pad790c;
    int m7910;
    int pad7914;
    int m7918;
    int m791c;
    char pad7920[0x7938 - 0x7920];
    int m7938;
} S;

void fn_82E82358(S *p)
{
    p->f4fc = fn_82F65350() & 1;
    if (p->m7908 == 2)
        p->f644 = fn_82F65350() & 1;
    if (p->m7910 == 2) {
        p->f978 = fn_82F65350() & 3;
        if (p->f978 == 3)
            p->f978 = 1;
    }
    if (p->m7904 == 2)
        p->f648 = fn_82F65350() & 1;
    if (p->m791c == 2)
        p->f920 = fn_82F65350() & 1;
    if (p->m7918 == 2)
        p->f314 = fn_82F65350() & 1;
    if (p->m7938 == 2) {
        p->f59c = fn_82F65350() & 1;
        if (p->f59c != 0) {
            p->f594 = fn_82F65350() & 1;
            p->f5a0 = 0;
        } else {
            p->f5a0 = fn_82F65350() & 1;
        }
        p->f598 = (p->f59c != 0 || p->f5a0 != 0) ? 1 : 0;
    }
}
