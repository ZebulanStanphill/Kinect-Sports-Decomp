typedef struct Info_82BE9140 {
    char pad[0x14];
    unsigned short value;
} Info_82BE9140;

extern Info_82BE9140 *lbl_8322B22C;

unsigned short fn_82BE9140(void)
{
    return lbl_8322B22C != 0 ? lbl_8322B22C->value : 0;
}
