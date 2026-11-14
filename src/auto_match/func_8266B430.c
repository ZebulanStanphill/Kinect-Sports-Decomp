typedef struct Table_8266B430 {
    unsigned int size;
    char list[0x58];
} Table_8266B430;

typedef struct Global_8266B430 {
    int head;
    char sub[0x10];
} Global_8266B430;

extern Table_8266B430 lbl_831E7A98;
extern Global_8266B430 lbl_831E7AF4;
extern void *fn_8265ED50(void *it);
extern void *fn_8265F570(void *p);
extern int fn_8265CF70(void *sub);

int fn_8266B430(int arg)
{
    int count;
    void *node;

    count = 0;
    if (lbl_831E7A98.size == 0x5c) {
        node = fn_8265ED50(lbl_831E7A98.list);
        while (node != 0) {
            count++;
            node = fn_8265ED50(fn_8265F570((char *)node + 0x3c));
        }
    } else {
        count = fn_8265CF70(lbl_831E7AF4.sub);
    }
    return count;
}
