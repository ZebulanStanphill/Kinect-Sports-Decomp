extern void fn_82414950(int a, int b, int c);
extern void fn_82552720(int a, void *b, void *c, int d, int e, int f, int g);

typedef struct Game {
    char pad0[0xc0c];
    int ac0c;
    char pad1[0xcb8 - 0xc10];
    int acb8;
    char pad2[0xd70 - 0xcbc];
    char ad70[0x2b50 - 0xd70];
    int a2b50;
    int pad2b54;
    int a2b58;
    int pad2b5c[3];
    char a2b68[0x2b84 - 0x2b68];
    int a2b84;
    int a2b88;
} Game;

void fn_8235FAF8(Game *g, unsigned int kind)
{
    int v;
    if (g->ac0c == 0) {
        return;
    }
    if (g->acb8 == 0) {
        return;
    }
    if (g->a2b84 == 0 && g->a2b88 == 0) {
        fn_82552720(g->a2b58, g->a2b68, g->ad70, 0, 2, 0, 0);
        switch (kind) {
        case 0:
            fn_82414950(g->a2b50, 0, 5);
            break;
        case 1:
            fn_82414950(g->a2b50, 0, 6);
            break;
        case 2:
            fn_82414950(g->a2b50, 0, 7);
            break;
        default:
            fn_82414950(g->a2b50, 0, 8);
            break;
        }
    }
    g->a2b88 = 1;
}
