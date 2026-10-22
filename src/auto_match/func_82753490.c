typedef struct StrBuf {
    char *str;
    int a;
    int b;
    int c;
} StrBuf;

extern unsigned int lbl_831E7E64;
extern char lbl_82196582[];
void fn_8268AFB0(StrBuf *sb, unsigned int x);
void fn_8268AFD8(StrBuf *sb);
void fn_8268B1F0(StrBuf *sb, const char *s, int n);
const char *fn_82752D38(int v);
void fn_827532F0(void *p, const char *s);

void fn_82753490(void *p, const char *a, const char *b, const char *c, int d,
                 const char *e, const char *f, const char *g, int h)
{
    StrBuf sb;

    if (p != 0) {
        fn_8268AFB0(&sb, lbl_831E7E64);
        fn_8268B1F0(&sb, a, -1);
        fn_8268B1F0(&sb, b, -1);
        fn_8268B1F0(&sb, c, -1);
        fn_8268B1F0(&sb, fn_82752D38(d), -1);
        fn_8268B1F0(&sb, e, -1);
        fn_8268B1F0(&sb, f, -1);
        fn_8268B1F0(&sb, g, -1);
        fn_8268B1F0(&sb, fn_82752D38(h), -1);
        fn_827532F0(p, sb.str ? sb.str : lbl_82196582);
        fn_8268AFD8(&sb);
    }
}
