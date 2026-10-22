typedef unsigned char JOCTET;
typedef unsigned int size_t;
typedef int boolean;
typedef unsigned int bit_buf_type;

struct jpeg_decompress_struct;
typedef struct jpeg_decompress_struct *j_decompress_ptr;

struct jpeg_error_mgr {
    void (*error_exit)(j_decompress_ptr cinfo);
    void (*emit_message)(j_decompress_ptr cinfo, int msg_level);
    int pad8[3];
    int msg_code;
};

struct jpeg_source_mgr {
    const JOCTET *next_input_byte;
    size_t bytes_in_buffer;
    void (*init_source)(j_decompress_ptr cinfo);
    boolean (*fill_input_buffer)(j_decompress_ptr cinfo);
};

struct jpeg_entropy_decoder {
    int pad0[2];
    boolean insufficient_data;
};

struct jpeg_decompress_struct {
    struct jpeg_error_mgr *err;
    int pad4[5];
    struct jpeg_source_mgr *src;
    int pad1c[(0x1a4 - 0x1c) / 4];
    int unread_marker;
    int pad1a8[(0x1c0 - 0x1a8) / 4];
    struct jpeg_entropy_decoder *entropy;
};

typedef struct {
    const JOCTET *next_input_byte;
    size_t bytes_in_buffer;
    bit_buf_type get_buffer;
    int bits_left;
    j_decompress_ptr cinfo;
} bitread_working_state;

#define MIN_GET_BITS 25
#define JWRN_HIT_MARKER 0x75
#define WARNMS(cinfo, code) \
    ((cinfo)->err->msg_code = (code), \
     (*(cinfo)->err->emit_message)((cinfo), -1))

boolean fn_829BCB40(bitread_working_state *state, bit_buf_type get_buffer,
                    int bits_left, int nbits)
{
    const JOCTET *next_input_byte = state->next_input_byte;
    size_t bytes_in_buffer = state->bytes_in_buffer;
    j_decompress_ptr cinfo = state->cinfo;

    if (cinfo->unread_marker == 0) {
        while (bits_left < MIN_GET_BITS) {
            int c;

            if (bytes_in_buffer == 0) {
                if (!(*cinfo->src->fill_input_buffer)(cinfo))
                    return 0;
                next_input_byte = cinfo->src->next_input_byte;
                bytes_in_buffer = cinfo->src->bytes_in_buffer;
            }
            bytes_in_buffer--;
            c = *next_input_byte++;

            if (c == 0xFF) {
                do {
                    if (bytes_in_buffer == 0) {
                        if (!(*cinfo->src->fill_input_buffer)(cinfo))
                            return 0;
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
                WARNMS(cinfo, JWRN_HIT_MARKER);
                cinfo->entropy->insufficient_data = 1;
            }
            get_buffer <<= MIN_GET_BITS - bits_left;
            bits_left = MIN_GET_BITS;
        }
    }

    state->next_input_byte = next_input_byte;
    state->bytes_in_buffer = bytes_in_buffer;
    state->get_buffer = get_buffer;
    state->bits_left = bits_left;

    return 1;
}
