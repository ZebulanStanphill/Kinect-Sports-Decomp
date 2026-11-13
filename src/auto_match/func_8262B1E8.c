typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {float f[4];} __vector4;
extern int fn_825486D8();
extern void fn_82549048(int,int,int,__vector4,float);


void fn_8262B1E8(int param_1,unsigned int *param_2)

{
  if (*(char *)(param_1 + 0xe0d0) == '\0') {
    if (0 < *(int *)(param_1 + 0xe070)) {
      fn_82549048(param_1,*param_2,param_1+0xe080,*(__vector4 *)(param_1+0xe0b0),*(float *)(param_1+0xe0c0));
      fn_825486D8(param_1 + 0xc870,*(int *)(param_1 + 0xe070),param_1 + 0xe080,param_2,
                        *(unsigned int *)(param_1 + 0x50));
    }
    *(char *)(param_1 + 0xe0d0) = '\x01';
    *(unsigned int *)(param_1 + 0x40) = *(unsigned int *)(param_1 + 0x40) & 0xfffffffb;
  }
  return;
}

