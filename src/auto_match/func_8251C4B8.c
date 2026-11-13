typedef struct Obj_8251C4B8 Obj_8251C4B8;
typedef struct Vt_8251C4B8 {
    void *slots[17];
    unsigned int (*GetPlayer)(Obj_8251C4B8 *self);
} Vt_8251C4B8;
struct Obj_8251C4B8 {
    Vt_8251C4B8 *vt;
};

extern void *lbl_83265988;
extern void *fn_828EB518(unsigned int index);

unsigned char fn_8251C4B8(Obj_8251C4B8 *self)
{
    unsigned int index = self->vt->GetPlayer(self);
    void *p;
    if (index == 0xff)
        p = lbl_83265988;
    else
        p = fn_828EB518(index);
    return p != 0;
}
