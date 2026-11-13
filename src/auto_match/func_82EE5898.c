typedef struct {
    unsigned short a;
    unsigned short b;
} Key_82EE5898;

extern void *fn_82EE5620(void *table, Key_82EE5898 key, int flags);

long fn_82EE5898(char *param_1, unsigned short param_2, unsigned short param_3)
{
    Key_82EE5898 key;

    if (*(unsigned int *)(param_1 + 0xb4) >= 0xffff) {
        return (long)0xC00D3A9A;
    }
    key.a = param_2;
    key.b = param_3;
    return fn_82EE5620(param_1 + 0x4c, key, 0) ? 0 : (long)0x8007000E;
}
