extern int fn_82CEAC20();
extern int fn_82CEAFA8();
extern int fn_82CFBBF0();
extern unsigned int lbl_8323AEC8;


extern char lbl_8204EF40[];
void fn_82E09EC0(unsigned __int64 param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = fn_82CEAC20();
  iVar2 = fn_82CFBBF0(uVar1,"hctAttributeDescription");
  if ((iVar2 == 0) &&
     (iVar2 = fn_82CEAFA8(param_1,lbl_8204EF40), *(unsigned int *)(iVar2 + 4) == 0)) {
    *(unsigned char **)(iVar2 + 4) = &lbl_8323AEC8;
  }
  return;
}

