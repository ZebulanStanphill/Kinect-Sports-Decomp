extern int fn_82FF0250();
extern float lbl_82005CCC;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216CBEC;
extern unsigned int uStack_19;


void fn_82FF0330(double param_1,int param_2,int param_3,unsigned __int64 param_4,char param_5)

{
  unsigned char uStack_19;
  
  if (param_3 < 0x4000001) {
    if (param_3 != 0x4000000) {
      if ((param_3 == 0x1000000) || (param_3 == 0x2000000)) {
        if ((param_5 != '\0') && (*(unsigned int *)(param_2 + 0x4c) = 0, param_3 == 0x2000000)) {
          (*(int (**)())**(unsigned int **)(param_2 + -8))(param_2 + -8,0,1);
        }
        uStack_19 = (unsigned char)
                    (__int64)
                    ((float)(param_1 - (double)lbl_8216C698) * lbl_82005CCC * lbl_8216CBEC);
        *(unsigned char *)(param_2 + 0xca) = uStack_19;
      }
      goto LAB_82ff0458;
    }
  }
  else if (param_3 != 0x8000000) goto LAB_82ff0458;
  if ((param_5 != '\0') && (*(unsigned int *)(param_2 + 0x50) = 0, param_3 == 0x4000000)) {
    (**(int (***)())(*(int *)(param_2 + -0xc) + 0x10))(param_2 + -0xc,1);
  }
  uStack_19 = (unsigned char)
              (__int64)((float)(param_1 - (double)lbl_8216C698) * lbl_82005CCC * lbl_8216CBEC);
  *(unsigned char *)(param_2 + 0xcb) = uStack_19;
LAB_82ff0458:
  fn_82FF0250(param_2 + -0xc);
  return;
}

