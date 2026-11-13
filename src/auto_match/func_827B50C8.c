extern unsigned int *auStack_50;
extern int fn_827B4FF0();
extern int memcpy();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_64;
extern unsigned int iStack_68;


void fn_827B50C8(int param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  __int64 lVar2;
  int aiStack_70;
  int iStack_68;
  int iStack_64;
  unsigned char auStack_50 [4];
  int iStack_4c;
  int iStack_44;

  lVar2 = (unsigned __int64)
          *(unsigned int *)(((unsigned int)((param_2 & 0xffffffff) >> 6) & 0x3fffffc) + *(int *)(param_1 + 0x50)) +
          (param_2 & 0xff) * 0x1c;
  memcpy(&aiStack_70,lVar2,0x1c);
  memcpy(auStack_50,lVar2,0x1c);
  iStack_64 = param_3[1];
  aiStack_70 = *param_3 + aiStack_70;
  iStack_68 = iStack_68 - *param_3;
  iStack_4c = iStack_64 + iStack_4c;
  iStack_44 = iStack_44 - iStack_64;
  fn_827B4FF0(param_1 + 0x44,&aiStack_70);
  fn_827B4FF0(param_1 + 0x44,auStack_50);
  iVar1 = (int)lVar2;
  *(int *)(iVar1 + 8) = *param_3;
  *(int *)(iVar1 + 0xc) = param_3[1];
  *(int *)(iVar1 + 0x10) = param_3[2];
  *(int *)(iVar1 + 0x14) = *(int *)(param_1 + 0x44) + -2;
  *(int *)(iVar1 + 0x18) = *(int *)(param_1 + 0x44) + -1;
  return;
}
