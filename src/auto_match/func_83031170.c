extern void *memcpy(void *, const void *, unsigned);
extern unsigned char fn_830310B8(void *);

typedef struct Nd_83031170 { struct Nd_83031170 *next; int pad; } Nd_83031170;
typedef struct Pool_83031170 { Nd_83031170 *head; Nd_83031170 *last; Nd_83031170 *free; int pad[2]; int count; } Pool_83031170;

void *fn_83031170(Pool_83031170 *param_1, unsigned char *param_2)
{
  char *d;

  if (fn_830310B8(param_1) != 0) {
    if (param_1->last == 0) {
      param_1->head = param_1->free;
    } else {
      param_1->last->next = param_1->free;
    }
    param_1->last = param_1->free;
    param_1->free = param_1->last->next;
    param_1->last->next = 0;
    param_1->count = param_1->count + 1;
    d = (char *)param_1->last + 8;
    memcpy(d, param_2, 0x68);
    return d;
  }
  return 0;
}
