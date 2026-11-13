extern int fn_82CE5410();
extern int memcpy();


void fn_830819D8(unsigned int *param_1,int param_2,int param_3)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  
  iVar4 = fn_82CE5410();
  uVar3 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 4))
                    (*(int **)(iVar4 + 0x10),(__int64)param_2 * (__int64)param_3);
  memcpy(uVar3,*param_1,(__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 1) * (__int64)param_3);
  uVar1 = *(unsigned short *)((int)param_1 + 6);
  if ((uVar1 & 0x8000) == 0) {
    uVar2 = *param_1;
    iVar4 = fn_82CE5410();
    (**(int (***)())(**(int **)(iVar4 + 0x10) + 8))
              (*(int **)(iVar4 + 0x10),uVar2,(__int64)(int)(uVar1 & 0x3fff) * (__int64)param_3);
  }
  *param_1 = (int)uVar3;
  *(unsigned short *)((int)param_1 + 6) = *(unsigned short *)((int)param_1 + 6) & 0x4000 | (unsigned short)param_2;
  return;
}

