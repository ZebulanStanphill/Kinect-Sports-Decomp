/* jpeg-6b jdmarker.c get_interesting_appn: read the start of an APP0/APP14 marker and pass it to the examiner. */
/* jpeg-6b jdmarker.c skip_variable: skip over an unknown or uninteresting variable-length marker. */
typedef struct Cinfo_829AD2C8 Cinfo_829AD2C8;

typedef struct Src_829AD2C8 {
  const unsigned char *next_input_byte;
  unsigned int bytes_in_buffer;
  void (*init_source)(Cinfo_829AD2C8 *);
  int (*fill_input_buffer)(Cinfo_829AD2C8 *);
  void (*skip_input_data)(Cinfo_829AD2C8 *, long);
} Src_829AD2C8;

typedef struct Err_829AD2C8 {
  void (*error_exit)(Cinfo_829AD2C8 *);
  void (*emit_message)(Cinfo_829AD2C8 *, int);
  int pad8[3];
  int msg_code;
  int parm0;
  int parm1;
} Err_829AD2C8;

struct Cinfo_829AD2C8 {
  Err_829AD2C8 *err;
  int pad4[5];
  Src_829AD2C8 *src;
  int pad1c[0x69 - 7];
  int unread_marker;
};

extern void fn_829ACEA8(Cinfo_829AD2C8 *cinfo, unsigned char *data, unsigned int datalen, long remaining);
extern void fn_829AD1B8(Cinfo_829AD2C8 *cinfo, unsigned char *data, unsigned int datalen, long remaining);

int fn_829AD2C8(Cinfo_829AD2C8 *cinfo)
{
  long length;
  unsigned char b[14];
  unsigned int i, numtoread;
  Src_829AD2C8 *datasrc = cinfo->src;
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

  if (length >= 14)
    numtoread = 14;
  else if (length > 0)
    numtoread = (unsigned int)length;
  else
    numtoread = 0;
  for (i = 0; i < numtoread; i++) {
    if (bytes_in_buffer == 0) {
      if (!datasrc->fill_input_buffer(cinfo)) return 0;
      next_input_byte = datasrc->next_input_byte;
      bytes_in_buffer = datasrc->bytes_in_buffer;
    }
    bytes_in_buffer--;
    b[i] = *next_input_byte++;
  }

  length -= numtoread;

  switch (cinfo->unread_marker) {
  case 0xe0:
    fn_829ACEA8(cinfo, b, numtoread, length);
    break;
  case 0xee:
    fn_829AD1B8(cinfo, b, numtoread, length);
    break;
  default:
    cinfo->err->msg_code = 0x44;
    cinfo->err->parm0 = cinfo->unread_marker;
    cinfo->err->error_exit(cinfo);
    break;
  }

  datasrc->next_input_byte = next_input_byte;
  datasrc->bytes_in_buffer = bytes_in_buffer;
  if (length > 0)
    cinfo->src->skip_input_data(cinfo, length);

  return 1;
}
