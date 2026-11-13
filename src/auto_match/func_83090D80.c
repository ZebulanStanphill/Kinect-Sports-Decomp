#define true 1
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_83090D80(unsigned __int64 param_1,int *param_2,__int64 param_3,int *param_4)

{
  unsigned short uVar1;
  unsigned short uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  do {
    piVar4 = param_2;
    param_3 = param_3 + -1;
    if (param_3 < 1) {
      return;
    }
    uVar1 = *(unsigned short *)((int)piVar4 + 10);
    uVar2 = *(unsigned short *)(piVar4 + 6);
    piVar5 = piVar4 + 4;
    while (param_2 = piVar4 + 4, uVar2 < uVar1) {
      if ((((piVar4[1] - *piVar5 | piVar5[1] - *piVar4) & 0x80008000U) == 0) &&
         ((piVar5[3] & 1U) == 0)) {
        iVar6 = fn_82CE5410();
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar6 + 0x10),param_4,8);
        }
        iVar6 = *param_4;
        iVar3 = param_4[1] * 8;
        param_4[1] = param_4[1] + 1;
        *(int *)(iVar3 + iVar6) = piVar4[3];
        *(int *)(iVar3 + iVar6 + 4) = piVar5[3];
      }
      uVar2 = *(unsigned short *)(piVar5 + 6);
      piVar5 = piVar5 + 4;
    }
  } while( true );
}

