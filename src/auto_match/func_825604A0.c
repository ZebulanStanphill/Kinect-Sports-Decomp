extern int fn_825605B0();
extern int fn_82560690();
extern int fn_825611A8();
extern unsigned int lbl_83280B98;
extern unsigned int lbl_83296960;
extern unsigned int lbl_83296AE0;
extern unsigned int lbl_83296BAC;
extern unsigned int lbl_83296BB0;
extern unsigned int lbl_83296BB4;
extern unsigned int lbl_83296BB8;
extern unsigned int lbl_83296BBC;


void fn_825604A0(int *param_1)

{
  unsigned char *puVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned int *puVar5;
  
  iVar3 = fn_82560690(0);
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  *param_1 = 0;
  uVar2 = 0;
  param_1[1] = 0;
  puVar5 = &lbl_83280B98;
  do {
    if ((int *)*puVar5 == param_1) {
      puVar1 = *(unsigned char **)((int)((uVar2 & 0xffffffff) << 3) + -0x7cd7f474);
      if (puVar1 == (unsigned char *)0x0) {
        lbl_83296AE0 = &lbl_83296960;
        *(unsigned int *)((int)&lbl_83280B98 + (int)((uVar2 & 0xffffffff) << 2)) = 0;
      }
      else {
        fn_825605B0(uVar2,puVar1 + 0x84);
        lbl_83296BB0 = 1;
        lbl_83296BB4 = 1;
        lbl_83296BAC = 0;
        lbl_83296BB8 = 1;
        lbl_83296BBC = 1;
        lbl_83296AE0 = puVar1;
      }
      break;
    }
    puVar5 = puVar5 + 1;
    uVar2 = uVar2 + 1;
  } while ((int)puVar5 < -0x7cd7f460);
  iVar4 = fn_82560690(0);
  if (iVar3 != iVar4) {
    fn_825611A8();
  }
  return;
}

