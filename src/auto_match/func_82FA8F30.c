typedef struct Triple_82FA8F30 {
    int a, b, c;
} Triple_82FA8F30;
extern void fn_82FA8948(void *, Triple_82FA8F30 *);

void fn_82FA8F30(void *param_1, int *param_2)
{
    Triple_82FA8F30 t;
    t.a = param_2[0];
    t.b = param_2[1];
    t.c = 0;
    fn_82FA8948(param_1, &t);
}
