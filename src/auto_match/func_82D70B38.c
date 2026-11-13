typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82D7C6F8();
extern unsigned int stack0x00000000;
extern unsigned int uStack_a6c;
extern unsigned int uStack_a70;


unsigned char * fn_82D70B38(unsigned int *param_1,unsigned char *param_2,unsigned __int64 param_3)

{
  int iVar1;
  int (**pcVar2)();
  bool bVar3;
  unsigned __int64 uVar4;
  char *pcVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned int uStack_a70;
  unsigned int uStack_a6c;
  
  uVar4 = ZEXT48(&stack0x00000000);
  uStack_a6c = (unsigned int)*(unsigned __int64 *)(param_2 + 4);
  uStack_a70 = (unsigned int)((unsigned __int64)*(unsigned __int64 *)(param_2 + 4) >> 0x20);
  iVar1 = *(int *)(param_1[4] + 0xc);
  pcVar5 = (char *)(*(int (**)())**(unsigned int **)(iVar1 + 0xc))
                             (uVar4 - 0xa7f,iVar1 + 0xc,param_1[4],*param_1,param_1[1],param_1[2],
                              param_1[3],uStack_a70);
  if (*pcVar5 == '\0') {
    (**(int (***)())((unsigned int)param_2[1] * 0x50 + *(int *)param_1[4] + 0x16b4))
              (param_2,param_3,param_1[5],param_1[6]);
  }
  else {
    pcVar2 = *(int (***)())((unsigned int)param_2[1] * 0x50 + *(int *)param_1[4] + 0x16c8);
    if (pcVar2 != (int (**)())0x0) {
      (**(int (***)())(*(int *)param_1[3] + 0x14))((int *)param_1[3],uStack_a6c,uVar4 - 0x510);
      (**(int (***)())(*(int *)param_1[2] + 0x14))((int *)param_1[2],uStack_a70,uVar4 - 0x9d0);
      lVar7 = uVar4 - 0xa70;
      lVar6 = uVar4 - 0xa60;
      if ((*param_2 & 8) != 0) {
        lVar7 = fn_82D7C6F8(uVar4 - 0xa70,uVar4 - 0xa50,uVar4 - 2000,4,uVar4 - 0xa80);
        lVar6 = fn_82D7C6F8(uVar4 - 0xa60,uVar4 - 0xa10,uVar4 - 0x310,4,uVar4 - 0xa80);
      }
      if (((*param_2 & 7) == 3) || (bVar3 = false, (*param_2 & 7) == 5)) {
        bVar3 = true;
      }
      if (!bVar3) {
        (*pcVar2)(param_2,param_3,lVar6,lVar7,param_1[4],param_1[5],param_1[6]);
        return param_2 + param_2[3];
      }
      (*pcVar2)(param_2,param_3,lVar7,lVar6,param_1[4],param_1[5],param_1[6]);
    }
    param_2 = param_2 + param_2[3];
  }
  return param_2;
}

