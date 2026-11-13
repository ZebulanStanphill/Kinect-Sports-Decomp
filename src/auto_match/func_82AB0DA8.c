extern int fn_82A29A38();
extern int fn_82AB0AC8();


unsigned __int64 fn_82AB0DA8(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int * apuStack_40;
  
  uVar1 = *param_1;
  puVar4 = param_1 + 1;
  apuStack_40 = puVar4;
  if (0xffff01ff < uVar1) {
    fn_82A29A38();
  }
  do {
    uVar2 = *puVar4;
    if (uVar2 == 0xffff) {
      if ((int)puVar4 + (4 - (int)param_1) >> 2 == param_2) {
        return 0;
      }
      break;
    }
    uVar3 = uVar2 & 0xffff;
    if ((uVar2 & 0x80000000) != 0) break;
    if (uVar3 == 0xfffe) {
      apuStack_40 = puVar4 + (uVar2 >> 0x10 & 0x7fff) + 1;
    }
    else if ((uVar3 == 0xfffd) || ((uVar2 & 0xffff) == 0)) {
      apuStack_40 = puVar4 + 1;
    }
    else if (uVar3 == 0x51) {
      apuStack_40 = puVar4 + 6;
    }
    else {
      fn_82AB0AC8(uVar1,&apuStack_40,param_3);
    }
    puVar4 = apuStack_40;
  } while ((int)apuStack_40 - (int)param_1 >> 2 <= param_2);
  fn_82A29A38();
  return 2;
}

