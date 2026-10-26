typedef struct { void (*fn)(void *); } Callback;

void fn_828E5FF0(Callback *c, void *arg)
{
    c->fn(arg);
}
