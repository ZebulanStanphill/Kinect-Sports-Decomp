typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Obj_82464EC8 {
    void *vt;
    int f4;
    void *handle;
} Obj_82464EC8;

extern char lbl_821BBED0[];
extern char lbl_821BBE50[];
extern const float lbl_821CA45C[2];
extern void fn_8257E950(void *h, int a, int b, float x, float y, int c, __vector4 v);
extern void fn_8257E880(void *h, float v);

void fn_82464EC8(Obj_82464EC8 *self)
{
    self->vt = lbl_821BBED0;
    fn_8257E950(self->handle, 0, 0, 0.0f, 0.0f, 0, __VMXGetReg(77));
    fn_8257E880(self->handle, lbl_821CA45C[1]);
    self->vt = lbl_821BBE50;
}
