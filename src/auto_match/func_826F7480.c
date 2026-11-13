typedef struct Src_826F7480 Src_826F7480;
typedef struct SrcVt_826F7480 {
    void *pad[12];
    int (*get)(Src_826F7480 *self);   /* 0x30 */
} SrcVt_826F7480;
struct Src_826F7480 { SrcVt_826F7480 *vt; };
typedef struct Obj_826F7480 {
    char pad[0x68];
    void *enabled;           /* 0x68 */
    Src_826F7480 *src;       /* 0x6c */
} Obj_826F7480;

extern void fn_8268B8E8(void *dst, int v);
extern unsigned char fn_82684270(void *dst);
extern void fn_8268BEA8(void *dst);

int fn_826F7480(Obj_826F7480 *o, void *dst)
{
    if (o->enabled == 0) {
        fn_8268BEA8(dst);
        return 0;
    }
    fn_8268B8E8(dst, o->src->vt->get(o->src));
    if (fn_82684270(dst) == 0) {
        fn_8268BEA8(dst);
        return 0;
    }
    return 1;
}
