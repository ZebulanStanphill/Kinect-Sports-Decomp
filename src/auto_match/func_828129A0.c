extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82A1E0C0();
extern int sprintf();
extern int fn_82F672D8();
extern int fn_82F68CC0();


void fn_828129A0(int param_1,char *param_2,unsigned int param_3)

{
  char cVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  char *pcVar7;
  
  iVar2 = *(int *)(param_1 + 0xcc);
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xd0) + 1;
  lVar3 = uVar6 * 0x30;
  if (0x5555555 < (uVar6 & 0xffffffff)) {
    lVar3 = -1;
  }
  uVar4 = fn_8265CA60(lVar3);
  *(int *)(param_1 + 0xcc) = (int)uVar4;
  if (iVar2 != 0) {
    fn_82F68CC0(uVar4,iVar2,(unsigned __int64)*(unsigned int *)(param_1 + 0xd0) * 0x30);
    fn_8265CAA0(iVar2);
  }
  pcVar7 = param_2;
  if (param_2 != (char *)0x0) {
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if ((int)pcVar7 - (int)param_2 != 1) {
      fn_82F672D8((unsigned __int64)*(unsigned int *)(param_1 + 0xd0) * 0x30 +
                   (unsigned __int64)*(unsigned int *)(param_1 + 0xcc) + 0xc,param_2,0x1f);
      goto LAB_82812a74;
    }
  }
  sprintf((unsigned __int64)*(unsigned int *)(param_1 + 0xd0) * 0x30 +
                    (unsigned __int64)*(unsigned int *)(param_1 + 0xcc) + 0xc,0xffffffff8201e068);
LAB_82812a74:
  *(unsigned int *)(*(int *)(param_1 + 0xd0) * 0x30 + *(int *)(param_1 + 0xcc) + 8) = param_3;
  *(unsigned char *)(*(int *)(param_1 + 0xd0) * 0x30 + *(int *)(param_1 + 0xcc) + 0x2c) = 0;
  uVar5 = fn_82A1E0C0(0,0,0xffffffff82812488,param_1,4,
                       (unsigned __int64)*(unsigned int *)(param_1 + 0xd0) * 0x30 +
                       (unsigned __int64)*(unsigned int *)(param_1 + 0xcc));
  *(unsigned int *)(*(int *)(param_1 + 0xd0) * 0x30 + *(int *)(param_1 + 0xcc) + 4) = uVar5;
  *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
  return;
}

