typedef struct { void (*error_exit)(void *); char pad[0x10]; int msg_code; int msg_parm_i0; } Err_827C5428;
typedef struct { unsigned short quantval[64]; unsigned char sent_table; } Qtbl_827C5428;
typedef struct {
  Err_827C5428 *err;
  char pad[0x44];
  Qtbl_827C5428 *quant_tbl_ptrs[4];
} Cinfo_827C5428;
extern int lbl_82017AE8[];
extern void fn_827C5308(void *, int);
extern void fn_827C5390(void *, int);
extern void fn_827C53D8(void *, int);

int fn_827C5428(Cinfo_827C5428 *cinfo, int index)
{
  Qtbl_827C5428 *qtbl;
  int prec;
  int i;
  qtbl = cinfo->quant_tbl_ptrs[index];
  if (qtbl == 0) {
    cinfo->err->msg_code = 0x34;
    cinfo->err->msg_parm_i0 = index;
    (*cinfo->err->error_exit)(cinfo);
  }
  prec = 0;
  for (i = 0; i < 64; i++) {
    if (qtbl->quantval[i] > 255) prec = 1;
  }
  if (!qtbl->sent_table) {
    fn_827C5390(cinfo, 0xdb);
    fn_827C53D8(cinfo, prec ? 64 * 2 + 1 + 2 : 64 + 1 + 2);
    fn_827C5308(cinfo, index + (prec << 4));
    for (i = 0; i < 64; i++) {
      unsigned int qval = qtbl->quantval[lbl_82017AE8[i]];
      if (prec) fn_827C5308(cinfo, (int)(qval >> 8));
      fn_827C5308(cinfo, (int)(qval & 0xFF));
    }
    qtbl->sent_table = 1;
  }
  return prec;
}
