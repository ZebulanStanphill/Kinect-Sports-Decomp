typedef struct Cont_82F96010 { int unk0; void *head; } Cont_82F96010;
typedef struct Iter_82F96010 { Cont_82F96010 *cont; void *ptr; } Iter_82F96010;
extern void *fn_82F92218(void *node);

void *fn_82F96010(Iter_82F96010 *it)
{
    if (it->cont == 0) {
        __debugbreak();
    }
    if (it->ptr == it->cont->head) {
        __debugbreak();
    }
    return fn_82F92218(it->ptr);
}
