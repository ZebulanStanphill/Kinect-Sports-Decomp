extern unsigned char lbl_83215000[];
extern void fn_829C9180(void *, unsigned);
extern void fn_8265C990(void *, unsigned);
extern void *memset(void *, int, unsigned);
void fn_829C9790(void) {
  if (*(void **)(lbl_83215000+0x68)) {
    fn_829C9180(lbl_83215000+0x65c,0x400);
    fn_8265C990(*(void **)(lbl_83215000+0x68),0x8c9c0000);
    *(void **)(lbl_83215000+0x68)=0;
  }
  if (*(void **)(lbl_83215000+0x64)) {
    fn_829C9180(lbl_83215000+0x628,0x400);
    fn_8265C990(*(void **)(lbl_83215000+0x64),0x8c9c0000);
    *(void **)(lbl_83215000+0x64)=0;
  }
  memset(lbl_83215000+0x80,0,0x200);
  memset(lbl_83215000+0x288,0,0x200);
}
