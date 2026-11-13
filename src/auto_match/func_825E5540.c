extern unsigned int *auStack_38;
extern int fn_825E67C8();
extern int fn_825E68F0();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_825E5540(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int auStack_38 [14];
  
  uVar4 = 0;
  puVar3 = (unsigned int *)(param_1 + 0x4a4);
  do {
    iVar2 = fn_825E67C8(*puVar3,param_2,param_3);
    if (iVar2 != 0) break;
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
  } while ((int)uVar4 < 3);
  if ((int)uVar4 < 3) {
    fn_825E68F0(*(unsigned int *)((uVar4 + 0x129) * 4 + param_1),param_3,&uStack_40,&uStack_3c,
                    auStack_38);
    uVar1 = ((((unsigned __int64)uVar4 & 0xff) << 8 | (unsigned __int64)uStack_40 & 0xffffffff000000ff) << 8 |
            (unsigned __int64)uStack_3c & 0xffffffff000000ff) << 8 |
            (unsigned __int64)auStack_38[0] & 0xffffffff000000ff;
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}

