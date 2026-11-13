typedef struct Buf_8251E5A0 { int pad0; unsigned end; int pad8; unsigned short stride; unsigned short padE; unsigned short cnt; } Buf_8251E5A0;
extern void fn_82A1DD38(unsigned, unsigned, unsigned);

void fn_8251E5A0(Buf_8251E5A0 *b, unsigned idx)
{
  unsigned limit = b->end - b->stride;
  if (idx < limit) {
    fn_82A1DD38(idx, limit, b->stride);
  }
  b->cnt = b->cnt - 1;
  b->end = b->end - b->stride;
}
