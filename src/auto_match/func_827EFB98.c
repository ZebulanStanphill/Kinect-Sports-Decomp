typedef struct Obj_827EFB98 {
 char pad[0x2e]; unsigned short index; short pad30; unsigned short count;
 char pad34[0x84-0x34]; char *base;
} Obj_827EFB98;
extern Obj_827EFB98 *fn_827F3C20(void *);
int *fn_827EFB98(void *p) {
 unsigned off = fn_827F3C20(p)->count * 12;
 off = (fn_827F3C20(p)->index + off) * 4;
 return (int *)(fn_827F3C20(p)->base + off);
}
