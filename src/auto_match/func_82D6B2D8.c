extern unsigned int *auStack_80;
extern int fn_82CE6768();
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_82D6B2D8(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5
                  )

{
  int iVar1;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned char *puStack_88;
  int *piStack_84;
  unsigned char auStack_80 [128];
  
  iVar1 = *param_2;
  fn_82CE6768(auStack_80,param_2[2],iVar1 + 0x30);
  puStack_88 = auStack_80;
  uStack_90 = *(unsigned int *)(iVar1 + 0x14);
  uStack_8c = 0;
  piStack_84 = param_2;
  (**(int (***)())(**(int **)(param_1 + 0xc) + 0x20))
            (*(int **)(param_1 + 0xc),&uStack_90,param_3,param_4,param_5);
  return;
}

