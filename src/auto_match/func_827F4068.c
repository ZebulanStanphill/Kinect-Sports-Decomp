extern void fn_82810208(char *out, char *a, char *b);
extern void fn_8280D830(char *out, char *a, char *b);

void fn_827F4068(int p)
{
    fn_82810208(*(char **)(p + 8) + 0x64, *(char **)(p + 8) + 0x44, *(char **)(p + 8) + 0x64);
    fn_8280D830(*(char **)(p + 8) + 0x54, *(char **)(p + 8) + 0x34, *(char **)(p + 8) + 0x54);
}
