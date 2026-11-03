typedef struct Obj_82489610 { char pad[0xb4]; void *cb; char padb8[0x93c - 0xb8]; int w93c; } Obj_82489610;
typedef struct New_82489610 { char pad0[8]; void *p8; char padc[4]; void *p10; int i14; int i18; } New_82489610;
extern void fn_82489248();
extern int fn_824E7E68();
extern New_82489610 *fn_82522DF8(int);
extern int fn_82576400();
extern int *fn_8265C9E0(int);
extern char lbl_821C16B8[];

New_82489610 *fn_82489610(Obj_82489610 *param_1)
{
  New_82489610 *n;
  int uVar1;
  int *mem, *p;

  n = fn_82522DF8(0x1af0);
  n->p10 = param_1;
  n->i14 = 0;
  n->i18 = 0;
  n->p8 = param_1;
  param_1->cb = (void *)fn_82489248;
  fn_824E7E68((char *)n + 0x40);
  uVar1 = param_1->w93c;
  mem = fn_8265C9E0(8);
  if (mem != 0) {
    mem[1] = uVar1;
    mem[0] = (int)lbl_821C16B8;
    p = mem;
  } else {
    p = 0;
  }
  fn_82576400(uVar1, p);
  return n;
}
