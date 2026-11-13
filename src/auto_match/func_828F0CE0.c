extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8291AF98();
extern int fn_8291BDB8();
extern int fn_8291C2D8();


__int64 fn_828F0CE0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar3;
  __int64 lVar2;
  unsigned __int64 uVar4;
  
  uVar4 = 0;
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = 0;
  }
  if ((param_1 == (unsigned int *)0x0) || (param_2 == (unsigned int *)0x0)) {
    return -0x7789f794;
  }
  if ((((*param_1 & 0xffffff00) == 0x102a1100) ||
      (uVar1 = *param_1 & 0xffff0000, uVar1 == 0xfffe0000)) || (uVar1 == 0xffff0000)) {
    iVar3 = fn_8265C940(0x20,0x24810000);
    if (iVar3 != 0) {
      uVar4 = fn_8291BDB8();
    }
    if ((uVar4 & 0xffffffff) == 0) {
      return -0x7ff8fff2;
    }
    lVar2 = fn_8291C2D8(uVar4,param_1,0);
    if (lVar2 < 0) {
      fn_8291AF98(uVar4);
      fn_8265C990(uVar4,0x24810000);
      return lVar2;
    }
  }
  *param_2 = (int)uVar4;
  return 0;
}

