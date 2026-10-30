struct Out_82237BF8 { unsigned int a; unsigned int b; };
// empty class passed by value (a one-byte stack copy, zero-initialised with = {})
struct Empty_82237BF8 { };
extern "C" void fn_82237C68(void *, unsigned int, unsigned int);
extern "C" void fn_82239060(void *, void *, Empty_82237BF8, Out_82237BF8 *);

extern "C" void *fn_82237BF8(void *p1, char *p2)
{
    Empty_82237BF8 e = {};
    Out_82237BF8 o;
    fn_82239060(p1, p2, e, &o);
    if (*(int *)(p2 + 0xc) != 0)
        fn_82237C68(p1, o.a, o.b);
    return p2;
}
