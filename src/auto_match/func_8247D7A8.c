extern char lbl_821BD5A8[];
extern char lbl_821BE838[];
extern void fn_8226D6A0(void *p);
extern void fn_8251FA58(void *p);

typedef struct Owner_8247D7A8 { char pad[0x18ec]; void *res; } Owner_8247D7A8;
typedef struct Obj_8247D7A8 {
    void *vt;
    int pad4[5];
    Owner_8247D7A8 *owner;
    int pad1c[2];
    float time;
    void *p28;
    int pad2c;
    float limit;
} Obj_8247D7A8;

void fn_8247D7A8(Obj_8247D7A8 *self)
{
    self->vt = lbl_821BD5A8;
    if (self->time <= self->limit && self->owner->res != 0) {
        fn_8226D6A0(self->owner->res);
        self->owner->res = 0;
    }
    if (self->p28 != 0) {
        fn_8251FA58(self->p28);
        self->p28 = 0;
    }
    self->vt = lbl_821BE838;
}
