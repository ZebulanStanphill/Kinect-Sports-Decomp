typedef struct Cinfo_829AD570 Cinfo_829AD570;

typedef struct Src_829AD570 {
  const unsigned char *next_input_byte;
  unsigned int bytes_in_buffer;
  void (*init_source)(Cinfo_829AD570 *);
  int (*fill_input_buffer)(Cinfo_829AD570 *);
} Src_829AD570;

typedef struct Err_829AD570 {
  void (*error_exit)(Cinfo_829AD570 *);
  void (*emit_message)(Cinfo_829AD570 *, int);
  int pad8[3];
  int msg_code;
  int parm0;
  int parm1;
} Err_829AD570;

typedef struct Marker_829AD570 {
  int pad[6];
  unsigned int discarded_bytes;
} Marker_829AD570;

struct Cinfo_829AD570 {
  Err_829AD570 *err;
  int pad4[5];
  Src_829AD570 *src;
  int pad1c[0x69 - 7];
  int unread_marker;
  int pad1a8[0x6f - 0x6a];
  Marker_829AD570 *marker;
};

int fn_829AD570(Cinfo_829AD570 *cinfo)
{
  Src_829AD570 *datasrc;
  const unsigned char *next_input_byte;
  unsigned int bytes_in_buffer;
  int c;
  unsigned int discarded;

  datasrc = cinfo->src;
  next_input_byte = datasrc->next_input_byte;
  bytes_in_buffer = datasrc->bytes_in_buffer;
  for (;;) {
    if (bytes_in_buffer == 0) {
      if (!datasrc->fill_input_buffer(cinfo)) return 0;
      next_input_byte = datasrc->next_input_byte;
      bytes_in_buffer = datasrc->bytes_in_buffer;
    }
    bytes_in_buffer--;
    c = *next_input_byte++;
    while (c != 0xFF) {
      cinfo->marker->discarded_bytes++;
      datasrc->next_input_byte = next_input_byte;
      datasrc->bytes_in_buffer = bytes_in_buffer;
      if (bytes_in_buffer == 0) {
        if (!datasrc->fill_input_buffer(cinfo)) return 0;
        next_input_byte = datasrc->next_input_byte;
        bytes_in_buffer = datasrc->bytes_in_buffer;
      }
      bytes_in_buffer--;
      c = *next_input_byte++;
    }
    do {
      if (bytes_in_buffer == 0) {
        if (!datasrc->fill_input_buffer(cinfo)) return 0;
        next_input_byte = datasrc->next_input_byte;
        bytes_in_buffer = datasrc->bytes_in_buffer;
      }
      bytes_in_buffer--;
      c = *next_input_byte++;
    } while (c == 0xFF);
    if (c != 0) break;
    cinfo->marker->discarded_bytes += 2;
    datasrc->next_input_byte = next_input_byte;
    datasrc->bytes_in_buffer = bytes_in_buffer;
  }
  if (cinfo->marker->discarded_bytes != 0) {
    cinfo->err->msg_code = 0x74;
    cinfo->err->parm0 = cinfo->marker->discarded_bytes;
    cinfo->err->parm1 = c;
    cinfo->err->emit_message(cinfo, -1);
    cinfo->marker->discarded_bytes = 0;
  }
  cinfo->unread_marker = c;
  datasrc->next_input_byte = next_input_byte;
  datasrc->bytes_in_buffer = bytes_in_buffer;
  return 1;
}
