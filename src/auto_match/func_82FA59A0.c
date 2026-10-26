typedef struct {
    int a;
    unsigned int b;
} Sub;

void fn_82FA59A0(int param_1)
{
    int base = (*(unsigned int *)(param_1 + 4) & 0xfffffffc) + param_1;
    Sub *s = (Sub *)(base + 4);
    s->a = param_1;
    s->b |= 2;
    *(unsigned int *)(param_1 + 4) |= 1;
}
