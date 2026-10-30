typedef struct Stk { char pad[0x15]; unsigned char flag; char pad2[0x20 - 0x16]; int arr[2]; int count; } Stk;
extern void fn_826E7B08(Stk *s, int v);

void fn_826E7BA8(Stk *s)
{
    fn_826E7B08(s, s->arr[--s->count]);
    s->flag = 0;
}
