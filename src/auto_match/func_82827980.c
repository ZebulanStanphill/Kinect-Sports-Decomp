typedef struct Entry_82827980 { char pad[0x14]; unsigned char flag; } Entry_82827980;
extern int fn_82827948();
extern void fn_82822510(void *, void *, void *, Entry_82827980 **);

unsigned char fn_82827980(char *self, void *key, Entry_82827980 **out)
{
    Entry_82827980 *a[4];

    fn_82822510(self + 0x2f4, (void *)fn_82827948, key, a);
    if (out != 0) {
        *out = a[0];
    }
    if (a[0] != 0) {
        return a[0]->flag;
    }
    return 0;
}
