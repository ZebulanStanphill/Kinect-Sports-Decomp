typedef struct S_82CF9318 {
    char pad0[0x2c];
    char sub[0x150];
    char *items[35];
    int count;
    char *top;
} S_82CF9318;

extern void fn_82D015D8(char *e);
extern void fn_82D029B8(void *p);

void fn_82CF9318(S_82CF9318 *s)
{
    int i;
    int j;
    char *e;

    for (i = 0; i < s->count; i++) {
        e = s->items[i];
        if (e != 0) {
            fn_82D015D8(e);
            if (e + 0x34 == s->top) {
                s->top -= 0x34;
            }
            for (j = i + 1; j < s->count; j++) {
                if (s->items[j] == e) {
                    s->items[j] = 0;
                }
            }
        }
    }
    fn_82D029B8(s->sub);
}
