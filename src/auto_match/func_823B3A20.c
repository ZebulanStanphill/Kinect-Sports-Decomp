typedef struct { void (*fn)(void *); void *arg; } Callback;

void fn_823B3A20(Callback *c)
{
    c->fn(c->arg);
}
