typedef struct Item_82864228 {
    unsigned char data[0x34];
} Item_82864228;

typedef struct Owner_82864228 {
    int unk0;
    Item_82864228 *items;
    unsigned short count;
} Owner_82864228;

typedef struct Buf_82864228 {
    float v[4];
} Buf_82864228;

extern int lbl_832116B4[];
extern unsigned char *fn_82862120(Item_82864228 *item, int key);
extern void fn_82810328(Item_82864228 *item, int *key, Buf_82864228 *out);
extern float fn_82810280(Buf_82864228 *buf, void *pt);

void fn_82864228(Owner_82864228 *param_1, short *param_2, int *param_3)
{
    Buf_82864228 buf;
    Item_82864228 *item;
    unsigned char *flag;
    float a;
    float b;
    int i;

    *param_2 = 0;
    *param_3 = 0;
    for (i = 0; i < param_1->count; i++) {
        item = &param_1->items[i];
        flag = fn_82862120(item, lbl_832116B4[0]);
        fn_82810328(item, &lbl_832116B4[3], &buf);
        a = fn_82810280(&buf, item->data + 0x18);
        b = fn_82810280(&buf, item->data + 0x24);
        if ((a <= 0.0f && b > 0.0f) || (a > 0.0f && b <= 0.0f)) {
            *flag = 1;
            *param_3 = i;
            *param_2 = *param_2 + 1;
        } else {
            *flag = 0;
        }
    }
}
