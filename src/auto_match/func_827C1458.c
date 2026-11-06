typedef unsigned int JDIMENSION;
typedef unsigned char boolean;
typedef unsigned int size_t;
typedef short JCOEF;
typedef JCOEF JBLOCK[64];
typedef JBLOCK *JBLOCKROW;
typedef JBLOCKROW *JBLOCKARRAY;

typedef struct jpeg_common_struct *j_common_ptr;
struct jpeg_error_mgr {
    void (*error_exit)(j_common_ptr cinfo);
    void *emit_message;
    void *output_message;
    void *format_message;
    void *reset_error_mgr;
    int msg_code;
};
struct jpeg_common_struct {
    struct jpeg_error_mgr *err;
};

typedef struct jvirt_barray_control {
    JBLOCKARRAY mem_buffer;
    JDIMENSION rows_in_array;
    JDIMENSION blocksperrow;
    JDIMENSION maxaccess;
    JDIMENSION rows_in_mem;
    JDIMENSION rowsperchunk;
    JDIMENSION cur_start_row;
    JDIMENSION first_undef_row;
    boolean pre_zero;
    boolean dirty;
    boolean b_s_open;
} *jvirt_barray_ptr;

#define JERR_BAD_VIRTUAL_ACCESS 0x16
#define JERR_VIRTUAL_BUG 0x45
#define ERREXIT(cinfo, code) \
    ((cinfo)->err->msg_code = (code), \
     (*(cinfo)->err->error_exit)((j_common_ptr)(cinfo)))

extern void fn_827C1188(j_common_ptr cinfo, jvirt_barray_ptr ptr, boolean writing);
extern void fn_827C1B68(void *target, size_t bytestozero);

JBLOCKARRAY fn_827C1458(j_common_ptr cinfo, jvirt_barray_ptr ptr,
                        JDIMENSION start_row, JDIMENSION num_rows,
                        boolean writable)
{
    JDIMENSION end_row = start_row + num_rows;
    JDIMENSION undef_row;

    if (end_row > ptr->rows_in_array || num_rows > ptr->maxaccess ||
        ptr->mem_buffer == 0)
        ERREXIT(cinfo, JERR_BAD_VIRTUAL_ACCESS);

    if (start_row < ptr->cur_start_row ||
        end_row > ptr->cur_start_row + ptr->rows_in_mem) {
        if (!ptr->b_s_open)
            ERREXIT(cinfo, JERR_VIRTUAL_BUG);
        if (ptr->dirty) {
            fn_827C1188(cinfo, ptr, 1);
            ptr->dirty = 0;
        }
        if (start_row > ptr->cur_start_row) {
            ptr->cur_start_row = start_row;
        } else {
            long ltemp;

            ltemp = (long)end_row - (long)ptr->rows_in_mem;
            if (ltemp < 0)
                ltemp = 0;
            ptr->cur_start_row = (JDIMENSION)ltemp;
        }
        fn_827C1188(cinfo, ptr, 0);
    }
    if (ptr->first_undef_row < end_row) {
        if (ptr->first_undef_row < start_row) {
            if (writable)
                ERREXIT(cinfo, JERR_BAD_VIRTUAL_ACCESS);
            undef_row = start_row;
        } else {
            undef_row = ptr->first_undef_row;
        }
        if (writable)
            ptr->first_undef_row = end_row;
        if (ptr->pre_zero) {
            size_t bytesperrow = (size_t)ptr->blocksperrow * sizeof(JBLOCK);
            undef_row -= ptr->cur_start_row;
            end_row -= ptr->cur_start_row;
            while (undef_row < end_row) {
                fn_827C1B68((void *)ptr->mem_buffer[undef_row], bytesperrow);
                undef_row++;
            }
        } else {
            if (!writable)
                ERREXIT(cinfo, JERR_BAD_VIRTUAL_ACCESS);
        }
    }
    if (writable)
        ptr->dirty = 1;
    return ptr->mem_buffer + (start_row - ptr->cur_start_row);
}
