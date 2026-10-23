typedef struct ErrMgr {
  void (*error_exit)(void *cinfo);
  int pad[4];
  int msg_code;
  int msg_parm;
} ErrMgr;

typedef struct MemMgr {
  void *(*alloc_small)(void *cinfo, int pool_id, unsigned int size);
} MemMgr;

typedef struct Cinfo {
  ErrMgr *err;
  MemMgr *mem;
  int pad08[3];
  int global_state;
  int pad18[8];
  int data_precision;
  int pad3c[2];
  void *comp_info;
  int pad48[12];
  unsigned char arith_dc_L[16];
  unsigned char arith_dc_U[16];
  unsigned char arith_ac_K[16];
  int num_scans;
  void *scan_info;
  unsigned char raw_data_in;
  unsigned char arith_code;
  unsigned char optimize_coding;
  unsigned char CCIR601_sampling;
  int smoothing_factor;
  int dct_method;
  int restart_interval;
  int restart_in_rows;
  unsigned char write_JFIF_header;
  unsigned char JFIF_major_version;
  unsigned char JFIF_minor_version;
  unsigned char density_unit;
  unsigned short X_density;
  unsigned short Y_density;
} Cinfo;

extern void fn_827BE8A0(Cinfo *, int, int);
extern void fn_827BEA30(Cinfo *);
extern void fn_827BF240(Cinfo *);

void fn_827BF2B8(Cinfo *cinfo)
{
  int i;

  if (cinfo->global_state != 100) {
    cinfo->err->msg_code = 0x14;
    cinfo->err->msg_parm = cinfo->global_state;
    (*cinfo->err->error_exit)(cinfo);
  }
  if (cinfo->comp_info == 0)
    cinfo->comp_info = (*cinfo->mem->alloc_small)(cinfo, 0, 0x348);
  cinfo->data_precision = 8;
  fn_827BE8A0(cinfo, 0x32, 1);
  fn_827BEA30(cinfo);
  for (i = 0; i < 16; i++) {
    cinfo->arith_dc_L[i] = 0;
    cinfo->arith_dc_U[i] = 1;
    cinfo->arith_ac_K[i] = 5;
  }
  cinfo->scan_info = 0;
  cinfo->num_scans = 0;
  cinfo->raw_data_in = 0;
  cinfo->arith_code = 0;
  cinfo->optimize_coding = 0;
  if (cinfo->data_precision > 8)
    cinfo->optimize_coding = 1;
  cinfo->CCIR601_sampling = 0;
  cinfo->smoothing_factor = 0;
  cinfo->dct_method = 0;
  cinfo->restart_interval = 0;
  cinfo->restart_in_rows = 0;
  cinfo->JFIF_major_version = 1;
  cinfo->JFIF_minor_version = 1;
  cinfo->density_unit = 0;
  cinfo->X_density = 1;
  cinfo->Y_density = 1;
  fn_827BF240(cinfo);
}
