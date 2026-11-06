extern int fn_827C1A20(void *);
extern int lbl_82017AE8[];

typedef unsigned char JOCTET;
typedef unsigned short UINT16;
typedef unsigned char boolean;
typedef struct jpeg_common_struct_827BC248 *j_common_ptr;
typedef struct jpeg_decompress_struct_827BC248 *j_decompress_ptr;

struct jpeg_error_mgr_827BC248 {
  void (*error_exit)(j_common_ptr cinfo);
  void (*emit_message)(j_common_ptr cinfo, int msg_level);
  int pad8[3];
  int msg_code;
  int msg_parm[8];
  int pad3c[12];
  int trace_level;
};

struct jpeg_source_mgr_827BC248 {
  const JOCTET *next_input_byte;
  unsigned int bytes_in_buffer;
  void (*init_source)(j_decompress_ptr cinfo);
  boolean (*fill_input_buffer)(j_decompress_ptr cinfo);
};

struct JQUANT_TBL_827BC248 {
  UINT16 quantval[64];
};

struct jpeg_decompress_struct_827BC248 {
  struct jpeg_error_mgr_827BC248 *err;
  int pad4[5];
  struct jpeg_source_mgr_827BC248 *src;
  int pad1c[29];
  struct JQUANT_TBL_827BC248 *quant_tbl_ptrs[4];
};

#define GETJOCTET(value) (value)
#define MAKESTMT(stuff) do { stuff } while (0)
#define INPUT_VARS(cinfo) struct jpeg_source_mgr_827BC248 *datasrc = (cinfo)->src; const JOCTET *next_input_byte = datasrc->next_input_byte; unsigned int bytes_in_buffer = datasrc->bytes_in_buffer
#define INPUT_SYNC(cinfo) MAKESTMT( datasrc->next_input_byte = next_input_byte; datasrc->bytes_in_buffer = bytes_in_buffer; )
#define MAKE_BYTE_AVAIL(cinfo,action) if (bytes_in_buffer == 0) { if (!(*datasrc->fill_input_buffer)(cinfo)) { action; } next_input_byte = datasrc->next_input_byte; bytes_in_buffer = datasrc->bytes_in_buffer; }
#define INPUT_BYTE(cinfo,V,action) MAKESTMT( MAKE_BYTE_AVAIL(cinfo,action); bytes_in_buffer--; V = GETJOCTET(*next_input_byte++); )
#define INPUT_2BYTES(cinfo,V,action) MAKESTMT( MAKE_BYTE_AVAIL(cinfo,action); bytes_in_buffer--; V = ((unsigned int) GETJOCTET(*next_input_byte++)) << 8; MAKE_BYTE_AVAIL(cinfo,action); bytes_in_buffer--; V += GETJOCTET(*next_input_byte++); )

int fn_827BC248(j_decompress_ptr cinfo)
{
  int length;
  int n, i, prec;
  unsigned int tmp;
  struct JQUANT_TBL_827BC248 *quant_ptr;
  INPUT_VARS(cinfo);

  INPUT_2BYTES(cinfo, length, return 0);
  length -= 2;

  while (length > 0) {
    INPUT_BYTE(cinfo, n, return 0);
    prec = n >> 4;
    n &= 0x0F;

    cinfo->err->msg_code = 0x51;
    cinfo->err->msg_parm[0] = n;
    cinfo->err->msg_parm[1] = prec;
    (*cinfo->err->emit_message)((j_common_ptr)cinfo, 1);

    if (n >= 4) {
      cinfo->err->msg_code = 0x1f;
      cinfo->err->msg_parm[0] = n;
      (*cinfo->err->error_exit)((j_common_ptr)cinfo);
    }
    if (cinfo->quant_tbl_ptrs[n] == 0)
      cinfo->quant_tbl_ptrs[n] = (struct JQUANT_TBL_827BC248 *)fn_827C1A20(cinfo);
    quant_ptr = cinfo->quant_tbl_ptrs[n];

    for (i = 0; i < 64; i++) {
      if (prec)
        INPUT_2BYTES(cinfo, tmp, return 0);
      else
        INPUT_BYTE(cinfo, tmp, return 0);
      quant_ptr->quantval[lbl_82017AE8[i]] = (UINT16)tmp;
    }

    if (cinfo->err->trace_level >= 2) {
      for (i = 0; i < 64; i += 8) {
        int *_mp = cinfo->err->msg_parm;
        _mp[0] = quant_ptr->quantval[i];
        _mp[1] = quant_ptr->quantval[i + 1];
        _mp[2] = quant_ptr->quantval[i + 2];
        _mp[3] = quant_ptr->quantval[i + 3];
        _mp[4] = quant_ptr->quantval[i + 4];
        _mp[5] = quant_ptr->quantval[i + 5];
        _mp[6] = quant_ptr->quantval[i + 6];
        _mp[7] = quant_ptr->quantval[i + 7];
        cinfo->err->msg_code = 0x5d;
        (*cinfo->err->emit_message)((j_common_ptr)cinfo, 2);
      }
    }

    length -= 64 + 1;
    if (prec) length -= 64;
  }

  if (length != 0) {
    cinfo->err->msg_code = 0xb;
    (*cinfo->err->error_exit)((j_common_ptr)cinfo);
  }

  INPUT_SYNC(cinfo);
  return 1;
}
