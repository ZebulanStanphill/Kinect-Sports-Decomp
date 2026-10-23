typedef struct Err {
    void (*error_exit)(void *cinfo);
    int pad[4];
    int msg_code;
} Err;

typedef struct {
    Err *err;
} Cinfo;

extern void fn_827C5390(Cinfo *cinfo, int a);
extern void fn_827C53D8(Cinfo *cinfo, unsigned int a);

void fn_827C5A28(Cinfo *cinfo, int a, unsigned int len)
{
    if (len > 0xfffd) {
        cinfo->err->msg_code = 0xb;
        (*cinfo->err->error_exit)(cinfo);
    }
    fn_827C5390(cinfo, a);
    fn_827C53D8(cinfo, len + 2);
}
