typedef struct E_8303E4F0 { int f0; unsigned char b; } E_8303E4F0;
typedef struct S_8303E4F0 { int f0; E_8303E4F0 *begin; E_8303E4F0 *end; } S_8303E4F0;

unsigned int fn_8303E4F0(S_8303E4F0 *s)
{
    unsigned int sum = 0;
    E_8303E4F0 *it;
    for (it = s->begin; it != s->end; it++)
        sum += it->b;
    return sum;
}
