extern "C" void fn_82A4AE20(int);
extern "C" int fn_82A4B0D8(void *, int, int);
extern "C" int fn_82A5A810(int, int, int, int *);
struct Lock_82A4B408 { virtual void v0(); virtual void v1(); virtual void Lock(); virtual void v3(); virtual void v4(); virtual void Unlock(); };
struct Obj_82A4B408 { char pad[0x1c]; Lock_82A4B408 lock; char pad2[0x48 - 0x20]; int f48; char pad3[0x180 - 0x4c]; int f180; };
struct Guard_82A4B408 { Lock_82A4B408 *l; Guard_82A4B408(Lock_82A4B408 *x) : l(x) { l->Lock(); } ~Guard_82A4B408() { l->Unlock(); } };
extern "C" int fn_82A4B408(Obj_82A4B408 *self, int a, int *out)
{
  Lock_82A4B408 *l = &self->lock;
  l->Lock();
  int hr = fn_82A5A810(self->f48, a, self->f180, out);
  if (hr >= 0) {
    hr = fn_82A4B0D8(self, 0, *out);
    if (hr >= 0) fn_82A4AE20(self->f48);
  }
  l->Unlock();
  return hr;
}
