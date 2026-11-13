extern int fn_82681728();
extern int fn_826944C8();
extern int fn_826959C8();
extern int fn_826A7398();
extern int fn_82713EE8();
extern int fn_8271D378();


unsigned __int64 fn_8274C388(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned char *param_4)

{
  unsigned char bVar1;
  char cVar4;
  int iVar3;
  unsigned __int64 uVar2;
  __int64 lVar5;
  int aiStack_40;
  
  bVar1 = *(unsigned char *)(param_2 + 0x7c);
  fn_82681728(&aiStack_40,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,0xffffffff8201339c);
  cVar4 = fn_8271D378(&aiStack_40,param_3,-(6 < bVar1) & 1);
  lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_40 + 8) - 1;
  *(int *)(aiStack_40 + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8(aiStack_40);
  }
  if (cVar4 == '\0') {
    uVar2 = fn_82713EE8(param_1,param_2,param_3,param_4);
  }
  else {
    iVar3 = fn_826A7398(param_2);
    iVar3 = *(int *)(iVar3 + 0x114);
    fn_826959C8(param_4);
    *param_4 = 2;
    uVar2 = 1;
    param_4[4] = '\x01' - (iVar3 == 0);
  }
  return uVar2;
}

