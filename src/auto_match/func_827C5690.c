typedef struct Cinfo Cinfo;
typedef struct {
    void (*error_exit)(Cinfo *c);
    int pad4[4];
    int msg_code;
    int msg_parm;
} Err;
typedef struct {
    int component_id;
    int component_index;
    int h_samp_factor;
    int v_samp_factor;
    int quant_tbl_no;
    int pad[16];
} Comp;
struct Cinfo {
    Err *err;
    int pad4[6];
    unsigned int image_width;
    unsigned int image_height;
    int pad24[5];
    int data_precision;
    int num_components;
    int pad40;
    Comp *comp_info;
};

extern void fn_827C5308(Cinfo *c, int v);
extern void fn_827C5390(Cinfo *c, int code);
extern void fn_827C53D8(Cinfo *c, int v);

void fn_827C5690(Cinfo *cinfo, int code)
{
    int ci;
    Comp *compptr;

    fn_827C5390(cinfo, code);
    fn_827C53D8(cinfo, 3 * cinfo->num_components + 2 + 5 + 1);
    if ((long)cinfo->image_height > 65535L || (long)cinfo->image_width > 65535L) {
        cinfo->err->msg_code = 0x29;
        cinfo->err->msg_parm = (unsigned int)65535;
        (*cinfo->err->error_exit)(cinfo);
    }
    fn_827C5308(cinfo, cinfo->data_precision);
    fn_827C53D8(cinfo, (int)cinfo->image_height);
    fn_827C53D8(cinfo, (int)cinfo->image_width);
    fn_827C5308(cinfo, cinfo->num_components);
    for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
        fn_827C5308(cinfo, compptr->component_id);
        fn_827C5308(cinfo, (compptr->h_samp_factor << 4) + compptr->v_samp_factor);
        fn_827C5308(cinfo, compptr->quant_tbl_no);
    }
}
