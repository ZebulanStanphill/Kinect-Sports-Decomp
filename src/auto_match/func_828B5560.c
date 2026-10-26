typedef struct { unsigned short a, b, c; unsigned char d, e; } S;

void fn_828B5560(S *s, unsigned int a, unsigned int b, unsigned int c)
{
    s->a = a;
    s->b = b;
    s->c = c;
    s->d = 0xde;
    s->e = 1;
}
