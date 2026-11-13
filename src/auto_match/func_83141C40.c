extern int fn_8223F5A0(lbl_832632EC);
extern unsigned int lbl_832632EC;


void fn_83141C40(void)

{
  unsigned int *puVar1;
  
  if ((lbl_832632EC != 0) &&
     (puVar1 = (unsigned int *)fn_8223F5A0(lbl_832632EC), puVar1 != (unsigned int *)0x0)) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  return;
}

