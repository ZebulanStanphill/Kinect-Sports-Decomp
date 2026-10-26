extern void fn_82810208(void *a, char *b, char *c);

void fn_83067378(char *param_1, void *param_2)
{
    fn_82810208(param_2, param_1, param_1);
    fn_82810208(param_2, param_1 + 0xc, param_1 + 0xc);
}
