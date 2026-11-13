typedef struct Entry_828227E0 {
    int a;
    int b;
} Entry_828227E0;

extern void fn_828222B8(Entry_828227E0 *entry);
extern Entry_828227E0 *lbl_8320A648;
extern int lbl_83156E78;

void fn_828227E0(int last, int unused, Entry_828227E0 *entries)
{
    int i;
    lbl_8320A648 = entries;
    lbl_83156E78 = last;
    for (i = 0; i <= last; i++) {
        fn_828222B8(&lbl_8320A648[i]);
    }
}
