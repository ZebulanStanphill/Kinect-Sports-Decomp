extern "C" long _InterlockedExchangeAdd(long *, long);
extern "C" void __emit(unsigned);
#define __lwsync() __emit(0x7C2004AC)
extern "C" void fn_8267BE38(void *);
extern "C" void fn_8268B330(void *);
extern "C" void fn_8268C510(void *, unsigned);
extern "C" void fn_8268C750(void *, void *);
extern "C" void fn_826D7220(void *);
extern "C" void fn_826F35B0(void *, void *, void *);

struct Dst_826F8CC0 {
  virtual void v0();
  virtual void Call(void *, int);
};
struct Inner_826F8CC0 { char pad[8]; int x8; };
struct Mid_826F8CC0 { char pad[8]; Inner_826F8CC0 *x8; };
struct Obj_826F8CC0 {
  char pad[0x10];
  Mid_826F8CC0 *x10;
  int x14;
  int x18;
  Dst_826F8CC0 *x1c;
  int x20;
};

extern "C" void fn_826F8CC0(Obj_826F8CC0 *o)
{
  struct { unsigned a50; unsigned a54; int a58; int a5c; int a60; } L;
  long n;
  unsigned obj;
  L.a58 = 6;
  fn_8268C750(&L.a5c, &o->x18);
  fn_8268C750(&L.a60, &o->x14);
  fn_8268B330(&L.a50);
  fn_826F35B0(o->x10, &L.a50, &L.a58);
  fn_8268C510(&L.a54, (L.a50 & ~3u) + 8);
  o->x1c->Call(&L.a54, o->x10->x8->x8);
  obj = L.a54 & ~3u;
  n = _InterlockedExchangeAdd((long *)(obj + 4), -1);
  if (n - 1 == 0) fn_8267BE38((void *)obj);
  __lwsync();
  o->x20 = 1;
  obj = L.a50 & ~3u;
  n = _InterlockedExchangeAdd((long *)(obj + 4), -1);
  if (n - 1 == 0) fn_8267BE38((void *)obj);
  fn_826D7220(&L.a58);
}
