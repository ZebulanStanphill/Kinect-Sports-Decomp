extern void fn_829AB0F0(void *, const char *);
extern void fn_829AF1A8(void *, unsigned char *);
extern void fn_829AF1E8(void *, unsigned char *);
extern void fn_829AF4C8(void *, unsigned char *);
extern void fn_829AF638(void *, unsigned char *, void *);
extern void fn_829AF870(void *, unsigned char *);
extern void fn_829AF8C8(void *, unsigned char *, unsigned short, unsigned int);
extern void fn_829AFB90(void *, unsigned char *, unsigned int, unsigned int, unsigned int);
extern void fn_829AFFF0(void *, unsigned char *, unsigned int, unsigned int, unsigned short);
extern void fn_829B0290(void *, unsigned char *, void *);
extern void fn_829B0738(void *, unsigned char *, unsigned int, unsigned int);

typedef struct RowInfo_829B0D78 {
    unsigned int width;
    unsigned int rowbytes;
    unsigned char color_type;
} RowInfo_829B0D78;

typedef struct Png_829B0D78 {
    char pad0[0x55c];
    unsigned int f55c;
    unsigned int transformations;
    char pad1[0x5dc - 0x564];
    unsigned char *row_buf;
    char pad2[0x5f0 - 0x5e0];
    RowInfo_829B0D78 row_info;
    char pad3[0x604 - 0x5fc];
    unsigned int f604;
    char pad4[0x60a - 0x608];
    unsigned short num_trans;
    char pad5[0x616 - 0x60c];
    unsigned char c616;
    char pad6[0x61e - 0x617];
    unsigned short s61e;
    char pad7[0x62c - 0x620];
    unsigned int f62c;
    char pad8[0x638 - 0x630];
    unsigned int f638;
    char pad9[0x644 - 0x63c];
    unsigned int f644;
    char pad10[0x655 - 0x648];
    char c655[7];
    unsigned int f65c;
    char c660[0x674 - 0x660];
    unsigned int f674;
    unsigned int f678;
} Png_829B0D78;

void fn_829B0D78(Png_829B0D78 *p)
{
    if (p->row_buf == 0) {
        fn_829AB0F0(p, "NULL row buffer");
    }
    if (p->transformations & 0x1000) {
        if (p->row_info.color_type == 3) {
            fn_829AFFF0(&p->row_info, p->row_buf + 1, p->f604, p->f65c, p->num_trans);
        } else {
            if (p->num_trans != 0)
                fn_829B0290(&p->row_info, p->row_buf + 1, p->c660);
            else
                fn_829B0290(&p->row_info, p->row_buf + 1, 0);
        }
    }
    if ((p->transformations & 0x2000) && p->c616 != 3) {
        fn_829AFB90(&p->row_info, p->row_buf + 1, p->f638, p->f644, p->f62c);
    }
    if (p->transformations & 0x400) {
        fn_829AF870(&p->row_info, p->row_buf + 1);
    }
    if (p->transformations & 0x40) {
        fn_829B0738(&p->row_info, p->row_buf + 1, p->f674, p->f678);
        if (p->row_info.rowbytes == 0) {
            fn_829AB0F0(p, "png_do_dither returned rowbytes=0");
        }
    }
    if (p->transformations & 8) {
        fn_829AF638(&p->row_info, p->row_buf + 1, p->c655);
    }
    if (p->transformations & 4) {
        fn_829AF4C8(&p->row_info, p->row_buf + 1);
    }
    if (p->transformations & 1) {
        fn_829AF1E8(&p->row_info, p->row_buf + 1);
    }
    if (p->transformations & 0x8000) {
        fn_829AF8C8(&p->row_info, p->row_buf + 1, p->s61e, p->f55c);
    }
    if (p->transformations & 0x10) {
        fn_829AF1A8(&p->row_info, p->row_buf + 1);
    }
}
