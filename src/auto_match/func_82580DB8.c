extern int fn_82BFE460(unsigned int queue);

typedef struct Owner_82580DB8 {
  void *vtable;
  unsigned int queue;
} Owner_82580DB8;

int fn_82580DB8(Owner_82580DB8 *self)
{
  unsigned int queue = self->queue;
  if (queue != 0) {
    return fn_82BFE460(queue);
  }
  return 1;
}
