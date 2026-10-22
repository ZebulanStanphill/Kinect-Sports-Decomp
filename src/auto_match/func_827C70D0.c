typedef unsigned char boolean;
typedef struct jpeg_decompress_struct *j_decompress_ptr;
struct jpeg_error_mgr {
  void (*error_exit)(j_decompress_ptr cinfo);
  void (*emit_message)(j_decompress_ptr cinfo, int msg_level);
  void (*output_message)(j_decompress_ptr cinfo);
  void (*format_message)(j_decompress_ptr cinfo, char *buffer);
  void (*reset_error_mgr)(j_decompress_ptr cinfo);
  int msg_code;
};
struct jpeg_source_mgr {
  const unsigned char *next_input_byte;
  unsigned int bytes_in_buffer;
  void (*init_source)(j_decompress_ptr cinfo);
  boolean (*fill_input_buffer)(j_decompress_ptr cinfo);
};
struct jpeg_decompress_struct {
  struct jpeg_error_mgr *err;
  int pad[5];
  struct jpeg_source_mgr *src;
};
typedef struct State {
  int pad[4];
  const unsigned char *next_input_byte;
  unsigned int bytes_in_buffer;
  int pad2[2];
  j_decompress_ptr cinfo;
} State;

void fn_827C70D0(State *state)
{
  struct jpeg_source_mgr *src = state->cinfo->src;

  if (!(*src->fill_input_buffer)(state->cinfo)) {
    state->cinfo->err->msg_code = 0x18;
    (*state->cinfo->err->error_exit)(state->cinfo);
  }
  state->next_input_byte = src->next_input_byte;
  state->bytes_in_buffer = src->bytes_in_buffer;
}
