static __forceinline void flags_825E4B68(unsigned __int64 *p,unsigned __int64 f){*p|=f;}
typedef struct Flags_825E4B68 {unsigned __int64 bits;} Flags_825E4B68;
extern int fn_825313D8();
extern int fn_82544918();
extern int fn_82544F40();
extern int fn_82545098();
extern int fn_82637B30();
extern int lbl_832700EC;
extern float lbl_821954B0[];
extern unsigned int lbl_8320A898;


void fn_825E4B68(void)

{
  float uVar1; unsigned *global=&lbl_8320A898;
  int iVar2;
  unsigned __int64 uVar3;
  
  lbl_832700EC = lbl_832700EC + 1;
  if (lbl_832700EC == 1) {
    fn_825313D8(lbl_8320A898);
    fn_82544F40();
    iVar2 = *global;
    uVar1 = lbl_821954B0[0x1b8];
    *(unsigned int *)(lbl_8320A898 + 0x293c) = *(unsigned int *)(lbl_8320A898 + 0x293c) | 8;
    uVar3 = *(unsigned __int64 *)(iVar2 + 0x10);
    flags_825E4B68((unsigned __int64 *)(iVar2+0x10),0x200);
    *(unsigned __int64 *)(iVar2+0x10) |= 0x40000;
    iVar2 = *global;
    *(float *)(lbl_8320A898 + 0x2904) = uVar1;
    ((Flags_825E4B68 *)(iVar2+16))->bits |= 0x8000000;
    fn_82637B30(lbl_8320A898,1);
    fn_82544918(2,lbl_8320A898);
    fn_82545098();
  }
  return;
}

