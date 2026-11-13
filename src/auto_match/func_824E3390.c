extern int fn_82250A18();
extern int fn_82511700();
extern int fn_825117D8();
extern unsigned int lbl_832975B0;
extern unsigned int lbl_83297800;


void fn_824E3390(void)

{
  int iVar1;
  
  if (lbl_832975B0 == 0) {
    fn_82250A18();
  }
  iVar1 = lbl_83297800;
  if (lbl_83297800 == 0) {
    iVar1 = fn_825117D8();
  }
  if ((*(char *)(iVar1 + 8) != '\0') && (*(char *)(iVar1 + 10) == '\0')) {
    *(unsigned char *)(iVar1 + 9) = 0;
    fn_82511700(iVar1);
    *(unsigned char *)(iVar1 + 9) = 1;
  }
  return;
}

