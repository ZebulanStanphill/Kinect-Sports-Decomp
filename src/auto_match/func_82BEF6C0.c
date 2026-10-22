typedef struct S {
    char pad[0x1c];
    int it[2];
    int count;
} S;
extern char lbl_82196582[];
extern void fn_82BE5240(S *s, int code, char *msg);
extern void fn_82BE5340(int *it);
extern void *fn_82BE5378(int *it);
extern void fn_82BE5350(int *it);

void *fn_82BEF6C0(S *s, void *key)
{
    if (key == 0) {
        fn_82BE5240(s, 500, lbl_82196582);
    } else {
        int *it = s->it;
        fn_82BE5340(it);
        while (s->count != 0) {
            if (key == fn_82BE5378(it)) {
                return fn_82BE5378(it);
            }
            fn_82BE5350(it);
        }
    }
    return 0;
}
