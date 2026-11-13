extern unsigned __int64 __mftb(void);
#define TBLr 0
extern unsigned int *auStack_80;
extern int fn_82CE5410();
extern int fn_82CE66E8();
extern int fn_82D53618();
extern int fn_82D71B20();
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82138A1C;
extern unsigned int lbl_8323B4A0;


int fn_82D539F8(unsigned int *param_1,int param_2,int param_3,int param_4,
                      int param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar6;
  unsigned int *puVar7;
  unsigned uVar4;
  unsigned uVar5;
  unsigned char auStack_80 [64];
  
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar6 + 4);
  if (puVar1 < *(unsigned int **)(iVar6 + 0xc)) {
    *puVar1 = "LtBvTree3";
    puVar1[3] = "StQueryTree";
    uVar5 = (unsigned)__mftb();
    puVar1[1] = (int)uVar5;
    *(unsigned int **)(iVar6 + 4) = puVar1 + 4;
  }
  puVar7 = (unsigned int *)fn_82CE5410();
  uVar2 = *puVar7;
  *puVar7 = uVar2 + 0x4000;
  fn_82CE66E8(auStack_80,param_1 + 8);
  uVar4 = fn_82D53618(*param_1,param_1[1],auStack_80,param_1 + 0x1c,param_1[3],0,
                          uVar2,0x1000);
  { int *o=*(int **)param_1[1]; uVar5=(*(int (**)())(*o+16))(o); }
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar6 + 4);
  if (puVar1 < *(unsigned int **)(iVar6 + 0xc)) {
    *puVar1 = "StNarrow";
    uVar3 = __mftb();
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar6 + 4) = puVar1 + 3;
  }
  fn_82D71B20(param_3,param_1,uVar5,((uVar4 & 0xffffffff) >> 0x1f) - 1 & uVar2,
                  param_5);
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar6 + 4);
  if (puVar1 < *(unsigned int **)(iVar6 + 0xc)) {
    *puVar1 = "lt";
    uVar5 = (unsigned)__mftb();
    puVar1[1] = (int)uVar5;
    *(unsigned int **)(iVar6 + 4) = puVar1 + 3;
  }
  puVar7 = (unsigned int *)fn_82CE5410();
  *puVar7 = uVar2;
  return param_3 + 0x10;
}

