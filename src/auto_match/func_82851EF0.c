extern void *memcpy(void *d, const void *s, unsigned int n);

/* 0xd0-byte state entry; byte-aligned so the copy stays a memcpy call */
typedef struct {
  unsigned char d[0xd0];
} Entry;

typedef struct {
  char pad[0x130];
  Entry stack[0x80];
  int top; /* 0x6930 */
} Obj;

/* push: duplicate the top entry */
void fn_82851EF0(Obj *p)
{
  memcpy(&p->stack[p->top + 1], &p->stack[p->top], sizeof(Entry));
  p->top++;
}
