typedef struct Obj_827EFBF8 {
 char pad[0x2e]; unsigned short index; short pad30; unsigned short count;
 char pad34[0x84-0x34]; char *base;
} Obj_827EFBF8;
extern Obj_827EFBF8 *fn_827F3C28(void *);
int *fn_827EFBF8(void *p) {
 unsigned off = fn_827F3C28(p)->count * 12;
 off = (fn_827F3C28(p)->index + off) * 4;
 return (int *)(fn_827F3C28(p)->base + off);
}
