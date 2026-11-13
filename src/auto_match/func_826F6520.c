#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))


unsigned short fn_826F6520(int param_1)

{
  return CONCAT11(*(unsigned char *)(param_1 + 8),*(unsigned char *)(param_1 + 7));
}

