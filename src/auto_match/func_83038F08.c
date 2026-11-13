extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FAB9C0();
extern int fn_82FEF600();
extern int fn_82FEFC98();
extern int fn_82FEFCC8();
extern int fn_82FF16A8();
extern int fn_8300F998();
extern int fn_8300FA30();
extern int fn_8300FCF0();
extern int fn_83010868();
extern int fn_8302BD60();
extern int fn_83032D88(unsigned);
extern int fn_83032FB8();
extern int fn_83032FD0();
extern int fn_83032FF0();
extern int fn_83033018();
extern int fn_83033070();
extern int fn_83033110();
extern int fn_83033360();
extern int fn_830337B0();
extern float lbl_8201FBB8;
extern float lbl_821AAD20;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642E4;


void fn_83038F08(int *param_1,unsigned int param_2)

{
  unsigned char bVar1;
  unsigned int uVar2;
  int *piVar4;
  int *piVar5;
  unsigned int uVar3;
  unsigned int *puVar6;
  int iVar7;
  unsigned int uVar8;
  
  fn_82FEFC98();
  fn_82FEF600(param_1);
  (*(int (**)())(*param_1 + 0x3c))(param_1,0);
  if (((unsigned)param_1[0x77] == 0) && (lbl_832642E4 != 0)) {
    fn_8300F998(lbl_832642E4,param_1);
  }
  if ((unsigned)param_1[0x77] == 0) goto LAB_8303921c;
  if (((*(unsigned char *)((int)param_1 + 0xd9) & 8) != 0) ||
     ((((*(unsigned char *)((int)param_1 + 0xd9) & 1) != 0 &&
       ((param_1[0x78] >> 0x1c == 1 || (param_1[0x78] >> 0x1c == 2)))) ||
      (piVar4 = (int *)fn_82FAB9C0(lbl_832642E0 + 4,param_1[0x77]), piVar4 == (int *)0x0))))
  goto LAB_8303921c;
  piVar5 = (int *)fn_83033360(0x5011,0,param_1 + 0x62);
  if (piVar5 != (int *)0x0) {
    piVar5[0x27] = param_1[0x4c];
    fn_83032FB8(piVar5,param_1 + 99);
    (*(int (**)())(*piVar5 + 0x14))(piVar5,piVar4[3]);
    fn_83032FD0(piVar5,param_1[0x75]);
    uVar3 = fn_82FA5060(lbl_831BC768,0x38);
    if (((uVar3 & 0xffffffff) != 0) &&
       (puVar6 = (unsigned int *)fn_8300FA30(uVar3,param_1[0x1c]), puVar6 != (unsigned int *)0x0)) {
      iVar7 = fn_83033070(piVar5,param_1[0x16],*(unsigned char *)(param_1 + 0x18) >> 7,puVar6);
      if ((iVar7 == 1) &&
         (iVar7 = fn_83033110(piVar5,param_1[0x17],*(unsigned char *)(param_1 + 0x18) >> 6 & 1,puVar6),
         iVar7 == 1)) {
        fn_830337B0(piVar5,param_1 + 0x5f);
        if (((*(unsigned char *)((int)param_1 + 0xd9) & 4) == 0) && ((param_2 & 0xff) == 0)) {
          if (param_1[0x78] >> 0x1c == 3) {
            uVar8 = (unsigned int)(int)(*(float *)(param_1+0x76) * lbl_8201FBB8);
            goto LAB_83039138;
          }
          if (param_1[0x78] >> 0x1c == 4) {
            fn_83033018(piVar5,param_1[0x19]);
          }
        }
        else {
          fn_83032FF0(piVar5,*(unsigned char *)(param_1 + 0x79) >> 7);
          uVar8 = (unsigned int)(int)(*(float *)(param_1+0x76) * lbl_8201FBB8);
          if (((int)(param_1[0x78] & 0xf0000000U) != 0x30000000) || (uVar8 < 0x2800)) {
            uVar8 = 0x2800;
          }
LAB_83039138:
          fn_8302BD60(piVar5,uVar8,0,0);
        }
        puVar6[2] = piVar5;
        { struct Copy_83038F08 { unsigned __int64 q[3]; }; *(struct Copy_83038F08 *)(puVar6+6) = *(struct Copy_83038F08 *)(param_1+0x10); }
        fn_8300FCF0(lbl_832642E4,puVar6);
        if (((*(float *)(param_1+0x76) != 0.0f) && ((unsigned)param_1[0x4c] != 0)) && ((unsigned)param_1[0x17] == 0)
           ) {
          fn_83010868(lbl_832642E4,puVar6);
        }
      }
      else {
        uVar2 = lbl_831BC768;
        (*(int (**)())*puVar6)(puVar6,0);
        fn_82FA5190(uVar2,puVar6);
      }
    }
    (*(int (**)())(*piVar5 + 8))(piVar5);
  }
  if ((*(unsigned char *)((int)param_1 + 0xd9) & 0x20) != 0) {
    *(unsigned char *)((int)param_1 + 0xd9) = *(unsigned char *)((int)param_1 + 0xd9) | 0x10;
  }
  (*(int (**)())(*piVar4 + 8))(piVar4);
LAB_8303921c:
  iVar7 = param_1[0x62];
  param_1[0x62] = 0;
  if ((unsigned)iVar7 != 0) {
    fn_83032D88(iVar7);
  }
  bVar1 = *(unsigned char *)((int)param_1 + 0xd9);
  if (((bVar1 & 0x20) != 0) && ((bVar1 & 0x10) != 0)) {
    *(unsigned char *)((int)param_1 + 0xd9) = bVar1 & 0xdf;
  }
  fn_82FEFCC8(param_1);
  fn_82FF16A8(param_1,param_2);
  return;
}

