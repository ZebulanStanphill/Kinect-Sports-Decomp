typedef struct ErrMgr {
  void (*error_exit)(void *cinfo);
  int pad[4];
  int msg_code;
  int msg_parm;
} ErrMgr;

typedef struct MemMgr {
  void *(*alloc_small)(void *cinfo, int pool_id, unsigned int size);
} MemMgr;

typedef struct Cquantizer {
  void (*start_pass)(void);
  int pad04;
  void (*finish_pass)(void);
  void (*new_color_map)(void);
  int pad10[9];
  void *odither;
  int pad38[3];
  void *fserrors;
} Cquantizer;

typedef struct Dinfo {
  ErrMgr *err;
  MemMgr *mem;
  int pad08[17];
  int dither_mode;
  int pad50;
  int desired_number_of_colors;
  int pad58[3];
  int out_color_components;
  int pad68[0x50];
  Cquantizer *cquantize;
} Dinfo;

extern void fn_827CCC80(Dinfo *);
extern void fn_827CCE10(Dinfo *);
extern void fn_827CD520(Dinfo *);
extern void fn_827CD590(void);
extern void fn_827CD6E0(void);
extern void fn_827CD6E8(void);

void fn_827CD708(Dinfo *cinfo)
{
  Cquantizer *cquantize;

  cquantize = (Cquantizer *)(*cinfo->mem->alloc_small)(cinfo, 1, 0x58);
  cinfo->cquantize = cquantize;
  cquantize->fserrors = 0;
  cquantize->start_pass = fn_827CD590;
  cquantize->finish_pass = fn_827CD6E0;
  cquantize->new_color_map = fn_827CD6E8;
  cquantize->odither = 0;
  if (cinfo->out_color_components > 4) {
    cinfo->err->msg_code = 0x37;
    cinfo->err->msg_parm = 4;
    (*cinfo->err->error_exit)(cinfo);
  }
  if (cinfo->desired_number_of_colors > 0x100) {
    cinfo->err->msg_code = 0x39;
    cinfo->err->msg_parm = 0x100;
    (*cinfo->err->error_exit)(cinfo);
  }
  fn_827CCC80(cinfo);
  fn_827CCE10(cinfo);
  if (cinfo->dither_mode == 2)
    fn_827CD520(cinfo);
}
