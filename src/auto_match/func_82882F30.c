typedef struct Map_82882F30 {
    int unk0;
    char *head;
} Map_82882F30;

extern Map_82882F30 lbl_83212A00;
extern void fn_8289F160(char **out, Map_82882F30 *map, unsigned int *key);

void fn_82882F30(unsigned int *param_1)
{
    unsigned int key;
    char *it;
    char *v;
    unsigned int r;

    key = param_1[0];
    fn_8289F160(&it, &lbl_83212A00, &key);
    v = (it != lbl_83212A00.head) ? *(char **)(it + 0x10) : 0;
    r = *(unsigned int *)(v + 0x70);
    param_1[1] = r;
    if (r == 0) {
        param_1[1] = *(unsigned int *)(v + 0x7c);
    }
}
