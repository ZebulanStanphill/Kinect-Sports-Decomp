typedef unsigned char boolean;

struct jpeg_error_mgr {
  void (*error_exit)(void *cinfo);
  char pad[0x10];
  int msg_code;
  union {
    int i[8];
  } msg_parm;
};

typedef struct {
  unsigned short quantval[64];
  boolean sent_table;
} JQUANT_TBL;

typedef struct {
  struct jpeg_error_mgr *err;
  char pad[0x10];
  int global_state;
  char pad2[0x48 - 0x18];
  JQUANT_TBL *quant_tbl_ptrs[4];
} jpeg_compress_struct;

extern JQUANT_TBL *fn_827C1A20(void *cinfo);

#define ERREXIT1(cinfo,code,p1)  \
  ((cinfo)->err->msg_code = (code), \
   (cinfo)->err->msg_parm.i[0] = (p1), \
   (*(cinfo)->err->error_exit) ((void *) (cinfo)))

void fn_827BE778(jpeg_compress_struct *cinfo, int which_tbl,
                 const unsigned int *basic_table, int scale_factor,
                 boolean force_baseline)
{
  JQUANT_TBL **qtblptr;
  int i;
  long temp;

  if (cinfo->global_state != 100)
    ERREXIT1(cinfo, 20, cinfo->global_state);

  if (which_tbl < 0 || which_tbl >= 4)
    ERREXIT1(cinfo, 31, which_tbl);

  qtblptr = &cinfo->quant_tbl_ptrs[which_tbl];

  if (*qtblptr == 0)
    *qtblptr = fn_827C1A20(cinfo);

  for (i = 0; i < 64; i++) {
    temp = ((long)basic_table[i] * scale_factor + 50L) / 100L;
    if (temp <= 0L) temp = 1L;
    if (temp > 32767L) temp = 32767L;
    if (force_baseline && temp > 255L)
      temp = 255L;
    (*qtblptr)->quantval[i] = (unsigned short)temp;
  }

  (*qtblptr)->sent_table = 0;
}
