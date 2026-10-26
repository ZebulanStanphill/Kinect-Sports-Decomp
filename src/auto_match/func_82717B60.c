extern void fn_8269D480(void *p);
extern void fn_82715750(void *p, unsigned int i);

typedef struct { char pad[0x1c]; unsigned int count; } Info;
typedef struct { char pad[0x9c]; Info *info; } S;

void fn_82717B60(S *p)
{
  unsigned int i;
  for (i = 0; i < p->info->count; i++)
    fn_82715750(p, i);
  fn_8269D480(p);
}
