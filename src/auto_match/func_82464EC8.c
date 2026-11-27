#include "xdk/vectorintrinsics.h"

typedef struct Obj_82464EC8 {
    void *vt;
    int f4;
    void *handle;
} Obj_82464EC8;

extern char lbl_821BBED0[];
extern char lbl_821BBE50[];
extern const float lbl_821CA45C[2];
extern void fn_8257E950(void *h, unsigned int index, __vector4 v, int b, float x, float y, int c);
extern void fn_8257E880(void *h, float v);

void fn_82464EC8(Obj_82464EC8 *self)
{
    self->vt = lbl_821BBED0;
    fn_8257E950(self->handle, 0, __VMXGetReg(77), 0, 0.0f, 0.0f, 0);
    fn_8257E880(self->handle, lbl_821CA45C[1]);
    self->vt = lbl_821BBE50;
}
