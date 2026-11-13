typedef struct Tree_83124F38 {
    int w[4];
} Tree_83124F38;

typedef struct Entry_83124F38 {
    int id;
    Tree_83124F38 first;
    Tree_83124F38 second;
    char data[300];
    __int64 extra[4];
} Entry_83124F38;

extern Entry_83124F38 lbl_832961E0[4];
extern void fn_82511350(Tree_83124F38 *tree);
extern void fn_8313F520(void);
extern int atexit(void (*f)(void));
extern void *memset(void *dst, int value, unsigned int size);

void fn_83124F38(void)
{
    Entry_83124F38 *e = lbl_832961E0;
    int i;
    fn_82511350(&e->first);
    fn_82511350(&e->second);
    memset(e->data, 0, 300);
    {
        int j;
        for (j = 0; j < 4; j++) e->extra[j] = 0;
    }
    e++;
    i = 2;
    do {
        fn_82511350(&e->first);
        fn_82511350(&e->second);
        i--;
        e++;
    } while (i >= 0);
    atexit(fn_8313F520);
}
