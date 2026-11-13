extern unsigned char fn_8288B460();
extern int fn_8288F1E8();
extern int fn_82890C30();


unsigned __int64 fn_828C6C48(int param_1)

{
  unsigned int uVar1;
  unsigned char cVar2;
  
  uVar1 = fn_8288F1E8(*(unsigned int *)(param_1 + 0x6c),param_1 + 0x80);
  if (uVar1 != 0) {
    cVar2 = fn_8288B460(uVar1,*(unsigned char *)(param_1 + 0xa0),0);
    if (cVar2 != '\0') {
      return 0;
    }
    fn_82890C30(uVar1,*(unsigned char *)(param_1 + 0x98),*(unsigned int *)(param_1 + 0x18),
                      *(unsigned char *)(param_1 + 0xa0),param_1 + 0x88);
  }
  return 1;
}

