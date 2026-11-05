typedef struct jerr { void (*error_exit)(void *); void (*emit_message)(void *, int); int pad[3]; int msg_code; } jerr;
typedef struct jcomp { int pad0[5]; int dc_tbl_no; int ac_tbl_no; int pad1[2]; int DCT_scaled_size; int pad2[2]; int component_needed; } jcomp;
typedef struct jent {
  void *pub[2];
  unsigned get_buffer; int bits_left; int insufficient_data;
  int last_dc_val[4];
  unsigned restarts_to_go;
  void *dc_derived_tbls[4]; void *ac_derived_tbls[4];
  void *dc_cur_tbls[10]; void *ac_cur_tbls[10];
  int dc_needed[10]; int ac_needed[10];
} jent;
typedef struct jcinfo {
  jerr *err;
  char pad0[0x114];
  unsigned restart_interval;
  char pad1[0x30];
  int comps_in_scan;
  jcomp *cur_comp_info[4];
  int MCUs_per_row, MCU_rows_in_scan;
  int blocks_in_MCU;
  int MCU_membership[10];
  int Ss, Se, Ah, Al;
  char pad3[0x1c0 - 0x1a4];
  jent *entropy;
} jcinfo;
extern void fn_829BC7D8(jcinfo *, int, int, void *);

void fn_829BD2A8(jcinfo *cinfo)
{
  jent *entropy = cinfo->entropy;
  int ci, blkn, dctbl, actbl;
  jcomp *compptr;

  if (cinfo->Ss != 0 || cinfo->Se != 63 || cinfo->Ah != 0 || cinfo->Al != 0) {
    cinfo->err->msg_code = 0x7a;
    cinfo->err->emit_message(cinfo, -1);
  }
  for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
    compptr = cinfo->cur_comp_info[ci];
    dctbl = compptr->dc_tbl_no;
    actbl = compptr->ac_tbl_no;
    fn_829BC7D8(cinfo, 1, dctbl, &entropy->dc_derived_tbls[dctbl]);
    fn_829BC7D8(cinfo, 0, actbl, &entropy->ac_derived_tbls[actbl]);
    entropy->last_dc_val[ci] = 0;
  }
  for (blkn = 0; blkn < cinfo->blocks_in_MCU; blkn++) {
    ci = cinfo->MCU_membership[blkn];
    compptr = cinfo->cur_comp_info[ci];
    entropy->dc_cur_tbls[blkn] = entropy->dc_derived_tbls[compptr->dc_tbl_no];
    entropy->ac_cur_tbls[blkn] = entropy->ac_derived_tbls[compptr->ac_tbl_no];
    if (compptr->component_needed) {
      entropy->dc_needed[blkn] = 1;
      entropy->ac_needed[blkn] = (compptr->DCT_scaled_size > 1);
    } else {
      entropy->ac_needed[blkn] = 0;
      entropy->dc_needed[blkn] = 0;
    }
  }
  entropy->insufficient_data = 0;
  entropy->bits_left = 0;
  entropy->get_buffer = 0;
  entropy->restarts_to_go = cinfo->restart_interval;
}
