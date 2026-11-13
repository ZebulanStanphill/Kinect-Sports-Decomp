#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_48;
extern int fn_8223EE28();
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_8223FD30();
extern int fn_8223FE60();
extern int fn_82240070();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


int * fn_82237920(int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned char auStack_48 [4];
  char cStack_44;
  char acStack_40 [16];
  
  uVar5 = 0;
  fn_8223FD30(auStack_48,param_1);
  if (cStack_44 != '\0') {
    uVar1 = **(unsigned int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x30);
    uStack_50 = uVar1;
    fn_8223F508(uVar1);
    piVar2 = (int *)fn_8223EE28(&uStack_50);
    if ((uVar1 != 0) &&
       (puVar3 = (unsigned int *)fn_8223F5A0(uVar1), puVar3 != (unsigned int *)0x0)) {
      (**(int (***)())*puVar3)(puVar3,1);
    }
    uVar1 = uStack_50;
    uStack_50 = uStack_50 & 0xffffff;
    iVar4 = *(int *)(*param_1 + 4);
    uStack_4c = *(unsigned int *)((int)param_1 + iVar4 + 0x38);
    (**(int (***)())(*piVar2 + 0x10))
              (acStack_40,piVar2,CONCAT44(uVar1,uStack_4c) & 0xffffffffffffff,(int)param_1 + iVar4,
               *(unsigned char *)((int)param_1 + iVar4 + 0x40),param_2);
    if (acStack_40[0] != '\0') {
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
  fn_8223FE60(auStack_48);
  return param_1;
}

