extern unsigned int *auStack_34;
extern unsigned int *auStack_38;
extern int fn_8226D318();
extern int fn_8263BDD8();
extern int fn_8263C7F0();
extern int fn_8263C910();
extern int fn_82F691F0();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_825668D0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned char auStack_38 [4];
  unsigned char auStack_34 [4];
  int aiStack_30 [6];
  
  aiStack_30[0] = 0;
  aiStack_30[1] = 0;
  aiStack_30[2] = 0;
  aiStack_30[3] = 0;
  if (*(int *)(param_1 + 0x208) == 0) {
    uVar1 = fn_8263C910(0x140,0xb4,0x18280186,2,aiStack_30);
    *(unsigned int *)(param_1 + 0x208) = uVar1;
  }
  if (*(int *)(param_1 + 0x20c) == 0) {
    iVar2 = fn_8226D318(0x140,0xb4,0x18280186,2);
    aiStack_30[0] = iVar2 + aiStack_30[0];
    uVar1 = fn_8263C910(0x140,0xb4,0x1a220197,2,aiStack_30);
    *(unsigned int *)(param_1 + 0x20c) = uVar1;
  }
  if (*(int *)(param_1 + 0x204) == 0) {
    uVar1 = fn_8263C7F0(0x140,0xb4,1,1,0,0x18280186,0,3);
    *(unsigned int *)(param_1 + 0x204) = uVar1;
    fn_8263BDD8(uVar1,0,0,0,&uStack_3c,&uStack_40,auStack_34,auStack_38);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uStack_3c,0,(unsigned __int64)uStack_40 * 0xb4);
  }
  return;
}

