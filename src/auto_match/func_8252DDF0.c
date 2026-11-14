typedef struct Data_8252DDF0 {
    unsigned char bytes[0x68];
} Data_8252DDF0;

extern Data_8252DDF0 lbl_832967B8[2];

void fn_8252DDF0(const Data_8252DDF0 *src, int index)
{
    if (src != 0 && index >= -1 && index <= 1) {
        if (index == -1) {
            lbl_832967B8[0] = *src;
            lbl_832967B8[1] = *src;
        } else {
            lbl_832967B8[index] = *src;
        }
    }
}
