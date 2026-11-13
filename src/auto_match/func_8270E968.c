extern int fn_8270E160();
extern int fn_8270E520();
extern int fn_827843C0();


void fn_8270E968(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  
  uVar4 = 0;
  if (*(int *)(param_2 + 0x18) != 0) {
    do {
      lVar5 = (unsigned __int64)
              *(unsigned int *)(((unsigned int)((uVar4 & 0xffffffff) >> 4) & 0xffffffc) + *(int *)(param_2 + 0x24))
              + (uVar4 & 0x3f) * 0x18;
      iVar2 = (int)lVar5;
      if (-1 < *(int *)(iVar2 + 0xc)) {
        bVar1 = *(unsigned char *)(*(int *)(iVar2 + 0xc) * 0x28 + param_3);
        if (((bVar1 & 0x10) != 0) || ((bVar1 & 0x40) != 0)) {
          if (*(int *)(param_1 + 0x164) == 0) {
            puVar6 = (unsigned int *)(param_1 + 0x160);
            fn_8270E520(puVar6,puVar6,param_4);
            if ((param_4 & 0xffffffff) != 0) {
              fn_8270E160(*puVar6,param_4);
            }
          }
          lVar3 = (unsigned __int64)*(unsigned int *)(iVar2 + 0xc) * 0x28 + (unsigned __int64)*(unsigned int *)(param_1 + 0x160);
          fn_827843C0(lVar5,lVar3,lVar3 + 4,lVar3 + 8,lVar3 + 0xc);
        }
      }
      if (-1 < *(int *)(iVar2 + 0x10)) {
        bVar1 = *(unsigned char *)(*(int *)(iVar2 + 0x10) * 0x28 + param_3);
        if (((bVar1 & 0x10) != 0) || ((bVar1 & 0x40) != 0)) {
          if (*(int *)(param_1 + 0x164) == 0) {
            puVar6 = (unsigned int *)(param_1 + 0x160);
            fn_8270E520(puVar6,puVar6,param_4);
            if ((param_4 & 0xffffffff) != 0) {
              fn_8270E160(*puVar6,param_4);
            }
          }
          lVar3 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x10) * 0x28 + (unsigned __int64)*(unsigned int *)(param_1 + 0x160);
          fn_827843C0(lVar5,lVar3,lVar3 + 4,lVar3 + 8,lVar3 + 0xc);
        }
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_2 + 0x18));
  }
  return;
}

