/* Corresponds to libjpeg jdmarker.c get_dri (open-source IJG libjpeg). */
typedef unsigned char boolean;
typedef unsigned char JOCTET;
typedef int INT32;

struct jpeg_error_mgr_827BC550 {
  void (*error_exit)(void *cinfo);
  void (*emit_message)(void *cinfo, int msg_level);
  int pad[3];
  int msg_code;
  int msg_parm[8];
};

struct jpeg_source_mgr_827BC550 {
  const JOCTET *next_input_byte;
  unsigned int bytes_in_buffer;
  void (*init_source)(void *cinfo);
  boolean (*fill_input_buffer)(void *cinfo);
};

struct jpeg_decompress_827BC550 {
  struct jpeg_error_mgr_827BC550 *err;
  int pad0[5];
  struct jpeg_source_mgr_827BC550 *src;
  int pad1[56];
  unsigned int restart_interval;
};

#define INPUT_VARS(cinfo) \
  struct jpeg_source_mgr_827BC550 *datasrc = (cinfo)->src; \
  const JOCTET *next_input_byte = datasrc->next_input_byte; \
  unsigned int bytes_in_buffer = datasrc->bytes_in_buffer

#define INPUT_SYNC(cinfo) \
  (datasrc->next_input_byte = next_input_byte, \
   datasrc->bytes_in_buffer = bytes_in_buffer)

#define INPUT_RELOAD(cinfo) \
  (next_input_byte = datasrc->next_input_byte, \
   bytes_in_buffer = datasrc->bytes_in_buffer)

#define MAKE_BYTE_AVAIL(cinfo, action) \
  if (bytes_in_buffer == 0) { \
    if (!(*datasrc->fill_input_buffer)(cinfo)) \
      { action; } \
    INPUT_RELOAD(cinfo); \
  }

#define INPUT_2BYTES(cinfo, V, action) \
  do { MAKE_BYTE_AVAIL(cinfo, action); \
       bytes_in_buffer--; \
       V = ((unsigned int)(*next_input_byte++)) << 8; \
       MAKE_BYTE_AVAIL(cinfo, action); \
       bytes_in_buffer--; \
       V += (*next_input_byte++); } while (0)

boolean fn_827BC550(struct jpeg_decompress_827BC550 *cinfo)
{
  INT32 length;
  unsigned int tmp;
  INPUT_VARS(cinfo);

  INPUT_2BYTES(cinfo, length, return 0);

  if (length != 4) {
    cinfo->err->msg_code = 0xb;
    (*cinfo->err->error_exit)(cinfo);
  }

  INPUT_2BYTES(cinfo, tmp, return 0);

  cinfo->err->msg_code = 0x52;
  cinfo->err->msg_parm[0] = tmp;
  (*cinfo->err->emit_message)(cinfo, 1);

  cinfo->restart_interval = tmp;

  INPUT_SYNC(cinfo);
  return 1;
}
