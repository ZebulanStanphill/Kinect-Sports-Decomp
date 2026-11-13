extern unsigned int fStack_44;
extern int fn_82FF5400();
extern int fn_82FF59A8();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642F4;
extern unsigned int uStack_38;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


unsigned __int64 fn_82FA8948(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  float fStack_44;
  int iStack_40;
  int iStack_3c;
  unsigned char uStack_38;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (0 < *param_2) {
      iStack_3c = param_2[1];
      puVar3 = (unsigned int *)(param_1 + 0x18);
      uStack_4c = 0x1000000;
      uStack_38 = 1;
      uStack_48 = lbl_8216C698;
      fStack_44 = lbl_821AAD20;
      puStack_50 = puVar3;
      iStack_40 = *param_2;
      iVar2 = fn_82FF59A8(lbl_832642F4,&puStack_50,1,0);
      *(int *)(param_1 + 0x1c) = iVar2;
      *(unsigned char *)(param_1 + 0x24) = *(unsigned char *)(param_1 + 0x24) | 0x80;
      if (iVar2 == 0) {
        (**(int (***)())*puVar3)((double)fStack_44,puVar3,uStack_4c);
      }
      else {
        uVar1 = param_2[2];
        if (uVar1 != 0) {
          *(float *)(iVar2 + 0x18) =
               (float)(__int64)
                      (int)(((int)uVar1 >> 10) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 0x3ff) != 0)) +
               *(float *)(iVar2 + 0x18);
        }
      }
    }
  }
  else {
    fn_82FF5400((double)lbl_821AAD20,lbl_832642F4,*(int *)(param_1 + 0x1c),0x1000000,param_4,
                      *param_2,param_2[1],0);
  }
  (*(int (**)())**(unsigned int **)(param_1 + 4))(param_1 + 4,param_3);
  return 1;
}

