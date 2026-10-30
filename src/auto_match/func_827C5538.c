typedef struct Err_827C5538 {
  void (*error_exit)(void *);
  void (*emit_message)(void *, int);
  void (*output_message)(void *);
  void (*format_message)(void *, char *);
  void (*reset_error_mgr)(void *);
  int msg_code;
  int msg_parm_i[8];
} Err_827C5538;
typedef struct Tbl_827C5538 {
  unsigned char bits[17];
  unsigned char huffval[256];
  unsigned char sent_table;
} Tbl_827C5538;
typedef struct Cinfo_827C5538 {
  Err_827C5538 *err;
  void *w[0x20];
} Cinfo_827C5538;
extern void fn_827C5308(Cinfo_827C5538 *, int);
extern void fn_827C5390(Cinfo_827C5538 *, int);
extern void fn_827C53D8(Cinfo_827C5538 *, int);

void fn_827C5538(Cinfo_827C5538 *cinfo, int index, unsigned char is_ac)
{
  Tbl_827C5538 *htbl;
  int length;
  int i;

  if (is_ac) {
    htbl = (Tbl_827C5538 *)((void **)cinfo)[index + 0x1a];
    index += 0x10;
  } else {
    htbl = (Tbl_827C5538 *)((void **)cinfo)[index + 0x16];
  }
  if (htbl == 0) {
    cinfo->err->msg_code = 0x32;
    cinfo->err->msg_parm_i[0] = index;
    (*cinfo->err->error_exit)(cinfo);
  }
  if (!htbl->sent_table) {
    fn_827C5390(cinfo, 0xc4);
    length = 0;
    for (i = 1; i <= 16; i++) {
      length += htbl->bits[i];
    }
    fn_827C53D8(cinfo, length + 2 + 1 + 16);
    fn_827C5308(cinfo, index);
    for (i = 1; i <= 16; i++) {
      fn_827C5308(cinfo, htbl->bits[i]);
    }
    for (i = 0; i < length; i++) {
      fn_827C5308(cinfo, htbl->huffval[i]);
    }
    htbl->sent_table = 1;
  }
}
