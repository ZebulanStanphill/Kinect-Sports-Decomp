typedef struct {
  char pad0[0x8c]; int f8c;
  char pad90[0xf8 - 0x90]; int ff8;
  char pad_fc[0x1cc - 0xfc]; int f1cc;
  char pad1d0[0x82c - 0x1d0]; int f82c;
  int f830; int f834;
  char pad838[0xb64 - 0x838]; int fb64;
  char padb68[0xb70 - 0xb68]; int fb70;
  char padb74[0xb94 - 0xb74]; int fb94;
  char padb98[0xfb0 - 0xb98]; int ffb0;
  char padfb4[0x50d0 - 0xfb4]; int f50d0;
  char pad50d4[0x54c8 - 0x50d4]; int f54c8;
  char pad54cc[0x55d0 - 0x54cc]; int f55d0; int f55d4;
  char pad55d8[0x56a0 - 0x55d8]; int f56a0; int f56a4;
} Obj_830CE8E0;
extern void fn_82C565B0(Obj_830CE8E0 *, int);
extern void fn_82C935C8(Obj_830CE8E0 *, int);
extern void fn_82C8BA58(Obj_830CE8E0 *);
extern void fn_82C8BB60(Obj_830CE8E0 *);
extern void fn_82C78EE0(Obj_830CE8E0 *, int);

void fn_830CE8E0(Obj_830CE8E0 *o, int a)
{
  int k = o->ffb0;
  int on;
  if (k == 2 || k == 3) on = 1; else on = 0;
  o->fb64 = *(int *)((char *)o + (o->fb94 + 0x2df) * 4);
  o->fb70 = *(int *)((char *)o + (o->fb94 + 0x2e2) * 4);
  o->f830 = *(int *)((char *)o + (o->f82c + 0x107) * 8);
  o->f834 = *(int *)((char *)o + o->f82c * 8 + 0x83c);
  if (k == 3) o->f1cc = 0; else o->f1cc = 1;
  if (o->f54c8 == 1) o->f55d0 = o->f8c * 4 + o->f55d4;
  else o->f55d0 = o->f55d4;
  if (o->f50d0 == 0) o->f56a0 = on;
  else o->f56a4 = on;
  fn_82C565B0(o, o->ff8);
  fn_82C935C8(o, o->ff8);
  fn_82C8BA58(o);
  fn_82C8BB60(o);
  fn_82C78EE0(o, a);
}
