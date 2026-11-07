typedef struct {
    unsigned short a;
    unsigned short b;
} Key_82E72660;

extern void *fn_82E72560(void *table, Key_82E72660 key, int flags);

long fn_82E72660(char *param_1, unsigned short param_2, int param_3)
{
    Key_82E72660 key;

    if (*(unsigned int *)(param_1 + 0xc) == 0) {
        return (long)0xC00D36B6;
    }
    if (param_3 < 4 || param_3 == 0xff) {
        key.a = param_2;
        key.b = (unsigned short)param_3;
        return fn_82E72560(param_1 + 0x4c, key, 0) ? 0 : (long)0x8007000E;
    }
    return (long)0x80070057;
}
