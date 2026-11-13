extern int fn_82ABE250();
extern int fn_82AD6090();
extern int fn_82B24828();
extern int fn_82B4B410();
extern int fn_82B82D28();
extern unsigned int iStack_40;
extern unsigned int uStack_3c;


void fn_82B248C0(unsigned __int64 param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned int *param_5,
                  unsigned int *param_6,unsigned __int64 param_7)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  int iStack_40;
  unsigned int uStack_3c;
  int aiStack_38;
  
  fn_82B82D28(*(unsigned int *)((param_3 + 0xb) * 4 + param_2),param_4,&iStack_40,&uStack_3c,
                    &aiStack_38,0,param_2,0);
  if ((aiStack_38 != 0) || ((*(unsigned int *)(iStack_40 + 8) & 0x3f80) != 0x100)) {
    if ((param_6[1] & 1) == 0) {
      uVar2 = *param_6 & 0xfffffffe;
      iVar4 = uVar2 - 4;
      if ((iVar4 != 0) && (*(int *)(uVar2 + 4) + 1U <= *(unsigned int *)(uVar2 + 8))) goto LAB_82b24a14;
    }
    iVar4 = fn_82B4B410(param_6,1);
LAB_82b24a14:
    iVar1 = *(int *)(iVar4 + 8) * 0xc + iVar4;
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    *(int *)(iVar1 + 0x10) = iStack_40;
    *(unsigned int *)(iVar1 + 0x14) = uStack_3c;
    *(int *)(iVar1 + 0x18) = aiStack_38;
    return;
  }
  puVar3 = (unsigned int *)fn_82ABE250(param_1,8,0x33);
  puVar3[1] = (unsigned int)puVar3 | 1;
  *puVar3 = (unsigned int)(puVar3 + 1) | 1;
  if ((param_5[1] & 1) == 0) {
    uVar2 = *param_5 & 0xfffffffe;
    iVar4 = uVar2 - 4;
    if ((iVar4 != 0) && (*(int *)(uVar2 + 4) + 1U <= *(unsigned int *)(uVar2 + 8))) goto LAB_82b24994;
  }
  iVar4 = fn_82AD6090(param_5,1);
LAB_82b24994:
  iVar1 = *(int *)(iVar4 + 8);
  *(int *)(iVar4 + 8) = iVar1 + 1;
  *(unsigned int **)((iVar1 + 4) * 4 + iVar4) = puVar3;
  fn_82B24828(param_1,puVar3,iStack_40,uStack_3c,param_2,param_7);
  return;
}

