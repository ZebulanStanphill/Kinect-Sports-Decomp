int strcmp(const char *, const char *);

typedef struct Name_82766C88 {
    int refs;
    int f04;
    char text[1];
} Name_82766C88;

typedef struct Key_82766C88 {
    int f00;
    int f04;
    unsigned int c;
    unsigned int name;
    unsigned int d;
} Key_82766C88;

unsigned char fn_82766C88(Key_82766C88 *x, Key_82766C88 *y)
{
    return strcmp(((Name_82766C88 *)(x->name & ~3u))->text, ((Name_82766C88 *)(y->name & ~3u))->text) == 0 &&
           x->c == y->c && x->d == y->d;
}
