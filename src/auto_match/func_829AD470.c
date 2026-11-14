/* jpeg-6b jdmarker.c skip_variable: skip over an unknown or uninteresting variable-length marker. */
typedef struct Cinfo_829AD6F0 Cinfo_829AD6F0;

typedef struct Src_829AD6F0 {
  const unsigned char *next_input_byte;
  unsigned int bytes_in_buffer;
  void (*init_source)(Cinfo_829AD6F0 *);
  int (*fill_input_buffer)(Cinfo_829AD6F0 *);
  void (*skip_input_data)(Cinfo_829AD6F0 *, long);
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

int fn_829AD470(Cinfo_829AD6F0 *cinfo)
{
  long length;
  Src_829AD6F0 *datasrc = cinfo->src;
  const unsigned char *next_input_byte = datasrc->next_input_byte;
  unsigned int bytes_in_buffer = datasrc->bytes_in_buffer;

  if (bytes_in_buffer == 0) {
    if (!datasrc->fill_input_buffer(cinfo)) return 0;
    next_input_byte = datasrc->next_input_byte;
    bytes_in_buffer = datasrc->bytes_in_buffer;
  }
  bytes_in_buffer--;
  length = ((unsigned int)*next_input_byte++) << 8;
  if (bytes_in_buffer == 0) {
    if (!datasrc->fill_input_buffer(cinfo)) return 0;
    next_input_byte = datasrc->next_input_byte;
    bytes_in_buffer = datasrc->bytes_in_buffer;
  }
  bytes_in_buffer--;
  length += *next_input_byte++;
  length -= 2;

  cinfo->err->msg_code = 0x5b;
  cinfo->err->parm0 = cinfo->unread_marker;
  cinfo->err->parm1 = (int)length;
  cinfo->err->emit_message(cinfo, 1);

  datasrc->next_input_byte = next_input_byte;
  datasrc->bytes_in_buffer = bytes_in_buffer;
  if (length > 0)
    cinfo->src->skip_input_data(cinfo, length);

  return 1;
}
