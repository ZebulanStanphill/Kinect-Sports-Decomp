/* jpeg-6b jdmarker.c first_marker: read the SOI marker that starts the file. */
typedef struct Cinfo_829AD6F0 Cinfo_829AD6F0;

typedef struct Src_829AD6F0 {
  const unsigned char *next_input_byte;
  unsigned int bytes_in_buffer;
  void (*init_source)(Cinfo_829AD6F0 *);
  int (*fill_input_buffer)(Cinfo_829AD6F0 *);
} Src_829AD6F0;

typedef struct Err_829AD6F0 {
  void (*error_exit)(Cinfo_829AD6F0 *);
  void (*emit_message)(Cinfo_829AD6F0 *, int);
  int pad8[3];
  int msg_code;
  int parm0;
  int parm1;
} Err_829AD6F0;

struct Cinfo_829AD6F0 {
  Err_829AD6F0 *err;
  int pad4[5];
  Src_829AD6F0 *src;
  int pad1c[0x69 - 7];
  int unread_marker;
};

int fn_829AD6F0(Cinfo_829AD6F0 *cinfo)
{
  int c, c2;
  Src_829AD6F0 *datasrc = cinfo->src;
  const unsigned char *next_input_byte = datasrc->next_input_byte;
  unsigned int bytes_in_buffer = datasrc->bytes_in_buffer;

  if (bytes_in_buffer == 0) {
    if (!datasrc->fill_input_buffer(cinfo)) return 0;
    next_input_byte = datasrc->next_input_byte;
    bytes_in_buffer = datasrc->bytes_in_buffer;
  }
  bytes_in_buffer--;
  c = *next_input_byte++;
  if (bytes_in_buffer == 0) {
    if (!datasrc->fill_input_buffer(cinfo)) return 0;
    next_input_byte = datasrc->next_input_byte;
    bytes_in_buffer = datasrc->bytes_in_buffer;
  }
  bytes_in_buffer--;
  c2 = *next_input_byte++;
  if (c != 0xFF || c2 != 0xD8) {
    cinfo->err->msg_code = 0x35;
    cinfo->err->parm0 = c;
    cinfo->err->parm1 = c2;
    cinfo->err->error_exit(cinfo);
  }

  cinfo->unread_marker = c2;

  datasrc->next_input_byte = next_input_byte;
  datasrc->bytes_in_buffer = bytes_in_buffer;
  return 1;
}
