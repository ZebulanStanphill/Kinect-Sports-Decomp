#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_40;
extern int fn_8223EE28();
extern int fn_8223F560();
extern int fn_8223F5A0();
extern int fn_8223FD30();
extern int fn_8223FE60();
extern int fn_82240070();
extern unsigned int uStack_44;
extern unsigned int uStack_48;


int * fn_828BB0D0(int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  int aiStack_50 [2];
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char auStack_40 [4];
  char cStack_3c;
  char acStack_38 [24];
  
  uVar5 = 0;
  fn_8223FD30(auStack_40,param_1);
  if (cStack_3c != '\0') {
    fn_8223F560(aiStack_50,*(int *)(*param_1 + 4) + (int)param_1);
    piVar2 = (int *)fn_8223EE28();
    if ((aiStack_50[0] != 0) &&
       (puVar3 = (unsigned int *)fn_8223F5A0(aiStack_50[0]), puVar3 != (unsigned int *)0x0)) {
      (**(int (***)())*puVar3)(puVar3,1);
    }
    uVar1 = uStack_48;
    uStack_48 = uStack_48 & 0xffffff;
    iVar4 = *(int *)(*param_1 + 4);
    uStack_44 = *(unsigned int *)((int)param_1 + iVar4 + 0x38);
    (**(int (***)())(*piVar2 + 0x14))
              (acStack_38,piVar2,CONCAT44(uVar1,uStack_44) & 0xffffffffffffff,(int)param_1 + iVar4,
               *(unsigned char *)((int)param_1 + iVar4 + 0x40),param_2);
    if (acStack_38[0] != '\0') {
      uVar5 = 4;
    }
  }
  iVar4 = *(int *)(*param_1 + 4) + (int)param_1;
  if (uVar5 != 0) {
    uVar5 = *(unsigned int *)(iVar4 + 0xc) | uVar5;
    if (*(int *)(iVar4 + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    fn_82240070(iVar4,uVar5,0);
  }
  fn_8223FE60(auStack_40);
  return param_1;
}

