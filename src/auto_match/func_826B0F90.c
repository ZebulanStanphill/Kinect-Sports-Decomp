extern int fn_826824B0();
extern int fn_826A18A8();
extern int fn_826AF698();
extern int fn_826BF098();


unsigned __int64 fn_826B0F90(int param_1,unsigned __int64 param_2)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  char cVar5;
  unsigned __int64 uVar6;
  
  if ((*(int *)(param_1 + 0xcc) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0xcc) * 4 + *(int *)(param_1 + 200) + -4), iVar2 != 0)) {
    *(unsigned int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1U & 0x8fffffff;
    do {
      if (*(unsigned char *)(param_1 + 0x7c) < 7) {
        uVar6 = fn_826AF698(iVar2 + 0x10,param_2);
      }
      else {
        lVar4 = fn_826BF098();
        uVar6 = -(unsigned __int64)(lVar4 != 0) & lVar4 + 8U;
      }
      if ((uVar6 & 0xffffffff) != 0) {
        fn_826824B0(iVar2);
        return uVar6;
      }
      bVar1 = *(unsigned char *)(param_1 + 0x7c);
      if (((4 < bVar1) &&
          (cVar5 = fn_826A18A8((unsigned __int64)*(unsigned int *)(param_1 + 0x78) + 0x110,param_2,
                                     -(6 < bVar1) & 1), cVar5 != '\0')) ||
         ((5 < bVar1 &&
          (cVar5 = fn_826A18A8((unsigned __int64)*(unsigned int *)(param_1 + 0x78) + 0xf8,param_2,
                                     -(6 < *(unsigned char *)(param_1 + 0x7c)) & 1), cVar5 != '\0')))) {
        fn_826824B0(iVar2);
        return 0;
      }
      iVar3 = *(int *)(iVar2 + 0x14);
      if (iVar3 != 0) {
        *(unsigned int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1U & 0x8fffffff;
      }
      fn_826824B0(iVar2);
      iVar2 = *(int *)(iVar2 + 0x14);
    } while (iVar2 != 0);
  }
  return 0;
}

