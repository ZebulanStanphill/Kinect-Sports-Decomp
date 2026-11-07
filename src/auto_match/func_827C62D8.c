/* Corresponds to libjpeg jchuff.c encode_one_block (open-source IJG libjpeg). */
typedef unsigned char boolean;

struct jpeg_error_mgr_827C62D8 {
    void (*error_exit)(void *cinfo);
    void (*emit_message)(void *cinfo, int msg_level);
    void (*output_message)(void *cinfo);
    void (*format_message)(void *cinfo, char *buffer);
    void (*reset_error_mgr)(void *cinfo);
    int msg_code;
};

struct Cinfo_827C62D8 {
    struct jpeg_error_mgr_827C62D8 *err;
};

typedef struct {
    unsigned char *next_output_byte;
    unsigned int free_in_buffer;
    int put_buffer;
    int put_bits;
    int last_dc_val[4];
    struct Cinfo_827C62D8 *cinfo;
} WorkingState_827C62D8;

typedef struct {
    unsigned int ehufco[256];
    char ehufsi[256];
} DerivedTbl_827C62D8;

extern boolean fn_827C6168(WorkingState_827C62D8 *state, unsigned int code, int size);
extern const int lbl_82017AE8[];

#define ERREXIT_827C62D8(cinfo, code) \
    ((cinfo)->err->msg_code = (code), \
     (*(cinfo)->err->error_exit)((void *)(cinfo)))

boolean fn_827C62D8(WorkingState_827C62D8 *state, short *block, int last_dc_val,
                    DerivedTbl_827C62D8 *dctbl, DerivedTbl_827C62D8 *actbl)
{
    int temp, temp2;
    int nbits;
    int k, r, i;

    temp = temp2 = block[0] - last_dc_val;

    if (temp < 0) {
        temp = -temp;
        temp2--;
    }

    nbits = 0;
    while (temp) {
        nbits++;
        temp >>= 1;
    }
    if (nbits > 11)
        ERREXIT_827C62D8(state->cinfo, 6);

    if (!fn_827C6168(state, dctbl->ehufco[nbits], dctbl->ehufsi[nbits]))
        return 0;

    if (nbits)
        if (!fn_827C6168(state, (unsigned int)temp2, nbits))
            return 0;

    r = 0;

    for (k = 1; k < 64; k++) {
        if ((temp = block[lbl_82017AE8[k]]) == 0) {
            r++;
        } else {
            while (r > 15) {
                if (!fn_827C6168(state, actbl->ehufco[0xF0], actbl->ehufsi[0xF0]))
                    return 0;
                r -= 16;
            }

            temp2 = temp;
            if (temp < 0) {
                temp = -temp;
                temp2--;
            }

            nbits = 1;
            while ((temp >>= 1))
                nbits++;
            if (nbits > 10)
                ERREXIT_827C62D8(state->cinfo, 6);

            i = (r << 4) + nbits;
            if (!fn_827C6168(state, actbl->ehufco[i], actbl->ehufsi[i]))
                return 0;

            if (!fn_827C6168(state, (unsigned int)temp2, nbits))
                return 0;

            r = 0;
        }
    }

    if (r > 0)
        if (!fn_827C6168(state, actbl->ehufco[0], actbl->ehufsi[0]))
            return 0;

    return 1;
}
