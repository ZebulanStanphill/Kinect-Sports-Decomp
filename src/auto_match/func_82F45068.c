typedef struct Fmt_82F45068 { char pad[0xe]; unsigned short bits; unsigned fourcc; } Fmt_82F45068;
typedef struct O_82F45068 { Fmt_82F45068 *src; Fmt_82F45068 *dst; } O_82F45068;
#define IS_YUV420(x) ((x) == 0x56555949 || (x) == 0x30323449 || (x) == 0x32315659)
unsigned char fn_82F45068(O_82F45068 *p) {
  unsigned a, b; Fmt_82F45068 *d; unsigned short bits;
  a = p->src->fourcc;
  if (!(IS_YUV420(a) || a == 0x31313450)) return 3;
  d = p->dst;
  b = d->fourcc;
  if (IS_YUV420(b) || b == 0x32595559 || b == 0x59565955 || b == 0x55595659 || b == 0x41595556 || b == 0x3131564e || b == 0x3231564e || b == 0x56323136 || b == 0x56343130) {
code_r:
    if (b != 0 && b != 3) goto skipbits;
  } else if (b != 0) {
    if (b != 3) return 4;
    goto code_r;
  }
  bits = d->bits;
  if (bits != 8 && bits != 0x10 && bits != 0x18 && bits != 0x20) return 4;
skipbits:
  if (IS_YUV420(a) && b == 3 && d->bits == 8) return 5;
  if (IS_YUV420(a) && IS_YUV420(b)) return 0;
  return (b - a) == 0 ? 7 : 0;
}
