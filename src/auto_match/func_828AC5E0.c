typedef struct {
    int pad0;
    unsigned char flag;
    char pad1[3];
    unsigned int a;
    unsigned int b;
    unsigned int max_a;
    unsigned int max_b;
} Counter_828AC5E0;

void fn_828AC5E0(Counter_828AC5E0 *c, unsigned char inc, int unused, unsigned char second)
{
    if (inc != 0) {
        if (second != 0) {
            c->b = c->b + 1;
        } else {
            c->a = c->a + 1;
        }
    } else {
        if (second != 0) {
            c->b = c->b - 1;
        } else {
            c->a = c->a - 1;
        }
    }
    if (c->a > c->max_a) {
        c->a = c->max_a;
        c->flag = 0;
    }
    if (c->b > c->max_b) {
        c->b = c->max_b;
        c->flag = 0;
    }
}
