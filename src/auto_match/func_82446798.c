extern unsigned int *auStack_48;
extern int fn_82429898();
extern int fn_828ABF58();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828EA130();
extern unsigned int lbl_821B9B78;
extern unsigned int uStack_4c;


void fn_82446798(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int aiStack_60 [4];
  unsigned char **ppuStack_50;
  unsigned int uStack_4c;
  unsigned char auStack_48 [72];
  
  uStack_4c = 0;
  ppuStack_50 = &lbl_821B9B78;
  fn_828ABF58(auStack_48,0,0,4);
  fn_82429898(&ppuStack_50,param_2,aiStack_60);
  uVar3 = 0;
  if (aiStack_60[0] == 0) {
    iVar1 = fn_828E9DA8(param_2);
    iVar2 = fn_828E9D90(param_2);
    if (iVar1 - iVar2 < 0x20) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_828EA130(param_2,0x20);
    }
  }
  if (param_3 != 0) {
    *(int *)(param_3 + 8) = aiStack_60[0];
    *(unsigned int *)(param_3 + 0xc) = uVar3;
  }
  return;
}

