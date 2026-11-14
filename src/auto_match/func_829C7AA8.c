extern long _InterlockedIncrement(long volatile *addend);

typedef struct Port_829C7AA8 {
    long refs;
    char pad4[0x180];
} Port_829C7AA8;

typedef struct Globals_829C7AA8 {
    char pad0[0x6ac];
    Port_829C7AA8 ports[2];
} Globals_829C7AA8;

extern int lbl_83214FFC;
extern Globals_829C7AA8 lbl_83215000;

int fn_829C7AA8(int reserved, unsigned int idx)
{
    if (lbl_83214FFC == 0) {
        return 0x8000ffff;
    }
    if (idx >= 2) {
        return 0x80070057;
    }
    if (reserved != 0) {
        return 0x80070057;
    }
    _InterlockedIncrement(&lbl_83215000.ports[idx].refs);
    return 0;
}
