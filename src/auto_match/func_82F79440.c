unsigned __int64 _FPreset(void)

{
  unsigned char in_fp_ni;
  unsigned char in_fp_drn;
  
  return ((unsigned __int64)in_fp_ni & 1) << 2 | (unsigned __int64)in_fp_drn << 0x20;
}

