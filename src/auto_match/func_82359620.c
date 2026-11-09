typedef struct { unsigned int first, second; } Pair_82359620;
extern unsigned char fn_8223AAC0(unsigned int);
extern void fn_822315A0(unsigned int);
typedef void (*Method_82359620)(void *, Pair_82359620 *);
void fn_82359620(int p, Pair_82359620 *s)
{
    unsigned int rep = s->second;
    unsigned int first = s->first;
    Pair_82359620 tmp;
    tmp.first = 0;
    tmp.second = 0;
    if (rep && fn_8223AAC0(rep)) {
        if (tmp.second) fn_822315A0(tmp.second);
        tmp.second = rep;
        tmp.first = first;
    }
    (*(Method_82359620 *)(*(int *)(p + 0x40) + 4))((void *)(p+0x40), &tmp);
}
