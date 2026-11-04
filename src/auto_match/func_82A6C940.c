typedef struct R_82A6C940 { char pad[0x1c]; unsigned char *ptr; unsigned count; unsigned acc; unsigned n; unsigned acc2; unsigned n2; char pad2[0x54 - 0x34]; unsigned char (*xlat)(unsigned char); } R_82A6C940;
void fn_82A6C940(R_82A6C940 *r, unsigned sh)
{
  unsigned v;
  if (r->n2 == 0 && r->n - sh + 8 <= 0x20) {
    while (r->count > 0) {
      if (r->n - sh + 8 > 0x20) return;
      v = r->xlat(*r->ptr++);
      r->count--;
      r->acc = (r->acc << (8 - sh)) | ((unsigned char)(v << sh) >> sh);
      r->n = r->n - sh + 8;
      sh = 0;
    }
  } else {
    v = r->xlat(*r->ptr++);
    r->count--;
    r->acc2 = (r->acc2 << (8 - sh)) | ((unsigned char)(v << sh) >> sh);
    r->n2 = r->n2 - sh + 8;
  }
}
