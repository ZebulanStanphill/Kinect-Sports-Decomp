typedef struct Obj_82BAD768 { unsigned vt; unsigned a; int b; unsigned c; } Obj_82BAD768;
typedef struct Blk_82BAD768 { unsigned heap; Obj_82BAD768 o; } Blk_82BAD768;
extern Blk_82BAD768 *fn_82B7BD28(unsigned,int);
extern void fn_82BA03B8(Obj_82BAD768 *,unsigned);
extern unsigned *fn_82BC0088(unsigned,unsigned);
extern unsigned lbl_820DF68C;

void fn_82BAD768(unsigned *p, unsigned a, int b, unsigned c)
{
  Blk_82BAD768 *blk; Obj_82BAD768 *obj; unsigned heap;
  if (p[0x17] == 0) {
    heap = *(unsigned *)(*p + 0x5b0);
    blk = fn_82B7BD28(heap, 0x14);
    obj = &blk->o;
    blk->heap = heap;
    if (obj != 0) { fn_82BA03B8(obj, *(unsigned *)(*p + 0x5b0)); } else obj = 0;
    p[0x17] = (unsigned)obj;
  }
  heap = *(unsigned *)(*p + 0x5b0);
  blk = fn_82B7BD28(heap, 0x14);
  obj = &blk->o;
  blk->heap = heap;
  { Obj_82BAD768 *res; if (obj != 0) { int d = b - p[1]; obj->a = a; obj->c = c; obj->vt = (unsigned)&lbl_820DF68C; obj->b = d; res = obj; } else res = 0;
  *fn_82BC0088(p[0x17], *(unsigned *)(p[0x17] + 4)) = (unsigned)res; }
}
