extern unsigned int *auStack_60;
extern int fn_82C1E938();
extern int fn_82C1EAB8();


unsigned __int64 fn_82C1EE20(int param_1,unsigned int *param_2,int *param_3,unsigned int *param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  unsigned char auStack_60 [16];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if ((((piVar1 == (int *)0x0) || (param_2 == (unsigned int *)0x0)) || (param_4 == (unsigned int *)0x0)) ||
     ((param_5 == (int *)0x0 || (param_3 == (int *)0x0)))) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    *(unsigned short *)(param_2 + 1) = 0;
    *(unsigned short *)((int)param_2 + 6) = 0;
    *(unsigned char *)(param_2 + 2) = 0;
    *(unsigned char *)((int)param_2 + 9) = 0;
    *(unsigned char *)((int)param_2 + 10) = 0;
    *(unsigned char *)((int)param_2 + 0xb) = 0;
    *(unsigned char *)(param_2 + 3) = 0;
    *(unsigned char *)((int)param_2 + 0xd) = 0;
    *(unsigned char *)((int)param_2 + 0xe) = 0;
    *(unsigned char *)((int)param_2 + 0xf) = 0;
    uVar3 = fn_82C1EAB8(param_1,param_2,param_3,param_4,param_5);
    if (((-1 < (int)uVar3) &&
        (uVar3 = fn_82C1E938(param_1,param_2 + 1,param_3,param_4,param_5), -1 < (int)uVar3)) &&
       (uVar3 = fn_82C1E938(param_1,(int)param_2 + 6,param_3,param_4,param_5), -1 < (int)uVar3)) {
      cVar4 = '\0';
      cVar6 = '\0';
      do {
        if (*param_4 == 0) {
          uVar3 = (**(int (***)())(*piVar1 + 0x10))(*piVar1,*param_5,param_3,param_4,auStack_60);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          cVar6 = '\0';
          *(unsigned __int64 *)(piVar1 + 2) = (unsigned __int64)*param_4 + *(__int64 *)(piVar1 + 2);
          *param_5 = *param_5 - *param_4;
        }
        cVar5 = cVar6 + '\x01';
        iVar2 = (int)cVar4;
        cVar4 = cVar4 + '\x01';
        *(unsigned char *)((int)param_2 + iVar2 + 8) = *(unsigned char *)(*param_3 + (int)cVar6);
        *param_4 = *param_4 - 1;
        cVar6 = cVar5;
      } while (cVar4 < '\b');
      *param_3 = (int)cVar5 + *param_3;
    }
  }
  return uVar3;
}

