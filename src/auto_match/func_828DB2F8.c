extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_828ACCE8();
extern int fn_828BE158();
extern int fn_828D2DB8();
extern int fn_828D2EE0();
extern int fn_828D2F28();
extern int fn_828DB208();
extern int fn_828DD9D8();
extern unsigned int uStack_43;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_828DB2F8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  char cVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar7;
  int aiStack_50;
  unsigned int uStack_48;
  unsigned char uStack_44;
  unsigned char uStack_43;
  
  cVar6 = fn_828ACCE8(*(unsigned int *)(param_1 + 8));
  if (cVar6 == '\0') {
    fn_828D2F28();
  }
  else {
    uVar3 = fn_828D2EE0(param_1);
    if (0x5dc < uVar3) {
      iVar1 = *(int *)(param_1 + 8);
      aiStack_50 = **(int **)(iVar1 + 0x210);
      uVar7 = *(unsigned __int64 *)(*(int *)(iVar1 + 0x8c) + 0x50);
      if (aiStack_50 != *(int *)(iVar1 + 0x210)) {
        do {
          uVar2 = *(unsigned int *)(aiStack_50 + 0x10);
          uVar3 = fn_8265C9E0(0x98);
          if ((uVar3 & 0xffffffff) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = fn_828DD9D8(uVar3,uVar7);
          }
          fn_82886518(uVar4,0xffffffffffffffff,0xffffffffffffffff);
          uVar5 = fn_82897BD0(uVar2);
          fn_828BE158(*(unsigned int *)(param_1 + 8),uVar4,uVar5,0);
          uStack_48 = fn_823AA970(uVar2);
          uStack_44 = 0;
          uStack_43 = 0;
          fn_828DB208(param_1 + 0x18,&uStack_48);
          fn_82381BC0(&aiStack_50);
        } while (aiStack_50 != *(int *)(*(int *)(param_1 + 8) + 0x210));
      }
      fn_828D2DB8(param_1,5);
    }
  }
  return;
}

