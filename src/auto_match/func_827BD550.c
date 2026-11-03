struct jpeg_decompress_struct_827BD550;
struct jpeg_error_mgr_827BD550 {
  void (*error_exit)(struct jpeg_decompress_struct_827BD550 *);
  void (*emit_message)(struct jpeg_decompress_struct_827BD550 *, int);
  void (*output_message)(struct jpeg_decompress_struct_827BD550 *);
  void (*format_message)(struct jpeg_decompress_struct_827BD550 *, char *);
  void (*reset_error_mgr)(struct jpeg_decompress_struct_827BD550 *);
  int msg_code;
  union { int i[8]; char s[80]; } msg_parm;
};
struct jpeg_decompress_struct_827BD550 {
  struct jpeg_error_mgr_827BD550 *err;
  int pad[0x5e];
  int unread_marker;
};
extern unsigned char fn_827BCFC0(struct jpeg_decompress_struct_827BD550 *);
int fn_827BD550(struct jpeg_decompress_struct_827BD550 *cinfo, int desired)
{
  int marker = cinfo->unread_marker;
  int action = 1;
  cinfo->err->msg_code = 0x79;
  cinfo->err->msg_parm.i[0] = marker;
  cinfo->err->msg_parm.i[1] = desired;
  (*cinfo->err->emit_message)(cinfo, -1);
  for (;;) {
    if (marker < 0xc0)
      action = 2;
    else if (marker < 0xd0 || marker > 0xd7)
      action = 3;
    else {
      if (marker == (0xd0 + ((desired + 1) & 7)) ||
          marker == (0xd0 + ((desired + 2) & 7)))
        action = 3;
      else if (marker == (0xd0 + ((desired - 1) & 7)) ||
               marker == (0xd0 + ((desired - 2) & 7)))
        action = 2;
      else
        action = 1;
    }
    cinfo->err->msg_code = 0x61;
    cinfo->err->msg_parm.i[0] = marker;
    cinfo->err->msg_parm.i[1] = action;
    (*cinfo->err->emit_message)(cinfo, 4);
    switch (action) {
    case 1:
      cinfo->unread_marker = 0;
      return 1;
    case 2:
      if (!fn_827BCFC0(cinfo)) return 0;
      marker = cinfo->unread_marker;
      break;
    case 3:
      return 1;
    }
  }
}
