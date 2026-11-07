extern int fn_82D92868(char *self, char *entry);

void fn_82D92950(char *param_1)
{
    int i;
    char *e;

    if (*(unsigned char *)(param_1 + 200) != 0) {
        for (i = *(int *)(param_1 + 0x2c) - 1; i >= 0; i--) {
            e = (*(char ***)(param_1 + 0x28))[i];
            if ((*(unsigned char *)(e + 0x25) & 0xc0) != 0) {
                fn_82D92868(param_1, e);
            }
        }
    }
}
