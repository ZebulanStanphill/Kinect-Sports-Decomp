extern int fn_82FAB9C0();
extern int fn_82FF86A8();
extern int fn_82FF8ED8();
extern int fn_830080D8();
extern int fn_8302B840();
extern int fn_8302BE60();
extern unsigned int lbl_832642E0;


unsigned __int64 fn_82FFAD90(__int64 param_1,int param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 1;
  puVar3 = (unsigned int *)fn_82FF8ED8(param_1 + 4,*(unsigned int *)(param_2 + 4));
  if (puVar3 == (unsigned int *)0x0) {
    return 2;
  }
  uVar1 = *puVar3;
  iVar2 = puVar3[1];
  piVar4 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0x998,uVar1);
  if (piVar4 == (int *)0x0) {
    RtlEnterCriticalSection(0xffffffff8326434c);
    piVar4 = (int *)fn_8302B840(iVar2,uVar1);
    if (piVar4 == (int *)0x0) {
      uVar5 = 2;
    }
    else {
      uVar5 = fn_8302BE60(piVar4,puVar3,*(unsigned int *)(param_2 + 4));
      if ((int)uVar5 != 1) {
        (**(int (***)())(*piVar4 + 8))(piVar4);
      }
    }
LAB_82ffaec0:
    RtlLeaveCriticalSection(0xffffffff8326434c);
    if ((int)uVar5 != 1) goto LAB_82ffaee0;
  }
  else if ((iVar2 == 0x4011) && (((unsigned int)piVar4[5] >> 2 & 1) == 0)) {
    RtlEnterCriticalSection(0xffffffff8326434c);
    uVar5 = fn_8302BE60(piVar4,puVar3,*(unsigned int *)(param_2 + 4));
    if ((int)uVar5 != 1) {
      (**(int (***)())(*piVar4 + 8))(piVar4);
    }
    goto LAB_82ffaec0;
  }
  puVar3 = (unsigned int *)fn_830080D8(param_3 + 0x34);
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = piVar4;
  }
LAB_82ffaee0:
  fn_82FF86A8(param_1 + 4);
  return uVar5;
}

