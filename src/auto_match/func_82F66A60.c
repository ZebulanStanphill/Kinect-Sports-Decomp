typedef struct { char pad[0xc8]; unsigned short *pctype; } locinfo_t;
extern locinfo_t lbl_831BBBD0;

int isupper(int c)
{
  return lbl_831BBBD0.pctype[c] & 1;
}
