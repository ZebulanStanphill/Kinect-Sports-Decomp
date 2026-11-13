extern unsigned int *auStack_38;
extern unsigned int *auStack_50;
extern int fn_8309FA20();
extern int fn_830A6D10();
extern unsigned int lbl_82002C5C;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82D9E450(unsigned __int64 param_1,int *param_2,unsigned int *param_3,unsigned __int64 param_4,
                  int param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned char auStack_38 [4];
  unsigned int uStack_34;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  uStack_34 = lbl_82002C5C;
  iVar2 = *(int *)(iVar1 + 4);
  *param_2 = iVar1 + 8;
  fn_830A6D10((iVar2 + 5) * 0x10 + param_5,(iVar2 + 8) * 0x10 + param_5,
                    (*(int *)(iVar1 + 8) + 5) * 0x10 + param_5,
                    (*(int *)(iVar1 + 8) + 8) * 0x10 + param_5,auStack_50,auStack_38);
  puVar3 = (unsigned int *)*param_3;
  *param_3 = puVar3 + 4;
  uStack_40 = *puVar3;
  uStack_3c = puVar3[1];
  fn_8309FA20(auStack_50,param_6,param_7);
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 1;
  return;
}

