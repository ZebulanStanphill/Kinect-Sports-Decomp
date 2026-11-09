extern int fn_828E9D90(void *s);
extern void fn_828E9D60(void *s, int pos);

int fn_82234CB0(void *self, void *s)
{
    int start;
    int n;

    start = fn_828E9D90(s);
    n = fn_828E9D90(s) - start;
    fn_828E9D60(s, start);
    return n;
}
