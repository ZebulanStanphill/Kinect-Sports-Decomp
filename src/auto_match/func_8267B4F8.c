typedef struct Info_8267B4F8 { unsigned char data[0x18]; } Info_8267B4F8;
typedef struct Obj_8267B4F8 Obj_8267B4F8;
typedef struct ObjVtbl_8267B4F8 {
    void (*get)(Obj_8267B4F8 *self, Info_8267B4F8 *info);
} ObjVtbl_8267B4F8;
struct Obj_8267B4F8 { ObjVtbl_8267B4F8 *vt; };
typedef struct Owner_8267B4F8 {
    char pad0[0xa4];
    Obj_8267B4F8 *obj;
} Owner_8267B4F8;

void *memset(void *dst, int c, unsigned int n);

void fn_8267B4F8(Owner_8267B4F8 *self, Info_8267B4F8 *info)
{
    memset(info, 0, sizeof(*info));
    self->obj->vt->get(self->obj, info);
}
