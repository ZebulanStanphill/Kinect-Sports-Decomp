typedef struct Obj_82E1F5E0 { char pad[0x60]; int h; } Obj_82E1F5E0;
typedef struct Sys_82E1F5E0 { int pad0; int pad4; int sub; } Sys_82E1F5E0;
extern void fn_82E1F5D8(void);
extern int fn_82A1E0C0(int, int, void (*)(void), Obj_82E1F5E0 *, int, int);
extern Sys_82E1F5E0 *fn_82E1D550(void);
extern int fn_82E1DE88(int, const char *, int);
extern int fn_82A1E5B8(void);
extern void fn_82A1E508(int, int);
extern void fn_82A1E2C0(int);

void fn_82E1F5E0(Obj_82E1F5E0 *o)
{
  int v;
  o->h = fn_82A1E0C0(0, 0, fn_82E1F5D8, o, 4, 0);
  v = fn_82E1DE88(fn_82E1D550()->sub, "WriteAsyncCPU", -1);
  if (v > 5) {
    v = -1;
  }
  if (v < 0) {
    v = fn_82A1E5B8();
  }
  fn_82A1E508(o->h, v);
  fn_82A1E2C0(o->h);
}
