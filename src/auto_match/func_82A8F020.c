extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern int fn_82A8D4F0();
extern int fn_82A8EB80();
extern unsigned int uStack_94;


unsigned __int64
fn_82A8F020(int *param_1,int *param_2,int *param_3,__int64 param_4,__int64 param_5,
             __int64 param_6,__int64 param_7)

{
  int iVar1;
  char cVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned char *puVar6;
  unsigned int uVar7;
  unsigned char auStack_a0 [1];
  unsigned char auStack_98 [4];
  unsigned int uStack_94;
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [112];
  
  uVar5 = param_5 - 1;
  if (-1 < (__int64)uVar5) {
    lVar3 = (uVar5 & 0x3fffffff) * 4 + param_6;
    uVar4 = uVar5;
    do {
      if (*(int *)lVar3 < 0) {
        return 0;
      }
      if (*param_3 <= *(int *)lVar3) {
        return 0;
      }
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -4;
    } while (-1 < (__int64)uVar4);
  }
  puVar6 = (unsigned char *)*param_1;
  uStack_94 = 5;
  if (puVar6 == (unsigned char *)0x0) {
    puVar6 = auStack_98;
  }
  iVar1 = param_3[2];
  if (-1 < (int)uVar5) {
    do {
      uVar7 = *(int *)param_6 * iVar1 + 0x180;
      if (0 < iVar1) {
        cVar2 = (**(int (***)())(*param_2 + 4))(param_2);
        if (((cVar2 == '\0') ||
            (cVar2 = (**(int (***)())(*param_2 + 0xc))(param_2,(__int64)((int)uVar7 >> 3)),
            cVar2 == '\0')) ||
           (cVar2 = (**(int (***)())(*param_2 + 0x10))
                              (param_2,auStack_90,
                               (__int64)((int)(uVar7 + iVar1 + 7) >> 3) -
                               (__int64)((int)uVar7 >> 3),auStack_a0), cVar2 == '\0')) {
          return 0;
        }
      }
      fn_82A8D4F0(auStack_70,auStack_90,0x14);
      fn_82A8EB80(puVar6,param_3 + 1,auStack_70,uVar7 & 7,param_4);
      uVar5 = uVar5 - 1;
      param_4 = param_4 + param_7;
      param_6 = param_6 + 4;
    } while (-1 < (__int64)uVar5);
  }
  return 1;
}

