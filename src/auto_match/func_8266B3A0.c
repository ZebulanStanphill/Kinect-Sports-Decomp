typedef struct {
    void *vt;
    char tag[8];
    int sub;
} Obj_8266B3A0;
extern void fn_8266B410(Obj_8266B3A0 *o);
extern void fn_82667010(int *sub, int arg);
extern int fn_82F6A3F8(char *dst, unsigned int size, const char *src, unsigned int count);
extern char lbl_82002800[];

Obj_8266B3A0 *fn_8266B3A0(Obj_8266B3A0 *o, int arg)
{
    fn_8266B410(o);
    o->vt = lbl_82002800;
    fn_82667010(&o->sub, arg);
    fn_82F6A3F8(o->tag, 8, "XLIPFSRT", 8);
    return o;
}
