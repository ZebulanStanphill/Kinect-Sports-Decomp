extern int lbl_83156E78;
extern unsigned int lbl_8320A648;


__int64 fn_82822798(unsigned int param_1)

{
  if (((int)param_1 >= 0) && ((int)param_1 <= lbl_83156E78)) {
    return ((unsigned __int64)param_1 & 0x1fffffff) * 8 + (unsigned __int64)lbl_8320A648;
  }
  return 0;
}

