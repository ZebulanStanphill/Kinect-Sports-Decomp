inline void *operator new(unsigned int, void *p) throw() { return p; }
extern "C" void *fn_8265C9E0(unsigned int);
extern "C" void *lbl_821C0834[];
struct Core_824C2D18 { char pad[0x44]; int f44; };
struct Wrap_824C2D18 {
  void **vtbl; Core_824C2D18 *core; int z;
  Wrap_824C2D18(void *src) { Core_824C2D18 *c = ((Core_824C2D18 **)src)[1]; z = 0; vtbl = lbl_821C0834; core = c; c->f44 = 0; }
};
extern "C" Wrap_824C2D18 **fn_824C2D18(Wrap_824C2D18 **out, void *src)
{
  void *mem = fn_8265C9E0(0xc);
  Wrap_824C2D18 *o = mem ? new (mem) Wrap_824C2D18(src) : 0;
  *out = o;
  return out;
}
