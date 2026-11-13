extern int fn_827E9A68(void *a, void *b, void *c, float scale, void *d, float f, void *e);
extern unsigned int fn_827E9A48(void);
extern void fn_827E9A38(unsigned int mode);
extern unsigned int lbl_831F13C0;

int fn_827EDCB8(void *a, float scale, void *b, void *c, float extra, void *d, float f, void *e)
{
    unsigned int saved = fn_827E9A48();
    int result;

    fn_827E9A38(lbl_831F13C0);
    result = fn_827E9A68(a, b, c, scale + extra, d, f, e);
    fn_827E9A38(saved);
    return result;
}
