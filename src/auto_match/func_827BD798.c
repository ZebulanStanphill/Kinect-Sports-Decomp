typedef struct Cinfo_827BD798 Cinfo_827BD798;
typedef int (*Proc_827BD798)(Cinfo_827BD798 *);
typedef struct {
  char pad[0x30];
  long max_alloc_chunk;
} Mem_827BD798;
typedef struct {
  char pad0[0x18];
  Proc_827BD798 process_COM;
  Proc_827BD798 process_APPn[16];
  unsigned int length_limit_COM;
  unsigned int length_limit_APPn[16];
} Marker_827BD798;
struct Cinfo_827BD798 {
  struct {
    void (*error_exit)(Cinfo_827BD798 *c);
    char pad[0x14 - 4];
    int msg_code;
    int parm;
  } *err;
  Mem_827BD798 *mem;
  char pad[0x194 - 8];
  Marker_827BD798 *marker;
};

extern int fn_827BCA70(Cinfo_827BD798 *c);
extern int fn_827BCC18(Cinfo_827BD798 *c);
extern int fn_827BCEC0(Cinfo_827BD798 *c);

void fn_827BD798(Cinfo_827BD798 *cinfo, int marker_code, unsigned int length_limit)
{
  Marker_827BD798 *marker = cinfo->marker;
  long maxlength;
  Proc_827BD798 processor;

  maxlength = cinfo->mem->max_alloc_chunk - 0x14;
  if ((long)length_limit > maxlength) length_limit = (unsigned int)maxlength;
  if (length_limit) {
    processor = fn_827BCC18;
    if (marker_code == 0xe0 && length_limit < 0xe) length_limit = 0xe;
    else if (marker_code == 0xee && length_limit < 0xc) length_limit = 0xc;
  } else {
    processor = fn_827BCEC0;
    if (marker_code == 0xe0 || marker_code == 0xee) processor = fn_827BCA70;
  }
  if (marker_code == 0xfe) {
    marker->process_COM = processor;
    marker->length_limit_COM = length_limit;
  } else if (marker_code >= 0xe0 && marker_code <= 0xef) {
    marker->process_APPn[marker_code - 0xe0] = processor;
    marker->length_limit_APPn[marker_code - 0xe0] = length_limit;
  } else {
    cinfo->err->msg_code = 0x44;
    cinfo->err->parm = marker_code;
    cinfo->err->error_exit(cinfo);
  }
}
