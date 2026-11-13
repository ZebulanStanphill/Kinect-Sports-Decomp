typedef struct Ref_8229CDE0 { int handle; unsigned int owner; } Ref_8229CDE0;

typedef struct Obj_8229CDE0 {
    int f0;
    int f4;
    Ref_8229CDE0 texture;
} Obj_8229CDE0;

extern int fn_8266EC60(void);
extern Ref_8229CDE0 *fn_8266ECF0(Ref_8229CDE0 *out, int device, int name, int a, int b, int c, int d, int flags);
extern void fn_823F2E20(Ref_8229CDE0 *dst, Ref_8229CDE0 *src);
extern void fn_822315A0(unsigned int owner);
extern void fn_8266F6A8(int handle, int flags);
extern void fn_8229CE78(Obj_8229CDE0 *self, int arg);

Obj_8229CDE0 *fn_8229CDE0(Obj_8229CDE0 *self, int name, int arg)
{
    Ref_8229CDE0 tmp;
    Ref_8229CDE0 *tex = &self->texture;
    tex->handle = 0;
    tex->owner = 0;
    fn_823F2E20(tex, fn_8266ECF0(&tmp, fn_8266EC60(), name, 1, 0, -1, 0, 0x18280143));
    if (tmp.owner != 0) {
        fn_822315A0(tmp.owner);
    }
    fn_8266F6A8(tex->handle, 0x80);
    fn_8229CE78(self, arg);
    return self;
}
