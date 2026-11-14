typedef struct State_8285E748 {
    char pad[0x10];
    unsigned int phase;
    char data[0xc];
    char extra[4];
} State_8285E748;

extern State_8285E748 *fn_8285A830(void *a, void *b); /* a->f68 + b->f8 */
extern void fn_82810360(void *data, void *extra);
extern void fn_8285D2C0(void *data);
extern void fn_8285AAF0(void *a, void *b, void *data);
extern int fn_82860750(void *a, void *b, void *data);
extern void fn_828602F8(void *a, void *b, void *extra, void *data);
extern void fn_8285E650(void *a, void *b);

void fn_8285E748(void *a, void *b)
{
    State_8285E748 *s = fn_8285A830(a, b);
    switch (s->phase) {
    case 0:
        fn_8285D2C0(s->data);
        fn_8285AAF0(a, b, s->data);
        if (fn_82860750(a, b, s->data) == 0)
            return;
        s->phase = 1;
        break;
    case 1:
        fn_82810360(s->data, s->extra);
        fn_8285D2C0(s->data);
        fn_8285AAF0(a, b, s->data);
        fn_828602F8(a, b, s->extra, s->data);
        break;
    default:
        return;
    }
    fn_8285E650(a, b);
}
