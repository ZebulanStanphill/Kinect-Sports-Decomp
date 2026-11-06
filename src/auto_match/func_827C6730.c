
struct jpeg_error_mgr_c { void (*error_exit)(void *); int pad[4]; int msg_code; };
struct jpeg_dest_c { unsigned char *next_output_byte; unsigned free_in_buffer; };
typedef struct { int put_buffer; int put_bits; int last_dc_val[4]; } savable_state_c;
typedef struct { char pad[0xc]; savable_state_c saved; } huff_entropy_c;
typedef struct jcinfo_c {
  struct jpeg_error_mgr_c *err;
  char pad4[0x14];
  struct jpeg_dest_c *dest;
  char pad1c[0x140];
  huff_entropy_c *entropy;
} jcinfo_c;
typedef struct { unsigned char *next_output_byte; unsigned free_in_buffer; savable_state_c cur; jcinfo_c *cinfo; } working_state_c;
extern unsigned char fn_827C6280(working_state_c *);
/* libjpeg jchuff.c finish_pass_huff */
void fn_827C6730(jcinfo_c *cinfo)
{
  huff_entropy_c *entropy = cinfo->entropy;
  working_state_c state;
  unsigned t[2];

  t[0] = (unsigned)cinfo->dest->next_output_byte;
  t[1] = cinfo->dest->free_in_buffer;
  state.next_output_byte = (unsigned char *)t[0];
  state.free_in_buffer = t[1];
  state.cur = entropy->saved;
  state.cinfo = cinfo;
  if (!fn_827C6280(&state)) {
    cinfo->err->msg_code = 0x18;
    (*cinfo->err->error_exit)(cinfo);
  }
  t[0] = (unsigned)state.next_output_byte;
  t[1] = state.free_in_buffer;
  cinfo->dest->next_output_byte = (unsigned char *)t[0];
  cinfo->dest->free_in_buffer = t[1];
  entropy->saved = state.cur;
}
