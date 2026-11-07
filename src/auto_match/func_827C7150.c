/* libjpeg jcphuff.c emit_bits (open-source IJG libjpeg). */
typedef int INT32;
typedef unsigned char JOCTET;
typedef unsigned char boolean;
struct jpeg_common_struct;
struct jpeg_error_mgr_827C7150 {
    void (*error_exit)(struct jpeg_common_struct *cinfo);
    int pad[4];
    int msg_code;
};
struct jpeg_common_struct { struct jpeg_error_mgr_827C7150 *err; };
typedef struct phuff_entropy_encoder_827C7150 {
    void *pub[3];
    boolean gather_statistics;
    JOCTET *next_output_byte;
    unsigned int free_in_buffer;
    INT32 put_buffer;
    int put_bits;
    struct jpeg_common_struct *cinfo;
} *phuff_entropy_ptr;
extern void fn_827C70D0(phuff_entropy_ptr entropy);

#define emit_byte(entropy,val)  \
	{ *(entropy)->next_output_byte++ = (JOCTET) (val);  \
	  if (--(entropy)->free_in_buffer == 0)  \
	    fn_827C70D0(entropy); }

void fn_827C7150(phuff_entropy_ptr entropy, unsigned int code, int size)
{
  register INT32 put_buffer = (INT32) code;
  register int put_bits = entropy->put_bits;

  if (size == 0)
    ((entropy->cinfo)->err->msg_code = (0x28), (*(entropy->cinfo)->err->error_exit) ((struct jpeg_common_struct *) (entropy->cinfo)));

  if (entropy->gather_statistics)
    return;

  put_buffer &= (((INT32) 1)<<size) - 1;
  put_bits += size;
  put_buffer <<= 24 - put_bits;
  put_buffer |= entropy->put_buffer;

  while (put_bits >= 8) {
    int c = (int) ((put_buffer >> 16) & 0xFF);
    emit_byte(entropy, c);
    if (c == 0xFF) {
      emit_byte(entropy, 0);
    }
    put_buffer <<= 8;
    put_bits -= 8;
  }

  entropy->put_buffer = put_buffer;
  entropy->put_bits = put_bits;
}
