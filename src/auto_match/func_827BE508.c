typedef unsigned int uint;
struct Cinfo;
struct Err { void (*error_exit)(struct Cinfo *); void (*emit_message)(struct Cinfo *, int); char pad[0xc]; int msg_code; int parm0; };
struct Prog { void (*progress_monitor)(struct Cinfo *); int pass_counter; int pass_limit; };
struct Pre { char pad[4]; void (*f4)(struct Cinfo *); char pad2[4]; unsigned char flag; };
struct Main { char pad[4]; void (*process_data)(struct Cinfo *, int, uint *, uint); };
struct Cinfo {
  struct Err *err; int pad4; struct Prog *progress; char pad0c[8]; int global_state;
  char pad18[8]; uint output_height; char pad24[0xac]; uint output_scanline;
  char pad_d4[0x68]; struct Pre *pre; struct Main *main;
};
uint fn_827BE508(struct Cinfo *param_1, int param_2, uint param_3)
{
  uint row_ctr;
  if (param_1->global_state != 0x65) {
    param_1->err->msg_code = 0x14;
    param_1->err->parm0 = param_1->global_state;
    param_1->err->error_exit(param_1);
  }
  if (param_1->output_scanline >= param_1->output_height) {
    param_1->err->msg_code = 0x7b;
    param_1->err->emit_message(param_1, -1);
  }
  if (param_1->progress != 0) {
    param_1->progress->pass_counter = param_1->output_scanline;
    param_1->progress->pass_limit = param_1->output_height;
    param_1->progress->progress_monitor(param_1);
  }
  if (param_1->pre->flag != 0) {
    param_1->pre->f4(param_1);
  }
  if (param_3 > param_1->output_height - param_1->output_scanline)
    param_3 = param_1->output_height - param_1->output_scanline;
  row_ctr = 0;
  param_1->main->process_data(param_1, param_2, &row_ctr, param_3);
  param_1->output_scanline += row_ctr;
  return row_ctr;
}
