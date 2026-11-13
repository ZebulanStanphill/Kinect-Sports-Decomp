extern unsigned int lbl_8216C698;


void fn_82FEF488(int param_1)

{
  unsigned int uVar1;
  
  if ((*(unsigned char *)(param_1 + 0xda) & 2) == 0) {
    *(unsigned char *)(param_1 + 0xd6) = *(unsigned char *)(param_1 + 0xda) & 2;
    uVar1 = lbl_8216C698;
    *(unsigned int *)(param_1 + 0x78) = lbl_8216C698;
    *(unsigned int *)(param_1 + 0x80) = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x82fef4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())**(unsigned int **)(param_1 + 4))(param_1 + 4,0,1);
  return;
}

