typedef struct E { char d[0x1c]; } E;
extern void fn_82230300(E *e, int a, int b);

void fn_822DB718(E *first, E *last)
{
    E *p;
    for (p = first; p != last; p++)
        fn_82230300(p, 1, 0);
}
