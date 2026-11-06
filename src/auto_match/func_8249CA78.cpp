namespace R1 { namespace Soundscape {
class AudioVariant_c { public: AudioVariant_c(unsigned id); char data[0x30]; };
} }
extern "C" {
void *fn_82864988(void *, char *);
void fn_82864898(void *);
unsigned fn_82536CC8(void);
unsigned fn_822A8D30(unsigned, void *);
void fn_822A8A50(unsigned, void *);
unsigned fn_8265C9E0(unsigned);
void **fn_82297E28(unsigned, void *, int);
void fn_8266F660(void *, int);
void fn_8266F658(void *, int);
extern unsigned lbl_8327F874;

void fn_8249CA78(int param_1)
{
  struct Stk { R1::Soundscape::AudioVariant_c v; char strobj[32]; Stk(unsigned id) : v(id) {} } stk(*(unsigned *)(*(int *)(param_1 + 0x70) + 0x84c));
  char *c;
  unsigned r;
  unsigned pObj;
  void *x;
  void **puVar2;
  char *p = (char *)(param_1 + 0xb8);
  unsigned res = *(unsigned *)(param_1 + 0xcc);
  c = (res >= 0x10) ? *(char **)p : p;
  if (lbl_8327F874 == 0) { lbl_8327F874 = fn_82536CC8(); }
  r = lbl_8327F874;
  x = fn_82864988(stk.strobj, c);
  pObj = fn_822A8D30(r, &stk.v);
  if (pObj != 0) fn_822A8A50(pObj, x);
  fn_82864898(stk.strobj);
  pObj = fn_8265C9E0(0x88);
  if (pObj != 0) puVar2 = fn_82297E28(pObj, (void *)(param_1 + 0xdc), *(int *)(param_1 + 0xe4));
  else puVar2 = 0;
  *(void ***)(param_1 + 0xb0) = puVar2;
  fn_8266F660(*puVar2, 0);
  fn_8266F658(**(void ***)(param_1 + 0xb0), 0);
  fn_82864898(&stk.v);
}
}
