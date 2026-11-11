typedef struct Named_82BE1C80 {
    char pad[0x38];
    const char *name;
} Named_82BE1C80;

typedef struct Table_82BE1C80 {
    char pad[0x170];
    int it[2];
    int count;
} Table_82BE1C80;
extern char lbl_82196582[];
extern void fn_82BE5240(Table_82BE1C80 *s, int code, char *msg);
extern void fn_82BE5340(int *it);
extern Named_82BE1C80 *fn_82BE5378(int *it);
extern void fn_82BE5350(int *it);
extern int stricmp(const char *a, const char *b);

static __forceinline int isEmpty(const char *p) { return p == 0 || *p == 0; }
Named_82BE1C80 *fn_82BE1C80(Table_82BE1C80 *s, const char *name)
{
    if (isEmpty(name)) {
        fn_82BE5240(s, 300, lbl_82196582);
    } else {
        int *it = s->it;
        fn_82BE5340(it);
        while (s->count != 0) {
            Named_82BE1C80 *e = fn_82BE5378(it);
            if (stricmp(name, e->name) == 0) {
                return fn_82BE5378(it);
            }
            fn_82BE5350(it);
        }
    }
    return 0;
}
