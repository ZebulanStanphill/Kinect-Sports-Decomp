extern int lbl_82017AE8[];

struct jerr_827C67E8;
typedef struct jerr_827C67E8 {
  void (*error_exit)(void *cinfo);
  char pad4[0x14 - 4];
  int msg_code;
} jerr_827C67E8;
typedef struct jcinfo_827C67E8 {
  jerr_827C67E8 *err;
} jcinfo_827C67E8;

void fn_827C67E8(jcinfo_827C67E8 *cinfo, short *block, int last_dc_val, long *dc_counts, long *ac_counts)
{
  int temp;
  int nbits;
  int k;
  int r;

  temp = block[0] - last_dc_val;
  if (temp < 0) temp = -temp;
  nbits = 0;
  while (temp) {
    nbits++;
    temp >>= 1;
  }
  if (nbits > 11) {
    cinfo->err->msg_code = 6;
    (*cinfo->err->error_exit)(cinfo);
  }
  dc_counts[nbits]++;
  r = 0;
  for (k = 1; k < 64; k++) {
    if ((temp = block[lbl_82017AE8[k]]) == 0) {
      r++;
    } else {
      while (r > 15) {
        ac_counts[0xF0]++;
        r -= 16;
      }
      if (temp < 0) temp = -temp;
      temp >>= 1;
      nbits = 1;
      while (temp) {
        nbits++;
        temp >>= 1;
      }
      if (nbits > 10) {
        cinfo->err->msg_code = 6;
        (*cinfo->err->error_exit)(cinfo);
      }
      ac_counts[(r << 4) + nbits]++;
      r = 0;
    }
  }
  if (r > 0) ac_counts[0]++;
}
