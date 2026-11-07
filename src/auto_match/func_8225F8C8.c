typedef struct Str_8225F8C8 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int res;
} Str_8225F8C8;

extern void fn_82230110(Str_8225F8C8 *s, const char *text);
extern void fn_82230300(Str_8225F8C8 *s, int a, int b);
extern void fn_82E1CB08(const char *key, const char *value, int c);
extern void fn_82E1CCA8(void);

void fn_8225F8C8(void)
{
    Str_8225F8C8 s1;
    Str_8225F8C8 s2;

    fn_82230110(&s1, "Unknown");
    fn_82230110(&s2, "Unknown");
    fn_82E1CB08("Console", s1.res >= 0x10 ? s1.u.ptr : s1.u.buf, 0);
    fn_82E1CB08("BuildNumber", "103.000", 0);
    fn_82E1CCA8();
    fn_82230300(&s2, 1, 0);
    fn_82230300(&s1, 1, 0);
}
