#define CONCAT13(h,l) ((unsigned int)((((unsigned char)(h)) << 24) | ((unsigned int)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_82240070();
extern int fn_822EF100();
extern int fn_822EF4E0();
extern int fn_822EF668();
extern unsigned int uStack_44;


int * fn_822EC998(int *param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int *piVar2;
  unsigned int uVar3;
  char cVar6;
  int *piVar4;
  unsigned int *puVar5;
  int iVar7;
  unsigned int uVar8;
  unsigned int auStack_50 [2];
  int *piStack_48;
  unsigned int uStack_44;
  unsigned char auStack_40 [64];
  
  auStack_50[0] = 0;
  fn_822EF4E0(&piStack_48,param_1);
  piVar2 = piStack_48;
  cVar6 = fn_822EF668(piStack_48,0);
  if (cVar6 != '\0') {
    piVar1 = (int *)**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x30);
    piStack_48 = piVar1;
    fn_8223F508(piVar1);
    piVar4 = (int *)fn_822EF100(&piStack_48);
    if ((piVar1 != (int *)0x0) &&
       (puVar5 = (unsigned int *)fn_8223F5A0(piVar1), puVar5 != (unsigned int *)0x0)) {
      (**(int (***)())*puVar5)(puVar5,1);
    }
    uStack_44 = CONCAT13(1,(((unsigned __int64)(uStack_44) >> 8) & 0xFFFFFF));
    uVar3 = uStack_44;
    iVar7 = *(int *)(*param_1 + 4) + (int)param_1;
    piStack_48 = *(int **)(iVar7 + 0x38);
    uStack_44 = CONCAT13(piStack_48 == (int *)0x0,(((unsigned __int64)(uStack_44) >> 8) & 0xFFFFFF));
    (**(int (***)())(*piVar4 + 0x10))
              (auStack_40,piVar4,CONCAT44(piStack_48,uStack_44),uVar3,iVar7,auStack_50,param_2);
  }
  iVar7 = *(int *)(*param_1 + 4) + (int)param_1;
  if (auStack_50[0] != 0) {
    uVar8 = *(unsigned int *)(iVar7 + 0xc) | auStack_50[0];
    if (*(int *)(iVar7 + 0x38) == 0) {
      uVar8 = uVar8 | 4;
    }
    fn_82240070(iVar7,uVar8,0);
  }
  piVar2 = *(int **)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x38);
  if (piVar2 != (int *)0x0) {
    (**(int (***)())(*piVar2 + 8))();
  }
  return param_1;
}

