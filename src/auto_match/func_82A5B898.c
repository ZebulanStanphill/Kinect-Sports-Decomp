typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A5B680();
extern int fn_82A5C760();
extern int fn_82A786C8();
extern int fn_82F68CC0();


__int64 fn_82A5B898(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned int uVar7;
  
  uVar5 = (unsigned int)param_3;
  if (uVar5 != 0xfffffffe) {
    (**(int (***)())(**(int **)(param_1 + 0xc) + 8))();
  }
  puVar4 = (unsigned int *)0x0;
  bVar1 = true;
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar2 = param_1 + 0x1c;
    puVar4 = (unsigned int *)(param_1 + 0x44);
  }
  else if (*(int *)(param_1 + 0x7c) == 0) {
    uVar2 = param_1 + 0x58;
    puVar4 = (unsigned int *)(param_1 + 0x80);
  }
  else {
    KeGetCurrentProcessType();
    uVar2 = fn_82A3FF60(0xffffffff83219d50,0x28,0x20970006,0);
    bVar1 = false;
  }
  if (uVar2 == 0) {
    lVar6 = -0x7ff8fff2;
  }
  else {
    fn_82F68CC0(uVar2,param_2,0x28);
    if (bVar1) {
      *(unsigned int *)(uVar2 + 0x24) = 1;
    }
    uVar7 = param_1 + 4;
    iVar3 = fn_82A5B680(uVar7,param_3);
    if (iVar3 == 0) {
      if (bVar1) {
        puVar4[1] = uVar5;
        puVar4[3] = uVar7;
        puVar4[2] = 5;
        *puVar4 = (unsigned int)(param_3 != 0);
        lVar6 = fn_82A5C760(*(unsigned int *)(param_1 + 0x14),puVar4);
      }
      else {
        puVar4 = (unsigned int *)fn_82A3FF60(0xffffffff83219d50,0x14,0x20970006,0);
        if (puVar4 == (unsigned int *)0x0) {
          lVar6 = -0x7ff8fff2;
        }
        else {
          puVar4[1] = uVar5;
          puVar4[3] = uVar7;
          puVar4[2] = 6;
          *puVar4 = (unsigned int)(param_3 != 0);
          puVar4[4] = uVar2;
          lVar6 = fn_82A5C760(*(unsigned int *)(param_1 + 0x14),puVar4);
          if (-1 < lVar6) goto LAB_82a5ba34;
          fn_82A4F4E0(puVar4);
        }
        fn_82A4F4E0(uVar2);
      }
    }
    else {
      lVar6 = fn_82A786C8(*(unsigned int *)(param_1 + 0x94),uVar2);
    }
  }
LAB_82a5ba34:
  if (uVar5 != 0xfffffffe) {
    (**(int (***)())(**(int **)(param_1 + 0xc) + 0x14))();
  }
  return lVar6;
}

