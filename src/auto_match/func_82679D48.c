typedef struct Renderer_82679D48 { char pad[0x15c]; int cs[1]; } Renderer_82679D48;
extern void fn_826793F0(void);
extern void *fn_82679CE8(void *p, Renderer_82679D48 *r);
extern void *fn_8267B890(void *a, int b, int c);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void *lbl_831E7E64;

void *fn_82679D48(Renderer_82679D48 *self)
{
  void *mem;
  void *r;
  fn_826793F0();
  RtlEnterCriticalSection(&self->cs);
  mem = fn_8267B890(lbl_831E7E64, 0x60, 0);
  if (mem != 0) {
    r = fn_82679CE8(mem, self);
  } else {
    r = 0;
  }
  RtlLeaveCriticalSection(&self->cs);
  return r;
}
