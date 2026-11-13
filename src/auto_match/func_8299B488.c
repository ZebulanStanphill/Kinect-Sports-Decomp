extern void *memcpy(void *, const void *, unsigned int);
typedef struct Buf_8299B488 { int pad; unsigned int n1; void *p1; unsigned int n2; void *p2; } Buf_8299B488;
typedef struct Dst_8299B488 { int pad[2]; void *p1; int pad2; void *p2; } Dst_8299B488;
typedef struct Ent_8299B488 { char pad[0x38]; int v; } Ent_8299B488;
typedef struct Obj_8299B488 {
  char pad[0x14]; Ent_8299B488 **ents; Buf_8299B488 **dst; char pad2[0x29c]; Buf_8299B488 **src; Ent_8299B488 **sents; unsigned int nents; unsigned int nbufs;
} Obj_8299B488;

int fn_8299B488(Obj_8299B488 *o)
{
  unsigned int i;
  for (i = 0; i < o->nbufs; i++) {
    memcpy(o->dst[i]->p1, o->src[i]->p1, o->src[i]->n1 << 2);
    memcpy(o->dst[i]->p2, o->src[i]->p2, o->src[i]->n2 << 2);
  }
  for (i = 0; i < o->nents; i++) {
    Ent_8299B488 *s = o->sents[i];
    Ent_8299B488 *d = o->ents[i];
    d->v = s->v;
  }
  return 0;
}
