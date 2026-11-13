#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_48;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a1;
extern unsigned int *auStack_b4;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_bc;
extern unsigned int *auStack_c0;
extern int fn_822315A0();
extern int fn_828C01A0();
extern int fn_828CCCC0();
extern int fn_828E0268();
extern int fn_828E2A80();
extern int fn_828E3078();
extern int fn_828E3380();
extern int fn_828E3958();
extern int fn_828E3BA0();
extern int fn_828E51D0();
extern int fn_828E5338();
extern unsigned int iStack_78;
extern unsigned int iStack_ac;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;


int * fn_828E53D8(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned char auStack_c0 [4];
  unsigned char auStack_bc [4];
  unsigned char auStack_b8 [4];
  unsigned char auStack_b4 [4];
  int (**pcStack_b0)();
  int iStack_ac;
  unsigned char auStack_a1 [17];
  int *piStack_90;
  unsigned char auStack_80 [8];
  int iStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned char auStack_60 [24];
  unsigned char auStack_48 [72];
  
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  fn_828E0268(auStack_bc);
  piVar2 = (int *)fn_828E3380(auStack_b4,(unsigned __int64)uVar1 + 8,auStack_bc);
  pcStack_b0 = (int (**)())0x0;
  iStack_ac = 0;
  fn_828CCCC0(&pcStack_b0,*(unsigned int *)(*piVar2 + 0x14),*(unsigned int *)(*piVar2 + 0x18),0);
  piVar2 = (int *)(*(int (**)())**(unsigned int **)(pcStack_b0 + 0x28))(pcStack_b0 + 0x28);
  if (iStack_ac != 0) {
    fn_822315A0(iStack_ac);
  }
  iStack_ac = 0;
  pcStack_b0 = fn_828E3BA0;
  iStack_78 = param_1;
  fn_828E3078(auStack_a1 + 1,0x828e3ba000000000,CONCAT44(param_1,uStack_74),
                  CONCAT44(uStack_70,uStack_6c),auStack_c0);
  uStack_70 = 0;
  fn_828C01A0(auStack_60,auStack_a1 + 1);
  fn_828C01A0(auStack_48,auStack_80);
  (**(int (***)())(*piVar2 + 4))(piVar2,auStack_60);
  fn_828E2A80(auStack_60);
  if (piStack_90 != (int *)0x0) {
    (**(int (***)())(*piStack_90 + 0xc))
              (piStack_90,
               (int)(auStack_a1 + -(int)piStack_90 + 1) -
               (int)(auStack_a1 +
                    (unsigned int)(auStack_a1 + -(int)piStack_90 + 1 == (unsigned char *)0x0) +
                    -(int)piStack_90));
  }
  fn_828E0268(auStack_b8,param_2);
  fn_828E3958(&pcStack_b0,param_1 + 0x18,auStack_b8,piVar2);
  iVar3 = fn_828E5338();
  fn_828E51D0(*(unsigned int *)(iVar3 + 8),param_1,piVar2);
  return piVar2;
}

