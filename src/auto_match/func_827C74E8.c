typedef int boolean;
typedef short JCOEF;
typedef JCOEF JBLOCK[64];
typedef JBLOCK *JBLOCKROW;
typedef struct jcommon_82 *j_common_ptr;
typedef struct jcinfo_82 *j_compress_ptr;
struct jerr_82 {
  void (*error_exit)(j_common_ptr);
  void (*emit_message)(j_common_ptr, int);
  void (*output_message)(j_common_ptr);
  void (*format_message)(j_common_ptr, char *);
  void (*reset_error_mgr)(j_common_ptr);
  int msg_code;
};
struct jdest_82 {
  unsigned char *next_output_byte;
  unsigned free_in_buffer;
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
  unsigned char *next_output_byte;
  unsigned free_in_buffer;
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
} *phuff_ptr_82;
struct jcinfo_82 {
  struct jerr_82 *err;
  void *mem;
  void *progress;
  void *client_data;
  boolean is_decompressor;
  int global_state;
  struct jdest_82 *dest;
  char pad1c[0xa0];
  unsigned restart_interval;
  char padc0[0x24];
  int comps_in_scan;
  struct jcomp_82 *cur_comp_info[4];
  char pad_f8[8];
  int blocks_in_MCU;
  int MCU_membership[10];
  int Ss;
  int Se;
  int Ah;
  int Al;
  char pad13c[0x20];
  struct phuff_82 *entropy;
};

extern void fn_827C7150(phuff_ptr_82, unsigned int, int);
extern void fn_827C72A8(phuff_ptr_82, int, int);
extern void fn_827C73F8(phuff_ptr_82, int);

boolean fn_827C74E8(j_compress_ptr cinfo, JBLOCKROW *MCU_data)
{
  phuff_ptr_82 entropy = cinfo->entropy;
  int temp, temp2;
  int nbits;
  int blkn, ci;
  int Al = cinfo->Al;
  JBLOCKROW block;
  struct jcomp_82 *compptr;

  entropy->next_output_byte = cinfo->dest->next_output_byte;
  entropy->free_in_buffer = cinfo->dest->free_in_buffer;

  if (cinfo->restart_interval)
    if (entropy->restarts_to_go == 0)
      fn_827C73F8(entropy, entropy->next_restart_num);

  for (blkn = 0; blkn < cinfo->blocks_in_MCU; blkn++) {
    block = MCU_data[blkn];
    ci = cinfo->MCU_membership[blkn];
    compptr = cinfo->cur_comp_info[ci];

    temp2 = (int)((*block)[0]) >> Al;

    temp = temp2 - entropy->last_dc_val[ci];
    entropy->last_dc_val[ci] = temp2;

    temp2 = temp;
    if (temp < 0) {
      temp = -temp;
      temp2--;
    }

    nbits = 0;
    while (temp) {
      nbits++;
      temp >>= 1;
    }
    if (nbits > 11) {
      cinfo->err->msg_code = 6;
      (*cinfo->err->error_exit)((j_common_ptr)cinfo);
    }

    fn_827C72A8(entropy, compptr->dc_tbl_no, nbits);

    if (nbits)
      fn_827C7150(entropy, (unsigned int)temp2, nbits);
  }

  cinfo->dest->next_output_byte = entropy->next_output_byte;
  cinfo->dest->free_in_buffer = entropy->free_in_buffer;

  if (cinfo->restart_interval) {
    if (entropy->restarts_to_go == 0) {
      entropy->restarts_to_go = cinfo->restart_interval;
      entropy->next_restart_num++;
      entropy->next_restart_num &= 7;
    }
    entropy->restarts_to_go--;
  }

  return 1;
}
