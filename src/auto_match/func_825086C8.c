extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A40;
extern unsigned int lbl_83265A48;
extern unsigned int lbl_832760AC;
extern unsigned int lbl_832767BC;


__int64 fn_825086C8(void)

{
  return (((unsigned __int64)lbl_83265A48 + 7 & 0xffffffff) >> 3) +
         (((unsigned __int64)lbl_83265A40 + 7 & 0xffffffff) >> 3) +
         (((unsigned __int64)lbl_83265A38 + 7 & 0xffffffff) >> 3) +
         (((unsigned __int64)lbl_832760AC + 7 & 0xffffffff) >> 3) +
         ((unsigned __int64)lbl_832767BC + 7 & 0x3fffffff) * 4;
}

