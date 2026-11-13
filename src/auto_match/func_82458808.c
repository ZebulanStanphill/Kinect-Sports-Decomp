extern unsigned int *auStack_58;
extern unsigned int *auStack_90;
extern int fn_82458598();
extern int fn_82F691F0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_82458808(int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int auStack_90 [4];
  unsigned __int64 uStack_80;
  unsigned __int64 uStack_78;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned char auStack_58 [88];
  
  if (param_1 != param_1 + 4) {
    iVar1 = *param_1;
    *(unsigned int *)(iVar1 + 4) = ltcg_pool_0_0f;
    fn_82458598(iVar1 + 8);
    fn_82458598(iVar1 + 0x18);
    puVar2 = auStack_90;
    if ((unsigned int)(*(int *)(iVar1 + 0x4c) + *(int *)(iVar1 + 0x48)) <= *(unsigned int *)(iVar1 + 200)) {
      puVar2 = (unsigned int *)(iVar1 + 200);
    }
    auStack_90[0] = *(unsigned int *)(iVar1 + 0x34);
    *(unsigned int *)(iVar1 + 200) = *puVar2;
    puVar2 = auStack_90;
    if (auStack_90[0] <= *(unsigned int *)(iVar1 + 0xcc)) {
      puVar2 = (unsigned int *)(iVar1 + 0xcc);
    }
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    *(unsigned int *)(iVar1 + 0xcc) = *puVar2;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_58,0,0x28);
  }
  return;
}

