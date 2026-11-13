extern unsigned int *auStack_60;
extern int fn_82DABDE8();
extern int fn_82DAD368();
extern int fn_82DAF0B0();
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;


void fn_82DABF58(int param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned short auStack_60 [2];
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_4c;
  int *piStack_48;
  
  iVar4 = *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x5c);
  bVar1 = *(unsigned char *)(*(int *)(param_1 + 0x20) + ((unsigned int)param_2 & 0xffff));
  if (bVar1 == 0xff) {
    iStack_5c = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x3c);
    iStack_5c = (unsigned int)*(unsigned char *)(iVar3 + 10) * (int)(short)(unsigned short)bVar1 +
                (unsigned int)*(unsigned short *)(iVar3 + 6) * 0x20 + iVar3 + 0x30;
  }
  auStack_60[0] = (unsigned short)param_2;
  iStack_58 = iVar4;
  iStack_54 = iVar2;
  iStack_4c = param_1;
  piStack_48 = param_3;
  fn_82DAF0B0(*(unsigned int *)(param_1 + 0xc),auStack_60);
  if (*(short *)(iVar4 + 0x204) != 0) {
    fn_82DAD368(iVar4,auStack_60);
  }
  if (*(short *)(iVar2 + 0x204) != 0) {
    fn_82DAD368(iVar2,auStack_60);
  }
  iVar4 = fn_82DABDE8(param_1 + 0x14,param_3,param_2);
  if (iVar4 == 0) {
    (**(int (***)())(*param_3 + 0x10))(param_3,param_1 + 0x44);
  }
  return;
}

