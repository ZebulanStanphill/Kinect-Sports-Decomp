extern int fn_8223A820(void *p, int x);

typedef struct { int v[4]; } E;

void fn_82239010(E *first, E *last)
{
    for (; first != last; first++) {
        fn_8223A820(first, 0);
    }
}
