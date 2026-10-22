typedef void (*cb_t)(void *, int);
extern int fn_82517978();
extern int fn_827D50C0();
extern int fn_827D5108();
extern int fn_827D9E70();

typedef struct {
    int a0;
    int a4;
    void *p8;
    cb_t cbC;
    int x10;
    int x14;
    int x18;
    int x1c;
    int x20;
    int done24;
} S;

void fn_827E4580(S *s)
{
    struct { int first; int second; } pair;

    if (s->done24 == 0) {
        fn_827D50C0(s->x14, 0);
        if (s->cbC != 0) {
            pair.first = 0;
            pair.second = 0;
            fn_82517978(&pair, s->x14, s->x18, 0);
            s->cbC(&pair, s->x10);
        }
        if (s->p8 != 0) {
            fn_827D9E70(s->p8);
        }
        fn_827D5108(s->x14, 3);
        s->done24 = 1;
    }
}
