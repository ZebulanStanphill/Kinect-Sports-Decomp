extern void *lbl_832975B0;

void *fn_82250A18(void);

static __forceinline unsigned char *GetObject_824365E0(void)
{
    if (lbl_832975B0 != 0) {
        return (unsigned char *)lbl_832975B0;
    }
    return (unsigned char *)fn_82250A18();
}

int fn_824365E0(void *param_1)
{
    unsigned char *object = GetObject_824365E0();

    return object[4] == 0 ||
           *(unsigned int *)(*(unsigned int *)((unsigned char *)param_1 + 0x40) + 0x168) > 0;
}
