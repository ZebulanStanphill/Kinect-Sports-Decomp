extern unsigned char fn_828AD0F8(void *a);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_828B8408(void *mem, void *a, int b, int c, int d, int e, int f);
extern void fn_828B6408(void *out, void *p);
extern void fn_82923B38(void *out);

void *fn_828C3BF8(void *out, void *a, int b, int c, int d, int e, int f)
{
  if (fn_828AD0F8(a)) {
    void *mem = fn_8265C9E0(0x54);
    fn_828B6408(out, mem ? fn_828B8408(mem, a, b, c, d, e, f) : 0);
    return out;
  }
  fn_82923B38(out);
  return out;
}
