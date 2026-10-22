extern char lbl_8216CC7C[];
extern char lbl_8216D780[];
extern char lbl_8216D794[];
extern char lbl_8216D79C[];
extern char lbl_8216D7B4[];
void fn_82FABD78(void *p);
void fn_82FAD118(void *p);

typedef struct Obj {
    void *vt0;      /* 0x00 */
    void *vt1;      /* 0x04 */
    int pad08[2];   /* 0x08 */
    void *vt10;     /* 0x10 */
    int pad14;      /* 0x14 */
    void *vt18;     /* 0x18 */
    int pad1c[9];   /* 0x1c */
    void *vt40;     /* 0x40 */
    int pad44[5];   /* 0x44 */
    unsigned char flag; /* 0x58 */
} Obj;

Obj *fn_82FB3E80(Obj *this_)
{
    fn_82FABD78(this_);
    fn_82FAD118(&this_->vt40);
    this_->vt0 = lbl_8216D7B4;
    this_->vt1 = lbl_8216D79C;
    this_->vt10 = lbl_8216D794;
    this_->vt18 = lbl_8216CC7C;
    this_->vt40 = lbl_8216D780;
    this_->flag = 0;
    return this_;
}
