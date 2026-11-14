
extern void fn_82528EE0(unsigned short *, int, const unsigned short *, ...);
extern void fn_82358FD8(void *, unsigned short *, int, const char *);
extern void fn_82440810(int *, unsigned short *, void *);

void fn_822A4E50(void *self, int *entry, int time, unsigned short *out)
{
    unsigned short postfix[32];
    int status = entry[0x4c / 4];
    if (status == 1) {
        int *value = &entry[0x48 / 4];
        if (time) {
            fn_82528EE0(out, 32, L"%i.%.2i", *value / 100, *value % 100);
            fn_82358FD8(self, postfix, 32, "leaderboard_postfix_time");
            fn_82528EE0(out, 32, L"%ls%ls", out, postfix);
        } else
            fn_82440810(value, out, self);
    } else {
        const char *key;
        if (status == 0)
            key = "leaderboard_unfinished";
        else {
            if (status != 2)
                return;
            key = "leaderboard_foul";
        }
        fn_82358FD8(self, out, 32, key);
    }
}
