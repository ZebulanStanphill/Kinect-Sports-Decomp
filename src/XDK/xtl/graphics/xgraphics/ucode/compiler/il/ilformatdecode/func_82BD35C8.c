extern char lbl_82196F10[];
extern void fn_82AB15D0(int, const char *, const char *, const char *, unsigned int);

int fn_82BD35C8(const unsigned int *instruction)
{
    if (instruction[0] & 0x400000) {
        unsigned int i = 0;
        do {
            unsigned int format;
            switch (i) {
            case 0:
                format = instruction[1] & 3;
                break;
            case 1:
                format = (instruction[1] >> 2) & 3;
                break;
            case 2:
                format = (instruction[1] >> 4) & 3;
                break;
            case 3:
                format = (instruction[1] >> 6) & 3;
                break;
            default:
                fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", lbl_82196F10,
                            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\"
                            "ucode\\compiler\\il\\ilformatdecode.cpp",
                            166);
                goto next;
            }
            if (format == 2 || format == 3) {
                return 1;
            }
        next:
            i++;
        } while ((int)i < 4);
    }
    return 0;
}
