extern unsigned int *auStack_20;
extern int fn_825200A8();
extern int fn_8265BF48();
extern unsigned int lbl_83297700;
extern unsigned int lbl_83297B8C;


void fn_8242E3E0(int param_1)

{
  unsigned int auStack_20 [2];
  
  if ((lbl_83297B8C & 1) == 0) {
    lbl_83297B8C = lbl_83297B8C | 1;
    lbl_83297700 = fn_8265BF48("AMID_BRS_script_athletics_main_e3hurdles_default_gbox",0);
  }
  auStack_20[0] = **(unsigned int **)(*(int *)(param_1 + 0x174) + 0x9c);
  fn_825200A8(auStack_20,&lbl_83297700);
  return;
}

