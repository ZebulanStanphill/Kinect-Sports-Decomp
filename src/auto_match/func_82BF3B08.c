extern int fn_82BF3520(char *s);
extern int fn_82BF3860(char *s);
int fn_82BF3B08(char *s)
{
if (s == 0 || *s == 0) return 0; if (fn_82BF3520(s) != 0) return fn_82BF3860(s); return 1;
}
