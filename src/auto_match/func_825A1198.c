typedef struct {
    union { char buf[16]; char *ptr; } u;
    unsigned size;
    unsigned cap;
} Str_825A1198;

extern void fn_82230300(Str_825A1198 *s, int built, unsigned newsize);
extern void fn_8257EB18(void);
extern int fn_8257EB78(Str_825A1198 *s);
extern int fn_8260D428(Str_825A1198 *s, unsigned off, unsigned n0, const char *p, unsigned n);

int fn_825A1198(void)
{
    Str_825A1198 s;
    fn_82230300(&s, 0, 0);
    fn_8257EB18();
    if (fn_8257EB78(&s) == 0) {
        if (fn_8260D428(&s, 0, s.size, "en", 2) == 0) {
            fn_82230300(&s, 1, 0);
            return 1;
        }
        if (fn_8260D428(&s, 0, 3, "en-", 3) == 0) {
            fn_82230300(&s, 1, 0);
            return 1;
        }
    }
    fn_82230300(&s, 1, 0);
    return 0;
}
