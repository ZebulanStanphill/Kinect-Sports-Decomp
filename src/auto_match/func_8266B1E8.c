typedef struct {
    void *vt;
    char tag[8];
    unsigned char flag;
} Obj_8266B1E8;
extern int fn_82F6A3F8(char *dst, unsigned int size, const char *src, unsigned int count);
extern char lbl_820026B4[];

Obj_8266B1E8 *fn_8266B1E8(Obj_8266B1E8 *o)
{
    o->vt = lbl_820026B4;
    o->flag = 0;
    fn_82F6A3F8(o->tag, 8, "XLIPFSCP", 8);
    return o;
}
