typedef struct Obj_82A5BC10 { void (**vt)(struct Obj_82A5BC10 *); } Obj_82A5BC10;
extern int fn_82A3FF60();
extern void fn_82A4F4E0(void *);
extern int fn_82A5C760();
extern void fn_82A77490(int);
extern char lbl_83219D50[];
int fn_82A5BC10(int param_1)
{
  int *puVar1;
  int lVar2;
  Obj_82A5BC10 *o = *(Obj_82A5BC10 **)(param_1 + 0xc);

  o->vt[2](o);
  lVar2 = 0;
  if (*(unsigned int *)(param_1 + 0x18) == 0) {
    fn_82A77490(*(int *)(param_1 + 0x94));
  }
  else {
    puVar1 = (int *)fn_82A3FF60(lbl_83219D50,0x10,0x20970006,0);
    if (puVar1 == 0) {
      lVar2 = -0x7ff8fff2;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 9;
      puVar1[3] = param_1 + 4;
      lVar2 = fn_82A5C760(*(int *)(param_1 + 0x14),puVar1);
      if (lVar2 < 0) {
        fn_82A4F4E0(puVar1);
      }
    }
  }
  o = *(Obj_82A5BC10 **)(param_1 + 0xc);
  o->vt[5](o);
  return lVar2;
}
