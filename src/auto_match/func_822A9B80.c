extern int fn_828EA5F8();
extern int fn_828EA600();
extern int fn_828EA608();
extern unsigned int lbl_83265988;


int fn_822A9B80(void)

{
  int iVar1;
  unsigned char cVar2;
  
  iVar1 = lbl_83265988;
  if ((((lbl_83265988 != 0) && (cVar2 = fn_828EA608(lbl_83265988), cVar2 != '\0')) &&
      (cVar2 = fn_828EA5F8(iVar1), cVar2 != '\0')) && (cVar2 = fn_828EA600(iVar1), cVar2 == '\0'))
  {
    return iVar1;
  }
  return 0;
}

