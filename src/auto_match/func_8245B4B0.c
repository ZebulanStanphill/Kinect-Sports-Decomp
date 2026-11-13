extern unsigned int *auStack_50;
extern int fn_82A1DD38();


unsigned __int64 fn_8245B4B0(int param_1,unsigned __int64 param_2,__int64 param_3,int param_4)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned char auStack_50 [80];
  
  RtlEnterCriticalSection();
  if ((*(int *)(param_1 + 0x588) == 0) || (*(int *)(param_1 + 0x6a4) != 3)) {
    RtlLeaveCriticalSection(param_1);
  }
  else {
    RtlLeaveCriticalSection(param_1);
    if (param_4 == 1) {
      piVar1 = *(int **)(param_1 + 0x56c);
    }
    else {
      piVar1 = *(int **)(param_1 + 0x568);
    }
    if (piVar1 != (int *)0x0) {
      uVar3 = (**(int (***)())(*piVar1 + 0x20))(piVar1);
      uVar4 = (**(int (***)())(*piVar1 + 0x24))(piVar1);
      if (uVar3 < uVar4) {
        *(unsigned int *)(*(int *)(param_1 + 0x564) + 8) = 0;
        puVar2 = *(unsigned int **)(param_1 + 0x564);
        auStack_50[0] = 2;
        if (((unsigned __int64)puVar2[2] + 1 & 0xffffffff) <= (unsigned __int64)puVar2[1]) {
          fn_82A1DD38((unsigned __int64)*puVar2 + (unsigned __int64)puVar2[2],auStack_50,1);
          puVar2[2] = puVar2[2] + 1;
        }
        puVar2 = *(unsigned int **)(param_1 + 0x564);
        if (((unsigned __int64)puVar2[2] + param_3 & 0xffffffff) <= (unsigned __int64)puVar2[1]) {
          fn_82A1DD38((unsigned __int64)*puVar2 + (unsigned __int64)puVar2[2],param_2,param_3);
          puVar2[2] = puVar2[2] + (int)param_3;
        }
        if (param_4 == 1) {
          (**(int (***)())*piVar1)();
        }
        else {
          (*(int (**)())((unsigned int *)*piVar1)[1])
                    (piVar1,**(unsigned int **)(param_1 + 0x564),
                     (*(unsigned int **)(param_1 + 0x564))[2]);
        }
        return 0;
      }
    }
  }
  return 0xffffffff80004005;
}

