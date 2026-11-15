extern void fn_8266EC60(void);
extern int fn_8266C738(void);
extern int fn_82526C70(char *, unsigned int, const char *, ...);
extern void *fn_82230110(void *, const char *);
extern void *fn_8258C000(void);
extern void fn_8258D950(void *, void *, float, float);
extern void fn_8258D9E0(void *, void *, float, float);

void fn_82671AC8(unsigned int id, const char *prefix, float x, float y, float width, float height)
{
    char text[64];
    char string[32];
    fn_8266EC60();
    if (fn_8266C738() != 0) {
        void *value;
        fn_82526C70(text, 64, "%s%08x", prefix, id);
        value = fn_82230110(string, text);
        fn_8258D950(fn_8258C000(), value, x, y);
        value = fn_82230110(string, text);
        fn_8258D9E0(fn_8258C000(), value, width, height);
    }
}
