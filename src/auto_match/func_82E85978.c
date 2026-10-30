extern unsigned short lbl_8324EDB0[];
extern unsigned short lbl_83256DB0[];

unsigned short fn_82E85978(unsigned char *p, int i)
{
    if (*(int *)(p + 0x7b38) != 0) {
        return lbl_8324EDB0[i + 0x2000];
    }
    return lbl_83256DB0[i + 0x2000];
}
