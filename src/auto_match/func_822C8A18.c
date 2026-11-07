typedef struct Container_822C8A18 {
    int pad[4];
    unsigned int *begin;
    unsigned int *end;
} Container_822C8A18;

extern unsigned char fn_822BD338(unsigned int a, int key);
extern void fn_82365BD8(unsigned int *result, unsigned int *it);

unsigned int *fn_822C8A18(unsigned int *result, Container_822C8A18 *c, int key)
{
    unsigned int *it;
    unsigned int *end = c->end;

    for (it = c->begin; it != end; it += 2) {
        if (fn_822BD338(*it + 4, key) != 0)
            break;
    }
    if (it != c->end) {
        fn_82365BD8(result, it);
        return result;
    }
    result[0] = 0;
    result[1] = 0;
    return result;
}
