#define true 1
extern int fn_822315A0();
extern int fn_822B6490();
extern int fn_822B7480();
extern int fn_822B8960();
extern int fn_822B97F8();
extern int fn_822CBDA0();
extern int fn_82507EA8();
extern int fn_82528948();
extern int fn_8252CC80();
extern int fn_825331A8();
extern int fn_8265CA20();
extern int fn_82672660();
extern int fn_827EF828();
extern int fn_827EFFE8();
extern int fn_8288B760();


void fn_822B5F90(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int *piVar4;
  int iVar6;
  __int64 lVar5;
  
  fn_822B6490();
  (**(int (***)())(*param_2 + 0x18))(param_1,param_2);
  fn_822B7480(param_2);
  fn_822B8960(param_2[0x47]);
  if (param_2[5] != 0) {
    iVar1 = *(int *)(param_2[5] + 0x48);
    while( true ) {
      iVar6 = iVar1 + -0x40;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      if (iVar6 == 0) break;
      fn_82528948(iVar6);
      iVar1 = *(int *)(iVar6 + 0x44);
    }
  }
  if (param_2[0x1e] != 0) {
    if (param_2[5] != 0) {
      fn_822CBDA0();
    }
    puVar2 = (unsigned int *)param_2[0x1e];
    if (puVar2[0x1b] != 0) {
      if (puVar2 != (unsigned int *)0x0) {
        fn_82672660(puVar2[9],puVar2);
        fn_82672660(*puVar2,puVar2);
        if (puVar2[10] != 0) {
          fn_822315A0();
        }
        if (puVar2[1] != 0) {
          fn_822315A0();
        }
        fn_8265CA20(puVar2);
      }
      param_2[0x1e] = 0;
    }
  }
  iVar1 = param_2[0x1f];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x1c) != 0) {
      fn_827EF828(param_1);
      fn_827EFFE8(*(unsigned int *)(iVar1 + 0x1c));
    }
    fn_822B97F8(iVar1);
  }
  lVar5 = 0;
  piVar4 = param_2 + 0x49;
  do {
    if (piVar4[5] == 0) {
      fn_8252CC80(param_2[5],*piVar4 != 0,lVar5);
    }
    lVar5 = lVar5 + 1;
    piVar4 = piVar4 + 1;
  } while ((int)lVar5 < 2);
  if (param_2[0x5c] != 0) {
    fn_82507EA8(param_1);
  }
  iVar1 = *(int *)param_2[0x46];
  iVar6 = *(int *)(iVar1 + 0x8c0);
  if ((*(int *)(iVar6 + 0x94) != 0) && (*(int *)(iVar6 + 0x90) != 0)) {
    fn_825331A8(*(unsigned int *)((*(int *)(*(int *)(iVar1 + 0x4c) + 0x44) + 0x20) * 4 + iVar6),
                      iVar1 + 0xf0);
  }
  if (param_2[0x5a] == 0) {
    uVar3 = param_2[0x5b];
  }
  else {
    uVar3 = fn_8288B760();
    uVar3 = uVar3 & 0xff;
  }
  if (uVar3 != 0) {
    if ((int *)param_2[0x5a] != (int *)0x0) {
      (**(int (***)())(*(int *)param_2[0x5a] + 0x40))();
    }
  }
  return;
}

