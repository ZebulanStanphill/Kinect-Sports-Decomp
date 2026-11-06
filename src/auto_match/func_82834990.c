extern unsigned fn_82834328(int self, int key);
extern unsigned char fn_828301D0(int self, int key, unsigned node);

unsigned *fn_82834990(unsigned *out, int self, int key)
{
    unsigned a;
    unsigned b;
    unsigned end;
    unsigned *r;

    a = fn_82834328(self, key);
    end = *(unsigned *)(self + 4);
    if (a == end || fn_828301D0(self, key, a + 0xc) != 0) {
        b = end;
        r = &b;
    } else {
        r = &a;
    }
    *out = *r;
    return out;
}