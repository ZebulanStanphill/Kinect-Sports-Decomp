extern void fn_82A87300(char *, char *, void *, char *);
extern void fn_82A8C620(void *, char *, int, char *);
extern void fn_82A87AE8(char *, char *, void *, char *);
void fn_82A87E58(char *a, char *b, void *c, char *d)
{
    char *t;
    char *s;
    fn_82A87300(a, b, c, d);
    t = d + 0x92;
    s = b + 0x34;
    fn_82A8C620(c, t, 0x20, s + 4);
    fn_82A8C620(c, t + 0x20, 0x20, s);
    fn_82A87AE8(a + 8, b + 0x40, c, d + 0xd2);
}
