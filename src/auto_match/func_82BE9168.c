typedef struct Info_82BE9168 {
    char pad[0x16];
    unsigned short value;
} Info_82BE9168;

extern Info_82BE9168 *lbl_8322B22C;

unsigned short fn_82BE9168(void)
{
    return lbl_8322B22C != 0 ? lbl_8322B22C->value : 0;
}
