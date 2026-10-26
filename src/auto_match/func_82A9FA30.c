typedef struct { void *arg; void (*fn)(void *); } Callback;

void fn_82A9FA30(Callback *c)
{
    c->fn(c->arg);
}
