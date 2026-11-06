typedef struct Item_82B0A638 {
    int a;
    int b;
    unsigned int pad_hi : 5;
    unsigned int done : 1;
    unsigned int pad_lo : 26;
} Item_82B0A638;

extern Item_82B0A638 *fn_82B098F0(int param_1, int param_2, Item_82B0A638 *item, int zero);
extern int fn_82AF5548(int param_1, Item_82B0A638 *item, int param_4);
extern void fn_82AF8668(int value, unsigned int tagged);

void fn_82B0A638(int param_1, int param_2, Item_82B0A638 *param_3, int param_4, int *param_5)
{
    Item_82B0A638 *other;

    if ((unsigned char)param_3->done == 0) {
        other = fn_82B098F0(param_1, param_2, param_3, 0);
        if (other != 0 && (unsigned char)other->done == 0) {
            fn_82AF8668(param_5[fn_82AF5548(param_1, param_3, param_4)], (param_4 != 0) | (unsigned int)other);
            other->done = 1;
        }
    }
}
