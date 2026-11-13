extern unsigned int *auStack_90;
extern int fn_8265C940();
extern int fn_82A1EFC0();
extern int fn_82BD7080();
extern int fn_82BD81E0();
extern float lbl_82021544;


__int64 fn_82BD7230(unsigned int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *in_r7;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  unsigned char auStack_90 [128];
  
  iVar1 = fn_8265C940(0x1e0,0x618a800b);
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 0x9c) = param_1;
    *(unsigned int *)(iVar1 + 0x50) = 0;
    *(unsigned int *)(iVar1 + 0xd0) = 0x26404;
    *(float *)(iVar1 + 0xc4) = (float)*(unsigned char *)(iVar1 + 0xd2) * lbl_82021544;
    iVar2 = XamUserReadProfileSettings
                      (0xfffffffffffe07d1,0xff,0,0,3,0xffffffff83171df4,(unsigned int *)(iVar1 + 0xc0)
                       ,0);
    if (iVar2 != 0x7a) {
      lVar5 = -0x7fffbffb;
      goto LAB_82bd75a4;
    }
    iVar2 = fn_8265C940(*(unsigned int *)(iVar1 + 0xc0),0x608a2002);
    *(int *)(iVar1 + 0xbc) = iVar2;
    if (iVar2 != 0) {
      lVar5 = fn_82BD81E0(0x100,0x20,5,0,(int *)(iVar1 + 0x3c));
      if (-1 < lVar5) {
        iVar2 = 0;
        lVar5 = 5;
        do {
          iVar3 = *(int *)(iVar1 + 0x3c);
          iVar3 = *(int *)(iVar3 + 8) * iVar2 + *(int *)(iVar3 + 4);
          iVar4 = iVar3 + 0x18;
          *(int *)(iVar3 + 0x18) = iVar3;
          *(unsigned int *)(iVar3 + 0x1c) = 0;
          if (*(int *)(iVar1 + 0x44) == 0) {
            *(int *)(iVar1 + 0x40) = iVar4;
          }
          else {
            *(int *)(*(int *)(iVar1 + 0x44) + 4) = iVar4;
          }
          *(int *)(iVar1 + 0x44) = iVar4;
          iVar2 = iVar2 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
                    /* WARNING: Subroutine does not return */
        fn_82A1EFC0(auStack_90,0,0x18);
      }
      goto LAB_82bd75a4;
    }
  }
  lVar5 = -0x7ff8fff2;
LAB_82bd75a4:
  fn_82BD7080(iVar1);
  *in_r7 = 0;
  return lVar5;
}

