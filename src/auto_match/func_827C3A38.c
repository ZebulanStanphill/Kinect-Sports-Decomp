typedef unsigned char JOCTET;
struct C_827C3A38;
typedef struct Err_827C3A38 {
  void (*error_exit)(struct C_827C3A38 *);
  void (*emit_message)(struct C_827C3A38 *, int);
  int p8, pc, p10; int msg_code;
} Err_827C3A38;
typedef struct Src_827C3A38 {
  const JOCTET *next_input_byte; unsigned bytes_in_buffer;
  void (*init_source)(struct C_827C3A38 *);
  unsigned char (*fill_input_buffer)(struct C_827C3A38 *);
} Src_827C3A38;
typedef struct Ent_827C3A38 { char pad[8]; unsigned char insufficient_data; } Ent_827C3A38;
typedef struct C_827C3A38 {
  Err_827C3A38 *err; char p[0x14]; Src_827C3A38 *src; char q[0x17c - 0x1c]; int unread_marker;
  char r[0x198 - 0x180]; Ent_827C3A38 *entropy;
} C_827C3A38;
typedef struct State_827C3A38 {
  const JOCTET *next_input_byte; unsigned bytes_in_buffer; int get_buffer; int bits_left; C_827C3A38 *cinfo;
} State_827C3A38;
int jpeg_fill_bit_buffer(State_827C3A38 *state, int get_buffer, int bits_left, int nbits)
{
  const JOCTET *next_input_byte = state->next_input_byte;
  unsigned bytes_in_buffer = state->bytes_in_buffer;
  C_827C3A38 *cinfo = state->cinfo;
  if (cinfo->unread_marker == 0) {
    while (bits_left < 25) {
      int c;
      if (bytes_in_buffer == 0) {
        if (!cinfo->src->fill_input_buffer(cinfo)) return 0;
        next_input_byte = cinfo->src->next_input_byte;
        bytes_in_buffer = cinfo->src->bytes_in_buffer;
      }
      bytes_in_buffer--;
      c = *next_input_byte++;
      if (c == 0xFF) {
        do {
          if (bytes_in_buffer == 0) {
            if (!cinfo->src->fill_input_buffer(cinfo)) return 0;
            next_input_byte = cinfo->src->next_input_byte;
            bytes_in_buffer = cinfo->src->bytes_in_buffer;
          }
          bytes_in_buffer--;
          c = *next_input_byte++;
        } while (c == 0xFF);
        if (c == 0) {
          c = 0xFF;
        } else {
          cinfo->unread_marker = c;
          goto no_more_bytes;
        }
      }
      get_buffer = (get_buffer << 8) | c;
      bits_left += 8;
    }
  } else {
  no_more_bytes:
    if (nbits > bits_left) {
      if (!cinfo->entropy->insufficient_data) {
        cinfo->err->msg_code = 0x75;
        cinfo->err->emit_message(cinfo, -1);
        cinfo->entropy->insufficient_data = 1;
      }
      get_buffer <<= 25 - bits_left;
      bits_left = 25;
    }
  }
  state->next_input_byte = next_input_byte;
  state->bytes_in_buffer = bytes_in_buffer;
  state->get_buffer = get_buffer;
  state->bits_left = bits_left;
  return 1;
}
