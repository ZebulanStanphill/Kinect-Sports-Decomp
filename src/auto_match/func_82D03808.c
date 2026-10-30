typedef struct Link_82D03808 { int pad; struct Link_82D03808 *next; int pad2[2]; unsigned lo; unsigned hi; } Link_82D03808;
typedef struct { char pad[0xa4]; Link_82D03808 sentinel; Link_82D03808 *first; } Heap_82D03808;

void fn_82D03808(unsigned char *out, Heap_82D03808 *h, unsigned p)
{
  Link_82D03808 *n;
  unsigned c, e, hi, hdr;
  if ((p & 0xf) == 0 && (unsigned char)(((((unsigned *)(hdr = p - 0x10))[1]) >> 1) & 1) != 0) {
    for (n = *(Link_82D03808 **)((char *)h + 0xa8); n != (Link_82D03808 *)((char *)h + 0xa4); n = n->next) {
      c = n->lo;
      hi = n->hi;
      if (p >= c && p < hi) {
        e = hi - 0x10;
        if (c != e) {
          do {
            if (c == hdr) { *out = 1; return; }
            c = (*(unsigned *)(c + 4) & 0xfffffffc) + c;
          } while (c != e);
          *out = 0;
          return;
        }
        break;
      }
    }
  }
  *out = 0;
}
