typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82D7C6F8();
extern unsigned int stack0x00000000;
extern unsigned int uStack_54c;


unsigned char * fn_82D70990(unsigned int *param_1,unsigned char *param_2,unsigned __int64 param_3)

{
  int iVar1;
  int (**pcVar2)();
  unsigned int uVar3;
  bool bVar4;
  unsigned __int64 uVar5;
  char *pcVar6;
  __int64 lVar7;
  unsigned int uStack_54c;
  
  uVar5 = ZEXT48(&stack0x00000000);
  iVar1 = *(int *)(param_1[4] + 0xc);
  uStack_54c = (unsigned int)*(unsigned __int64 *)(param_2 + 4);
  pcVar6 = (char *)(**(int (***)())(*(int *)(iVar1 + 0xc) + 4))
                             (uVar5 - 0x55f,iVar1 + 0xc,param_1[4],*param_1,param_1[1],param_1[3],
                              uStack_54c);
  if (*pcVar6 == '\0') {
    (**(int (***)())((unsigned int)param_2[1] * 0x50 + *(int *)param_1[4] + 0x16b4))
              (param_2,param_3,param_1[5],param_1[6]);
  }
  else {
    pcVar2 = *(int (***)())((unsigned int)param_2[1] * 0x50 + *(int *)param_1[4] + 0x16c8);
    if (pcVar2 != (int (**)())0x0) {
      (**(int (***)())(*(int *)param_1[3] + 0x14))((int *)param_1[3],uStack_54c,uVar5 - 0x500);
      lVar7 = uVar5 - 0x550;
      uVar3 = *param_1;
      if ((*param_2 & 8) != 0) {
        lVar7 = fn_82D7C6F8(uVar5 - 0x550,uVar5 - 0x540,uVar5 - 0x300,4,uVar5 - 0x560);
      }
      if (((*param_2 & 7) == 3) || (bVar4 = false, (*param_2 & 7) == 5)) {
        bVar4 = true;
      }
      if (!bVar4) {
        (*pcVar2)(param_2,param_3,uVar3,lVar7,param_1[4],param_1[5],param_1[6]);
        return param_2 + param_2[3];
      }
      (*pcVar2)(param_2,param_3,lVar7,uVar3,param_1[4],param_1[5],param_1[6]);
    }
    param_2 = param_2 + param_2[3];
  }
  return param_2;
}

