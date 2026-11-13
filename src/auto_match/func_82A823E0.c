typedef struct Handle_82A823E0 {
    unsigned short magic;   /* 0xf1ea */
    unsigned short state;
} Handle_82A823E0;

extern unsigned char lbl_83223458;

int fn_82A823E0(Handle_82A823E0 *h)
{
    if (!lbl_83223458)
        return 0x8000ffff;
    if (h->magic != 0xf1ea)
        return 0x8000ffff;
    if (h->state != 3)
        h->state = 2;
    return 0;
}
