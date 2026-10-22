extern void fn_827C5308(void *, int);
extern void fn_827C5390(void *, int);
extern void fn_827C53D8(void *, int);

typedef struct {
  int component_id;
  int pad[4];
  int dc_tbl_no;
  int ac_tbl_no;
} Comp;

typedef struct {
  char pad0[0xb1];
  unsigned char arith_code;
  char pad1[0xd4 - 0xb2];
  unsigned char progressive_mode;
  char pad2[0xe4 - 0xd5];
  int comps_in_scan;
  Comp *cur_comp_info[4];
  char pad3[0x12c - 0xf8];
  int Ss;
  int Se;
  int Ah;
  int Al;
} Cinfo;

void fn_827C5790(Cinfo *cinfo)
{
  int i, td, ta;
  Comp *compptr;

  fn_827C5390(cinfo, 0xda);
  fn_827C53D8(cinfo, 2 * cinfo->comps_in_scan + 2 + 1 + 3);
  fn_827C5308(cinfo, cinfo->comps_in_scan);
  for (i = 0; i < cinfo->comps_in_scan; i++) {
    compptr = cinfo->cur_comp_info[i];
    fn_827C5308(cinfo, compptr->component_id);
    td = compptr->dc_tbl_no;
    ta = compptr->ac_tbl_no;
    if (cinfo->progressive_mode) {
      if (cinfo->Ss == 0) {
        ta = 0;
        if (cinfo->Ah != 0 && !cinfo->arith_code)
          td = 0;
      } else {
        td = 0;
      }
    }
    fn_827C5308(cinfo, (td << 4) + ta);
  }
  fn_827C5308(cinfo, cinfo->Ss);
  fn_827C5308(cinfo, cinfo->Se);
  fn_827C5308(cinfo, (cinfo->Ah << 4) + cinfo->Al);
}
