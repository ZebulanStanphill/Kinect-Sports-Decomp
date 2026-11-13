extern int fn_8267B890();
extern int fn_82695FA0();
extern int fn_826972E0();
extern int fn_826A18A8();
extern int fn_826A1A28();
extern int fn_826A2CB0();
extern int fn_826C1BA0();


unsigned __int64
fn_826A3A28(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int iVar1;
  char cVar5;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char *puVar4;
  double dVar6;
  
  cVar5 = fn_826A18A8((unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x250,param_3,
                        -(6 < *(unsigned char *)(param_2 + 0x7c)) & 1);
  if (cVar5 == '\0') {
    uVar3 = fn_826A1A28(param_3);
    if (-1 < (__int64)uVar3) {
      if (*(int *)(param_1 + 0x28) <= (int)uVar3) {
        fn_826A2CB0(param_1 + -0x10,uVar3 + 1);
      }
      iVar1 = (int)((uVar3 & 0x3fffffff) << 2);
      if (*(int *)(iVar1 + *(int *)(param_1 + 0x24)) == 0) {
        puVar4 = (unsigned char *)
                 fn_8267B890(*(unsigned int *)(*(int *)(param_2 + 0x78) + 0x288),0x10,0);
        if (puVar4 == (unsigned char *)0x0) {
          puVar4 = (unsigned char *)0x0;
        }
        else {
          *puVar4 = 0;
        }
        *(unsigned char **)(iVar1 + *(int *)(param_1 + 0x24)) = puVar4;
      }
      fn_82695FA0(*(unsigned int *)(iVar1 + *(int *)(param_1 + 0x24)),param_4);
      return 1;
    }
  }
  else {
    dVar6 = (double)fn_826972E0(param_4,0);
    fn_826A2CB0(param_1 + -0x10,0xffffffffU - ((int)dVar6 >> 0x1f) & (int)dVar6);
  }
  uVar2 = fn_826C1BA0(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

