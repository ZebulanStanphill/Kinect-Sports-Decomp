typedef unsigned short wchar_t;

extern int fn_82528EE0(wchar_t *buf, int count, const wchar_t *fmt, ...);
extern void fn_82358FD8(void *strings, wchar_t *buf, int count, const char *id);

void fn_82440810(int *value, wchar_t *out, void *strings)
{
    wchar_t unit[0x20];
    int v = *value;
    fn_82528EE0(out, 0x20, L"%i.%.2i", v / 100, v % 100);
    fn_82358FD8(strings, unit, 0x20, "leaderboard_postfix_distance");
    fn_82528EE0(out, 0x20, L"%ls%ls", out, unit);
}
