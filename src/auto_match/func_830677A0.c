extern unsigned int *auStack_b0;
extern int fn_82F66768();
extern int fn_83065B90();
extern int fn_83065BA8();
extern int fn_830676A8();
extern unsigned int stack0x00000028;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_830677A0(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int iVar4;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned char auStack_b0 [176];
  
  *(int *)(param_1 + 0x14) = param_2;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 0x18) = param_2 / *(int *)(param_1 + 0x10);
  *(unsigned int *)(param_1 + 0x20) = 0;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  if (*(int *)(param_1 + 4) != 0) {
    fn_830676A8();
  }
  iVar1 = fn_82F66768(auStack_b0,0x80,param_3,&stack0x00000028);
  if (iVar1 < *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0xc) - iVar1;
    puVar2 = (unsigned char *)fn_83065B90(iVar1 + 1);
    puVar3 = puVar2;
    if (0 < iVar1) {
      puVar3 = puVar2 + -1;
      for (iVar4 = iVar1; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar3 = puVar3 + 1;
        *puVar3 = 0x2e;
      }
      puVar3 = puVar2 + iVar1;
    }
    *puVar3 = 0;
    fn_830676A8(param_1,auStack_b0);
    fn_830676A8(param_1,puVar2);
    fn_83065BA8(puVar2);
  }
  else {
    fn_830676A8(param_1,auStack_b0);
  }
  return;
}

