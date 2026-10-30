extern void *memset(void *, int, unsigned int);
typedef unsigned char boolean;
typedef struct jcommon_82 *j_common_ptr;
typedef struct jcinfo_82 *j_compress_ptr;
struct jerr_82 {
  void (*error_exit)(j_common_ptr);
  void (*emit_message)(j_common_ptr, int);
  void (*output_message)(j_common_ptr);
  void (*format_message)(j_common_ptr, char *);
  void (*reset_error_mgr)(j_common_ptr);
  int msg_code;
  union { int i[8]; char s[80]; } msg_parm;
};
struct jmem_82 {
  void *(*alloc_small)(j_common_ptr, int, unsigned);
};
struct jcomp_82 { char pad[0x14]; int dc_tbl_no; int ac_tbl_no; };
struct jentropy_82 {
  void (*start_pass)(j_compress_ptr, boolean);
  void (*encode_mcu)(void);
  void (*finish_pass)(j_compress_ptr);
};
typedef struct phuff_82 {
  struct jentropy_82 pub;
  boolean gather_statistics;
  char pad10[8];
  int put_buffer;
  int put_bits;
  j_compress_ptr cinfo;
  int last_dc_val[4];
  int ac_tbl_no;
  unsigned EOBRUN;
  unsigned BE;
  char *bit_buffer;
  unsigned restarts_to_go;
  int next_restart_num;
  void *derived_tbls[4];
  long *count_ptrs[4];
} *phuff_ptr_82;
struct jcinfo_82 {
  struct jerr_82 *err;
  struct jmem_82 *mem;
  char pad8[0xb4];
  unsigned restart_interval;
  char padc0[0x24];
  int comps_in_scan;
  struct jcomp_82 *cur_comp_info[4];
  char pad_f8[0x34];
  int Ss;
  int Se;
  int Ah;
  int Al;
  char pad13c[0x20];
  struct phuff_82 *entropy;
};

extern void fn_827C5E70(j_compress_ptr, boolean, int, void *);
extern void fn_827C74E8(void);
extern void fn_827C7680(void);
extern void fn_827C7888(void);
extern void fn_827C7988(void);
extern void fn_827C7BF0(void);
extern void fn_827C7C78(void);

void fn_827C7D60(j_compress_ptr cinfo, boolean gather_statistics)
{
  phuff_ptr_82 entropy = cinfo->entropy;
  boolean is_DC_band;
  int ci, tbl;
  struct jcomp_82 *compptr;

  entropy->cinfo = cinfo;
  entropy->gather_statistics = gather_statistics;
  is_DC_band = (cinfo->Ss == 0);
  if (cinfo->Ah == 0) {
    if (is_DC_band)
      entropy->pub.encode_mcu = fn_827C74E8;
    else
      entropy->pub.encode_mcu = fn_827C7680;
  } else {
    if (is_DC_band) {
      entropy->pub.encode_mcu = fn_827C7888;
    } else {
      entropy->pub.encode_mcu = fn_827C7988;
      if (entropy->bit_buffer == 0)
        entropy->bit_buffer = (char *)(*cinfo->mem->alloc_small)((j_common_ptr)cinfo, 1, 1000);
    }
  }
  if (gather_statistics)
    entropy->pub.finish_pass = fn_827C7C78;
  else
    entropy->pub.finish_pass = fn_827C7BF0;
  for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
    compptr = cinfo->cur_comp_info[ci];
    entropy->last_dc_val[ci] = 0;
    if (is_DC_band) {
      if (cinfo->Ah != 0)
        continue;
      tbl = compptr->dc_tbl_no;
    } else {
      entropy->ac_tbl_no = tbl = compptr->ac_tbl_no;
    }
    if (gather_statistics) {
      if (tbl < 0 || tbl >= 4) {
        cinfo->err->msg_code = 0x32;
        cinfo->err->msg_parm.i[0] = tbl;
        (*cinfo->err->error_exit)((j_common_ptr)cinfo);
      }
      if (entropy->count_ptrs[tbl] == 0)
        entropy->count_ptrs[tbl] = (long *)(*cinfo->mem->alloc_small)((j_common_ptr)cinfo, 1, 257 * sizeof(long));
      memset(entropy->count_ptrs[tbl], 0, 257 * sizeof(long));
    } else {
      fn_827C5E70(cinfo, is_DC_band, tbl, &entropy->derived_tbls[tbl]);
    }
  }
  entropy->EOBRUN = 0;
  entropy->BE = 0;
  entropy->put_buffer = 0;
  entropy->put_bits = 0;
  entropy->restarts_to_go = cinfo->restart_interval;
  entropy->next_restart_num = 0;
}
