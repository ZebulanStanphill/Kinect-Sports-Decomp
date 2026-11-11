typedef struct Static_8310B6A0 {
    char pad[0x44];
    int values[3];
    int pad2;
} Static_8310B6A0;

extern Static_8310B6A0 lbl_831D11D0;

void fn_8310B6A0(void)
{
    int i;
    for (i = 0; i < 3; i++)
        lbl_831D11D0.values[i] = 0;
}
