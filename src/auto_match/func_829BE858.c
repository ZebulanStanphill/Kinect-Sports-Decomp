/* Corresponds to libjpeg jdpostct.c start_pass_dpost (open-source IJG libjpeg). */
typedef struct ErrMgr_829BE858 ErrMgr_829BE858;
typedef struct MemMgr_829BE858 MemMgr_829BE858;
typedef struct Cinfo_829BE858 Cinfo_829BE858;

struct ErrMgr_829BE858 {
    void (*error_exit)(Cinfo_829BE858 *cinfo);
    int pad04[4];
    int msg_code;
};

struct MemMgr_829BE858 {
    int pad00[7];
    void *(*access)(Cinfo_829BE858 *cinfo, void *arr, int start, int num, int writable);
};

typedef struct Other_829BE858 {
    int pad00;
    void *fn;
} Other_829BE858;

typedef struct Ctl_829BE858 {
    int pad00;
    void *fn;
    void *arr;
    void *buffer;
    int num;
    int f14;
    int f18;
} Ctl_829BE858;

struct Cinfo_829BE858 {
    ErrMgr_829BE858 *err;
    MemMgr_829BE858 *mem;
    int pad08[19];
    int flag54;
    int pad58[87];
    Ctl_829BE858 *ctl;
    int pad1b8[4];
    Other_829BE858 *other;
};

extern int fn_829BE7C0();

void fn_829BE858(Cinfo_829BE858 *cinfo, int mode)
{
    Ctl_829BE858 *c = cinfo->ctl;

    if (mode != 0) {
        cinfo->err->msg_code = 4;
        cinfo->err->error_exit(cinfo);
    } else if (cinfo->flag54 != 0) {
        c->fn = (void *)fn_829BE7C0;
        if (c->buffer == 0) {
            c->buffer = cinfo->mem->access(cinfo, c->arr, 0, c->num, 1);
        }
    } else {
        c->fn = cinfo->other->fn;
    }
    c->f18 = 0;
    c->f14 = 0;
}
