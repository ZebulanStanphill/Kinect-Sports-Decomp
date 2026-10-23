typedef struct ErrMgr {
  void (*error_exit)(void *cinfo);
  int pad[4];
  int msg_code;
  int msg_parm;
} ErrMgr;

typedef struct Master {
  void (*prepare_for_output_pass)(void *cinfo);
  void (*finish_output_pass)(void *cinfo);
} Master;

typedef struct InputCtl {
  int (*consume_input)(void *cinfo);
  int pad04[3];
  unsigned char has_multiple_scans;
  unsigned char eoi_reached;
} InputCtl;

typedef struct Dinfo {
  ErrMgr *err;
  int pad04[4];
  int global_state;
  int pad18[10];
  unsigned char buffered_image;
  int pad44[14];
  int input_scan_number;
  int pad80;
  int output_scan_number;
  int pad88[62];
  Master *master;
  int pad184[3];
  InputCtl *inputctl;
} Dinfo;

int fn_827BDF78(Dinfo *cinfo)
{
  if ((cinfo->global_state == 0xcd || cinfo->global_state == 0xce) && cinfo->buffered_image) {
    (*cinfo->master->finish_output_pass)(cinfo);
    cinfo->global_state = 0xd0;
  } else if (cinfo->global_state != 0xd0) {
    cinfo->err->msg_code = 0x14;
    cinfo->err->msg_parm = cinfo->global_state;
    (*cinfo->err->error_exit)(cinfo);
  }
  while (cinfo->input_scan_number <= cinfo->output_scan_number &&
         !cinfo->inputctl->eoi_reached) {
    if ((*cinfo->inputctl->consume_input)(cinfo) == 0)
      return 0;
  }
  cinfo->global_state = 0xcf;
  return 1;
}
