extern void *memset(void *, int, unsigned int);
typedef struct State_829F3428 { int pad[36]; int active; } State_829F3428;
extern void fn_829F3038(void *, void *, void *, State_829F3428 *, void *);
void fn_829F3428(void *a, void *b, void *c, State_829F3428 *s, void *out)
{
    if (s->active == 0) {
        memset(out, 0, 0x240);
        fn_829F3038(a,b,c,s,out);
    }
}
