extern unsigned int *auStack_30;


void fn_82DFBB78(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  float *param_5)

{
  unsigned char *puVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  unsigned char auStack_30 [48];
  
  puVar1 = (unsigned char *)(**(int (***)())(*param_2 + 0x18))(auStack_30,param_2);
  *(unsigned char *)((int)param_5 + 0xd) = *puVar1;
  dVar4 = (double)(**(int (***)())(*param_2 + 0x10))(param_2,param_4,param_5);
  param_5[1] = (float)dVar4;
  dVar4 = (double)(**(int (***)())(*param_2 + 0x14))(param_2,param_4,param_5);
  *param_5 = (float)dVar4;
  iVar2 = 0;
  if (0 < param_2[0xb]) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(float *)((int)param_5[2] + iVar3) = *(float *)(param_2[10] + iVar3) * param_5[1];
      iVar3 = iVar3 + 4;
    } while (iVar2 < param_2[0xb]);
  }
  (**(int (***)())(*param_2 + 0x1c))(param_1,param_2);
  return;
}

