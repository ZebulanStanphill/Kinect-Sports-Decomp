extern int fn_82297D98();
extern int fn_82663848();
extern int fn_826638E8();
extern int fn_82663A00();
extern int fn_82663AF8();
extern int fn_82663B70();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;


unsigned __int64 fn_82663788(unsigned int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  char cVar5;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned int uStack00000024;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  cVar5 = fn_82663AF8(param_1,param_2);
  uVar1 = uStack00000024;
  if (cVar5 == '\0') {
    cVar5 = fn_82663A00(uStack00000014,uStack00000024,0);
    uVar1 = uStack00000024;
    iVar4 = iStack0000001c;
    if (cVar5 != '\0') {
      uVar3 = fn_82663B70(uStack00000014);
      fn_82297D98(uVar3,iVar4,uVar1);
      fn_82663848(uStack00000014,uStack00000024);
    }
    uVar2 = (unsigned __int64)uStack00000014;
  }
  else {
    iVar4 = fn_82663B70(uStack00000014);
    uVar2 = fn_826638E8(uStack00000014,uStack00000014,iStack0000001c - iVar4 >> 1,uVar1);
  }
  return uVar2;
}

