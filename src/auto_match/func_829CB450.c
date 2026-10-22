extern void fn_8262FEC8(void *p);
extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_829C9180(void *p, int n);
extern char lbl_83215000[];

typedef struct {
    void *a;
    int abuf[13];
    void *b;
    int bbuf[13];
    void *c;
    int pad[16];
    void *items[4];
} State;

#define g_state (*(State **)(lbl_83215000 + 0x2270))

void fn_829CB450(void)
{
    unsigned int i;

    if (g_state != 0) {
        if (g_state->a != 0) {
            fn_829C9180(g_state->abuf, 0x400);
            fn_8265C990(g_state->a, 0x8c9c0001);
            g_state->a = 0;
        }
        if (g_state->b != 0) {
            fn_829C9180(g_state->bbuf, 0x400);
            fn_8265C990(g_state->b, 0x8c9c0001);
            g_state->b = 0;
        }
        if (g_state->c != 0) {
            fn_8265C990(g_state->c, 0xac9c0000);
            g_state->c = 0;
        }
for (i = 0; i < 4; i++) { if (g_state->items[i] != 0) { fn_8262FEC8(g_state->items[i]); g_state->items[i] = 0; } }
        fn_8265C990(g_state, 0x209c0000);
        g_state = 0;
    }
}
