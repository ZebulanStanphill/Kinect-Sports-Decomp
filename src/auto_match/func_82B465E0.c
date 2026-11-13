extern int fn_82AA66A8();
extern int fn_82B167E0();
extern int fn_82B16A18();


unsigned __int64 fn_82B465E0(unsigned __int64 param_1,int *param_2,unsigned __int64 *param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  uVar1 = param_2[1];
  uVar3 = uVar1 & 3;
  if ((uVar1 & 3) != 0) {
    if (uVar3 == 1) {
      if ((*(unsigned int *)(*param_2 + 8) & 0x3f80) == 16000) {
        uVar4 = fn_82B167E0(*param_2,uVar1 >> 2 & 0x3fff);
LAB_82b46668:
        *param_3 = uVar4;
        return 1;
      }
    }
    else if (uVar3 < 3) {
      puVar2 = (unsigned int *)*param_2;
      if (((*puVar2 & 0x18) == 0) && ((*(unsigned int *)(puVar2[3] + 8) & 0x3f80) == 16000)) {
        uVar4 = fn_82B16A18(puVar2,uVar1 >> 2 & 0x3fff);
        goto LAB_82b46668;
      }
    }
    else if (uVar3 != 3) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
  }
  return 0;
}

