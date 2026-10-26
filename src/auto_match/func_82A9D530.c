extern void fn_82936290(char *buf, int size, const char *src);
extern void fn_82A9CD40(void *a, void *b, int *c);

typedef struct Names { char name[32]; char tag[8]; } Names;

void fn_82A9D530(char *p, const char *s1, const char *s2)
{
    Names n;
    if (*(int *)(p + 0x90) >= 0) {
        fn_82936290(n.name, 0x20, s1);
        fn_82936290(n.tag, 8, s2);
        fn_82A9CD40(p + 0x38, &n, (int *)(p + 0x90));
    }
}
