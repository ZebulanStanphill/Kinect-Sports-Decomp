typedef struct {
    int a, b, c;
    int result;
    char rest[0x300 - 16];
} Builder_82779AA8;

extern void fn_826F29B8(Builder_82779AA8 *, int);
extern void fn_826F2AD8(Builder_82779AA8 *, int);
extern void fn_8269DA90(Builder_82779AA8 *, int);
extern void fn_826F1A90(Builder_82779AA8 *);
extern void fn_826F2588(Builder_82779AA8 *);

int fn_82779AA8(int p1, int p2, int p3, int p4, int p5, int p6)
{
    Builder_82779AA8 s;
    int r;
    fn_826F29B8(&s, p1);
    fn_826F2AD8(&s, p2);
    fn_8269DA90(&s, p3);
    fn_8269DA90(&s, p4);
    fn_8269DA90(&s, p5);
    fn_8269DA90(&s, p6);
    fn_826F1A90(&s);
    r = s.result;
    fn_826F2588(&s);
    return r;
}
